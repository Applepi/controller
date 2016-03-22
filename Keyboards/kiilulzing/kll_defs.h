/* Copyright (C) 2014-2015 by Jacob Alexander
 *
 * This file is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This file is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this file.  If not, see <http://www.gnu.org/licenses/>.
 */

// This file was generated by the kll compiler, DO NOT EDIT.
// Generation Date:    2016-03-21
// KLL Backend:        kiibohd
// KLL Git Rev:        55ffc6bdc5b5101fc54d9c4042174b566a23e291
// KLL Git Changes:    None
// Compiler arguments:
//    ../../kll/kll.py
//      /home/nota/controller/Scan/MatrixARM/capabilities.kll
//      /home/nota/controller/Macro/PartialMap/capabilities.kll
//      /home/nota/controller/Output/pjrcUSB/capabilities.kll
//      /home/nota/controller/Scan/kiilulz/defaultMap.kll
//      -d
//      /home/nota/controller/kll/layouts/md1Overlay.kll
//      /home/nota/controller/kll/layouts/stdFuncMap.kll
//      -p
//      /home/nota/controller/kll/layouts/hhkbpro2.kll
//      -p
//      /home/nota/controller/kll/layouts/colemak.kll
//    --backend
//      kiibohd
//    --templates
//      /home/nota/controller/kll/templates/kiibohdKeymap.h
//      /home/nota/controller/kll/templates/kiibohdDefs.h
//    --outputs
//      generatedKeymap.h
//      kll_defs.h
//
// - Base Layer -
//    MatrixArmCapabilities
//      /home/nota/controller/Scan/MatrixARM/capabilities.kll
//    PartialMapCapabilities
//      /home/nota/controller/Macro/PartialMap/capabilities.kll
//    pjrcUSBCapabilities
//      /home/nota/controller/Output/pjrcUSB/capabilities.kll
//    MD1
//      /home/nota/controller/Scan/kiilulz/defaultMap.kll
// - Default Layer -
//    md1Overlay
//      /home/nota/controller/kll/layouts/md1Overlay.kll
//    stdFuncMap
//      /home/nota/controller/kll/layouts/stdFuncMap.kll
// - Partial Layers -
//    Layer 1
//     hhkbpro2
//       /home/nota/controller/kll/layouts/hhkbpro2.kll
//    Layer 2
//     colemak
//       /home/nota/controller/kll/layouts/colemak.kll



#pragma once

// ----- Enums -----

// Capability Indices
typedef enum CapabilityIndex {
	CustomAction_action1_capability_index,
	CustomAction_blockHold_capability_index,
	CustomAction_blockKey_capability_index,
	Macro_layerLatch_capability_index,
	Macro_layerLock_capability_index,
	Macro_layerRotate_capability_index,
	Macro_layerShift_capability_index,
	Macro_layerState_capability_index,
	Output_consCtrlSend_capability_index,
	Output_flashMode_capability_index,
	Output_kbdProtocolBoot_capability_index,
	Output_kbdProtocolNKRO_capability_index,
	Output_noneSend_capability_index,
	Output_sysCtrlSend_capability_index,
	Output_usbCodeSend_capability_index,
	Output_usbMouse_capability_index,
} CapabilityIndex;



// ----- KLL Variables -----




// ----- Defines -----

// -- Interconnect Node Maximum --
#define InterconnectNodeMax 0x1



#define DebounceDivThreshold_define 65535
#define DebounceThrottleDiv_define 0
#define flashModeEnabled_define 0
#define USBProtocol_define 1
#define MinDebounceTime_define 5
#define StateWordSize_define 8
#define KeyboardLocale_define 0

