/* The MIT License (MIT)
 * 
 * Copyright (c) 2014 - 2015, Andreas Merkle
 * http://www.blue-andi.de
 * vscp@blue-andi.de
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 * 
 */

/*******************************************************************************
    DESCRIPTION
*******************************************************************************/
/**
@brief  VSCP framework class
@file   VSCP.h
@author Andreas Merkle, http://www.blue-andi.de

@section desc Description
This module provides a C++ wrapper for the VSCP framework.

@section svn Subversion
$Author: amerkle $
$Rev: 449 $
$Date: 2015-01-05 20:23:52 +0100 (Mo, 05 Jan 2015) $
*******************************************************************************/
/** @defgroup vscpFramework VSCP framework class
 * C++ wrapper for the VSCP framework.
 * @{
 */

/*
 * Don't forget to set JAVADOC_AUTOBRIEF to YES in the doxygen file to generate
 * a correct module description.
 */

#ifndef __VSCP_H__
#define __VSCP_H__

/*******************************************************************************
    INCLUDES
*******************************************************************************/
#if (100 <= ARDUINO)
#include "Arduino.h"
#else   /* (100 > ARDUINO) */
#include "WProgram.h"
#endif  /* (100 > ARDUINO) */

#include "SwTimer.h"
#include "framework/vscp_platform.h"
#include "framework/vscp_types.h"

#include "framework/vscp_class_l1.h"
#include "framework/vscp_class_l1_l2.h"
#include "framework/vscp_type_alarm.h"
#include "framework/vscp_type_control.h"
#include "framework/vscp_type_display.h"
#include "framework/vscp_type_information.h"
#include "framework/vscp_type_measurement.h"
#include "framework/vscp_type_measurezone.h"
#include "framework/vscp_type_phone.h"
#include "framework/vscp_type_remote.h"
#include "framework/vscp_type_security.h"
#include "framework/vscp_type_weather.h"
#include "framework/vscp_type_weather_forecast.h"

#ifdef __cplusplus
extern "C"
{
#endif

/*******************************************************************************
    COMPILER SWITCHES
*******************************************************************************/

/*******************************************************************************
    CONSTANTS
*******************************************************************************/

/*******************************************************************************
    MACROS
*******************************************************************************/

/*******************************************************************************
    CLASSES, TYPES AND STRUCTURES
*******************************************************************************/

/** VSCP node GUID - a unique identifier */
typedef unsigned char VSCPGuid[VSCP_GUID_SIZE];

/** VSCP framework class */
class VSCP
{
public:

    /** This type defines the transport receive function. */
    typedef bool (*TpRead)(vscp_RxMessage * const rxMsg);
    
    /** This type defines the transport transmit function. */
    typedef bool (*TpWrite)(vscp_TxMessage const * const txMsg);

    /**
     * Create a VSCP framework instance.
     */
    VSCP();

    /**
     * Destroys a VSCP framework instance.
     */
    ~VSCP();
    
    /**
     * Initializes a VSCP framework instance.
     *
     * @param[in]   statusLampPin   Pin of the status lamp
     * @param[in]   initButtonPin   Pin of the init button
     * @param[in]   guid            Node GUID
     * @param[in]   zone            Node zone
     * @param[in]   subZone         Node sub-zone
     * @param[in]   tpRead          Transport layer read function
     * @param[in]   tpWrite         Transport layer write function
     */
    void setup(
        int             statusLampPin,
        int             initButtonPin,
        const VSCPGuid& guid,
        unsigned char   zone,
        unsigned char   subZone,
        TpRead          tpReadFunc,
        TpWrite         tpWriteFunc);
    
    /**
     * This method restores VSCP default values for
     * - all registers,
     * - the persistent memory,
     * - internal variables.
     *
     * In other words, it restore factory defaults settings.
     */
    void restoreFactoryDefaultSettings(void);

    /**
     * This method process the whole VSCP core stack. Call it in a user defined
     * cyclic period.
     */
    void process(void);

    /**
     * This method reads the nickname id of the node.
     *
     * @return  Nickname id
     */
    uint8_t readNicknameId(void);

    /**
     * This method starts the node segment initialization.
     */
    void startNodeSegmentInit(void);

    /**
     * This method set one or more alarm status.
     * How the bits are read, is application specific.
     * Note that a active alarm (bit is set) can only be cleared by reading the
     * alarm register. Calling this method with 0, do nothing.
     *
     * @param[in]   value   New alarm status
     */
    void setAlarm(uint8_t value);

    /**
     * This method determines the state of VSCP and if it is in active state,
     * it will return true, otherwise false.
     *
     * @return  Is VSCP active or not?
     * @retval  false   Not in active state
     * @retval  true    In active state
     */
    bool isActive(void);
    
private:

    /* Never copy the VSCP framework */
    VSCP(const VSCP& vscp);

    /* Never copy the VSCP framework */
    VSCP& operator=(const VSCP& vscp);
    
    bool                mIsInitialized;     /**< Is framework initialized or not */
    
    int                 mStatusLampPin;     /**< Status lamp pin */
    int                 mInitButtonPin;     /**< Segment initialization button pin */
        
    VSCP_LAMP_STATE     mStatusLampState;   /**< Current state of the status lamp */
    const unsigned int  mStatusLampPeriod;  /**< Status lamp blinking periode in ms */
    SwTimer             mStatusLampTimer;   /**< Status lamp timer used for blinking */
    
    const unsigned int  mVSCPTimerPeriod;   /**< VSCP timer period in ms */
    SwTimer             mVSCPTimer;         /**< VSCP timer */
    
    TpRead              mTpReadFunc;        /**< Transport layer receive function */
    TpWrite             mTpWriteFunc;       /**< Transport layer transmit function */
    
    /**
     * Process the status lamp.
     */
    void processStatusLamp(void);
};

/*******************************************************************************
    VARIABLES
*******************************************************************************/

/*******************************************************************************
    FUNCTIONS
*******************************************************************************/

#ifdef __cplusplus
}
#endif

#endif  /* __VSCP_H__ */

/** @} */