/* The MIT License (MIT)
 *
 * Copyright (c) 2014 - 2019, Andreas Merkle
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
@brief  VSCP class 1 type Weather events
@file   vscp_weather.h
@author Andreas Merkle, http://www.blue-andi.de

@section desc Description
Weather reporting. Used to report current weather conditions.

This file is automatically generated. Don't change it manually.

*******************************************************************************/
/** @defgroup vscp_weather Weather events abstraction
 * Level 1 weather events abstraction
 * @{
 * @ingroup vscp_l1_events_abstraction
 */

#ifndef __VSCP_WEATHER_H__
#define __VSCP_WEATHER_H__

/*******************************************************************************
    INCLUDES
*******************************************************************************/
#include <stdint.h>
#include "../core/vscp_types.h"

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
    TYPES AND STRUCTURES
*******************************************************************************/

/*******************************************************************************
    VARIABLES
*******************************************************************************/

/*******************************************************************************
    FUNCTIONS
*******************************************************************************/

/**
 * General control.
 *
 * @return Status
 * @retval FALSE Failed to send the event
 * @retval TRUE  Event successul sent
 *
 */
extern BOOL vscp_weather_sendUndefinedEvent(void);

/**
 * The winter season as started.
 *
 * @param[in] index Index.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * @return Status
 * @retval FALSE Failed to send the event
 * @retval TRUE  Event successul sent
 *
 */
extern BOOL vscp_weather_sendSeasonWinterEvent(uint8_t index, uint8_t zone, uint8_t subZone);

/**
 * The spring season has started.
 *
 * @param[in] index Index.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * @return Status
 * @retval FALSE Failed to send the event
 * @retval TRUE  Event successul sent
 *
 */
extern BOOL vscp_weather_sendSeasonSpringEvent(uint8_t index, uint8_t zone, uint8_t subZone);

/**
 * The summer season has started.
 *
 * @param[in] index Index.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * @return Status
 * @retval FALSE Failed to send the event
 * @retval TRUE  Event successul sent
 *
 */
extern BOOL vscp_weather_sendSeasonSummerEvent(uint8_t index, uint8_t zone, uint8_t subZone);

/**
 * The autumn season has started.
 *
 * @param[in] index Index.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * @return Status
 * @retval FALSE Failed to send the event
 * @retval TRUE  Event successul sent
 *
 */
extern BOOL vscp_weather_sendAutumnSummerEvent(uint8_t index, uint8_t zone, uint8_t subZone);

/**
 * No wind
 *
 * @param[in] index Index.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * @return Status
 * @retval FALSE Failed to send the event
 * @retval TRUE  Event successul sent
 *
 */
extern BOOL vscp_weather_sendWinNoneEvent(uint8_t index, uint8_t zone, uint8_t subZone);

/**
 * Low wind speed conditions.
 *
 * @param[in] index Index.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * @return Status
 * @retval FALSE Failed to send the event
 * @retval TRUE  Event successul sent
 *
 */
extern BOOL vscp_weather_sendLowWindEvent(uint8_t index, uint8_t zone, uint8_t subZone);

/**
 * Medium wind speed conditions.
 *
 * @param[in] index Index.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * @return Status
 * @retval FALSE Failed to send the event
 * @retval TRUE  Event successul sent
 *
 */
extern BOOL vscp_weather_sendMediumWindEvent(uint8_t index, uint8_t zone, uint8_t subZone);

/**
 * High wind speed conditions.
 *
 * @param[in] index Index.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * @return Status
 * @retval FALSE Failed to send the event
 * @retval TRUE  Event successul sent
 *
 */
extern BOOL vscp_weather_sendHighWindEvent(uint8_t index, uint8_t zone, uint8_t subZone);

/**
 * Very high wind speed conditions.
 *
 * @param[in] index Index.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * @return Status
 * @retval FALSE Failed to send the event
 * @retval TRUE  Event successul sent
 *
 */
extern BOOL vscp_weather_sendVeryHighWindEvent(uint8_t index, uint8_t zone, uint8_t subZone);

/**
 * Fogg.
 *
 * @param[in] index Index.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * @return Status
 * @retval FALSE Failed to send the event
 * @retval TRUE  Event successul sent
 *
 */
extern BOOL vscp_weather_sendAirFoggyEvent(uint8_t index, uint8_t zone, uint8_t subZone);

/**
 * Freezing.
 *
 * @param[in] index Index.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * @return Status
 * @retval FALSE Failed to send the event
 * @retval TRUE  Event successul sent
 *
 */
extern BOOL vscp_weather_sendAirFreezingEvent(uint8_t index, uint8_t zone, uint8_t subZone);

/**
 * Cold
 *
 * @param[in] index Index.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * @return Status
 * @retval FALSE Failed to send the event
 * @retval TRUE  Event successul sent
 *
 */
extern BOOL vscp_weather_sendColdEvent(uint8_t index, uint8_t zone, uint8_t subZone);

/**
 * Very cold
 *
 * @param[in] index Index.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * @return Status
 * @retval FALSE Failed to send the event
 * @retval TRUE  Event successul sent
 *
 */
extern BOOL vscp_weather_sendVeryColdEvent(uint8_t index, uint8_t zone, uint8_t subZone);

/**
 * Air normal
 *
 * @param[in] index Index.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * @return Status
 * @retval FALSE Failed to send the event
 * @retval TRUE  Event successul sent
 *
 */
extern BOOL vscp_weather_sendAirNormalEvent(uint8_t index, uint8_t zone, uint8_t subZone);

/**
 * Air hot
 *
 * @param[in] index Index.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * @return Status
 * @retval FALSE Failed to send the event
 * @retval TRUE  Event successul sent
 *
 */
extern BOOL vscp_weather_sendAirHotEvent(uint8_t index, uint8_t zone, uint8_t subZone);

/**
 * Air very hot
 *
 * @param[in] index Index.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * @return Status
 * @retval FALSE Failed to send the event
 * @retval TRUE  Event successul sent
 *
 */
extern BOOL vscp_weather_sendAirVeryHotEvent(uint8_t index, uint8_t zone, uint8_t subZone);

/**
 * Pollution low
 *
 * @param[in] index Index.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * @return Status
 * @retval FALSE Failed to send the event
 * @retval TRUE  Event successul sent
 *
 */
extern BOOL vscp_weather_sendPollutionLowEvent(uint8_t index, uint8_t zone, uint8_t subZone);

/**
 * Pollution medium
 *
 * @param[in] index Index.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * @return Status
 * @retval FALSE Failed to send the event
 * @retval TRUE  Event successul sent
 *
 */
extern BOOL vscp_weather_sendPollutionMediumEvent(uint8_t index, uint8_t zone, uint8_t subZone);

/**
 * Pollution high
 *
 * @param[in] index Index.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * @return Status
 * @retval FALSE Failed to send the event
 * @retval TRUE  Event successul sent
 *
 */
extern BOOL vscp_weather_sendPollutionHighEvent(uint8_t index, uint8_t zone, uint8_t subZone);

/**
 * Air humid
 *
 * @param[in] index Index.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * @return Status
 * @retval FALSE Failed to send the event
 * @retval TRUE  Event successul sent
 *
 */
extern BOOL vscp_weather_sendAirHumidEvent(uint8_t index, uint8_t zone, uint8_t subZone);

/**
 * Air dry
 *
 * @param[in] index Index.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * @return Status
 * @retval FALSE Failed to send the event
 * @retval TRUE  Event successul sent
 *
 */
extern BOOL vscp_weather_sendAirDryEvent(uint8_t index, uint8_t zone, uint8_t subZone);

/**
 * soil humid
 *
 * @param[in] index Index.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * @return Status
 * @retval FALSE Failed to send the event
 * @retval TRUE  Event successul sent
 *
 */
extern BOOL vscp_weather_sendSoilHumidEvent(uint8_t index, uint8_t zone, uint8_t subZone);

/**
 * soil dry
 *
 * @param[in] index Index.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * @return Status
 * @retval FALSE Failed to send the event
 * @retval TRUE  Event successul sent
 *
 */
extern BOOL vscp_weather_sendSoilDryEvent(uint8_t index, uint8_t zone, uint8_t subZone);

/**
 * Rain none
 *
 * @param[in] index Index.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * @return Status
 * @retval FALSE Failed to send the event
 * @retval TRUE  Event successul sent
 *
 */
extern BOOL vscp_weather_sendRainNoneEvent(uint8_t index, uint8_t zone, uint8_t subZone);

/**
 * Rain light
 *
 * @param[in] index Index.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * @return Status
 * @retval FALSE Failed to send the event
 * @retval TRUE  Event successul sent
 *
 */
extern BOOL vscp_weather_sendRainLightEvent(uint8_t index, uint8_t zone, uint8_t subZone);

/**
 * Rain heavy
 *
 * @param[in] index Index.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * @return Status
 * @retval FALSE Failed to send the event
 * @retval TRUE  Event successul sent
 *
 */
extern BOOL vscp_weather_sendRainHeavyEvent(uint8_t index, uint8_t zone, uint8_t subZone);

/**
 * Rain very heavy
 *
 * @param[in] index Index.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * @return Status
 * @retval FALSE Failed to send the event
 * @retval TRUE  Event successul sent
 *
 */
extern BOOL vscp_weather_sendRainVeryHeavyEvent(uint8_t index, uint8_t zone, uint8_t subZone);

/**
 * Sun none
 *
 * @param[in] index Index.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * @return Status
 * @retval FALSE Failed to send the event
 * @retval TRUE  Event successul sent
 *
 */
extern BOOL vscp_weather_sendSunNoneEvent(uint8_t index, uint8_t zone, uint8_t subZone);

/**
 * Sun light
 *
 * @param[in] index Index.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * @return Status
 * @retval FALSE Failed to send the event
 * @retval TRUE  Event successul sent
 *
 */
extern BOOL vscp_weather_sendSunLightEvent(uint8_t index, uint8_t zone, uint8_t subZone);

/**
 * Sun heavy
 *
 * @param[in] index Index.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * @return Status
 * @retval FALSE Failed to send the event
 * @retval TRUE  Event successul sent
 *
 */
extern BOOL vscp_weather_sendSunHeavyEvent(uint8_t index, uint8_t zone, uint8_t subZone);

/**
 * Snow none.
 *
 * @param[in] index Index.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * @return Status
 * @retval FALSE Failed to send the event
 * @retval TRUE  Event successul sent
 *
 */
extern BOOL vscp_weather_sendSnowNoneEvent(uint8_t index, uint8_t zone, uint8_t subZone);

/**
 * Snow light.
 *
 * @param[in] index Index.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * @return Status
 * @retval FALSE Failed to send the event
 * @retval TRUE  Event successul sent
 *
 */
extern BOOL vscp_weather_sendSnowLightEvent(uint8_t index, uint8_t zone, uint8_t subZone);

/**
 * Snow heavy.
 *
 * @param[in] index Index.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * @return Status
 * @retval FALSE Failed to send the event
 * @retval TRUE  Event successul sent
 *
 */
extern BOOL vscp_weather_sendSnowHeavyEvent(uint8_t index, uint8_t zone, uint8_t subZone);

/**
 * Dew point.
 *
 * @param[in] index Index.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * @return Status
 * @retval FALSE Failed to send the event
 * @retval TRUE  Event successul sent
 *
 */
extern BOOL vscp_weather_sendDewPointEvent(uint8_t index, uint8_t zone, uint8_t subZone);

/**
 * Storm.
 *
 * @param[in] index Index.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * @return Status
 * @retval FALSE Failed to send the event
 * @retval TRUE  Event successul sent
 *
 */
extern BOOL vscp_weather_sendStormEvent(uint8_t index, uint8_t zone, uint8_t subZone);

/**
 * Flood.
 *
 * @param[in] index Index.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * @return Status
 * @retval FALSE Failed to send the event
 * @retval TRUE  Event successul sent
 *
 */
extern BOOL vscp_weather_sendFloodEvent(uint8_t index, uint8_t zone, uint8_t subZone);

/**
 * Earthquake
 *
 * @param[in] index Index.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * @return Status
 * @retval FALSE Failed to send the event
 * @retval TRUE  Event successul sent
 *
 */
extern BOOL vscp_weather_sendEarthquakeEvent(uint8_t index, uint8_t zone, uint8_t subZone);

/**
 * Nuclera disaster
 *
 * @param[in] index Index.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * @return Status
 * @retval FALSE Failed to send the event
 * @retval TRUE  Event successul sent
 *
 */
extern BOOL vscp_weather_sendNuclearDisasterEvent(uint8_t index, uint8_t zone, uint8_t subZone);

/**
 * Fire.
 *
 * @param[in] index Index.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * @return Status
 * @retval FALSE Failed to send the event
 * @retval TRUE  Event successul sent
 *
 */
extern BOOL vscp_weather_sendFireEvent(uint8_t index, uint8_t zone, uint8_t subZone);

/**
 * Lightning.
 *
 * @param[in] index Index.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * @return Status
 * @retval FALSE Failed to send the event
 * @retval TRUE  Event successul sent
 *
 */
extern BOOL vscp_weather_sendLightningEvent(uint8_t index, uint8_t zone, uint8_t subZone);

/**
 * Radiation low.
 *
 * @param[in] index Index.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * @return Status
 * @retval FALSE Failed to send the event
 * @retval TRUE  Event successul sent
 *
 */
extern BOOL vscp_weather_sendUvRadiationLowEvent(uint8_t index, uint8_t zone, uint8_t subZone);

/**
 * Radiation medium.
 *
 * @param[in] index Index.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * @return Status
 * @retval FALSE Failed to send the event
 * @retval TRUE  Event successul sent
 *
 */
extern BOOL vscp_weather_sendUvRadiationMediumEvent(uint8_t index, uint8_t zone, uint8_t subZone);

/**
 * Radiation normal.
 *
 * @param[in] index Index.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * @return Status
 * @retval FALSE Failed to send the event
 * @retval TRUE  Event successul sent
 *
 */
extern BOOL vscp_weather_sendUvRadiationNormalEvent(uint8_t index, uint8_t zone, uint8_t subZone);

/**
 * Radiation high.
 *
 * @param[in] index Index.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * @return Status
 * @retval FALSE Failed to send the event
 * @retval TRUE  Event successul sent
 *
 */
extern BOOL vscp_weather_sendUvRadiationHighEvent(uint8_t index, uint8_t zone, uint8_t subZone);

/**
 * Radiation very high.
 *
 * @param[in] index Index.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * @return Status
 * @retval FALSE Failed to send the event
 * @retval TRUE  Event successul sent
 *
 */
extern BOOL vscp_weather_sendUvRadiationVeryHighEvent(uint8_t index, uint8_t zone, uint8_t subZone);

/**
 * Warning level 1. This is the lowest varning level.
 *
 * @param[in] index Index.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * @return Status
 * @retval FALSE Failed to send the event
 * @retval TRUE  Event successul sent
 *
 */
extern BOOL vscp_weather_sendWarningLevel1Event(uint8_t index, uint8_t zone, uint8_t subZone);

/**
 * Warninglevel 2.
 *
 * @param[in] index Index.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * @return Status
 * @retval FALSE Failed to send the event
 * @retval TRUE  Event successul sent
 *
 */
extern BOOL vscp_weather_sendWarningLevel2Event(uint8_t index, uint8_t zone, uint8_t subZone);

/**
 * Warninglevel 3.
 *
 * @param[in] index Index.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * @return Status
 * @retval FALSE Failed to send the event
 * @retval TRUE  Event successul sent
 *
 */
extern BOOL vscp_weather_sendWarningLevel3Event(uint8_t index, uint8_t zone, uint8_t subZone);

/**
 * Warning level 4.
 *
 * @param[in] index Index.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * @return Status
 * @retval FALSE Failed to send the event
 * @retval TRUE  Event successul sent
 *
 */
extern BOOL vscp_weather_sendWarningLevel4Event(uint8_t index, uint8_t zone, uint8_t subZone);

/**
 * Warning level 5. This is the highest warning level.
 *
 * @param[in] index Index.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * @return Status
 * @retval FALSE Failed to send the event
 * @retval TRUE  Event successul sent
 *
 */
extern BOOL vscp_weather_sendWarningLevel5Event(uint8_t index, uint8_t zone, uint8_t subZone);

/**
 * The final warning level not seen by humans.
 *
 * @param[in] index Index.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * @return Status
 * @retval FALSE Failed to send the event
 * @retval TRUE  Event successul sent
 *
 */
extern BOOL vscp_weather_sendArmageddonEvent(uint8_t index, uint8_t zone, uint8_t subZone);

#endif /* __VSCP_WEATHER_H__ */

/** @} */
