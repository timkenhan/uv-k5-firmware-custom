/* Copyright 2023 Dual Tachyon
 * https://github.com/DualTachyon
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 *     Unless required by applicable law or agreed to in writing, software
 *     distributed under the License is distributed on an "AS IS" BASIS,
 *     WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *     See the License for the specific language governing permissions and
 *     limitations under the License.
 */

#include "font.h"

const uint8_t gFontBig[95][16] = {
	{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
	{ 0x00, 0x00, 0x70, 0xF8, 0xF8, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1B, 0x1B, 0x00, 0x00, 0x00 },
	{ 0x00, 0x1E, 0x3E, 0x00, 0x00, 0x3E, 0x1E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
	{ 0x40, 0xF0, 0xF0, 0x40, 0xF0, 0xF0, 0x40, 0x00, 0x04, 0x1F, 0x1F, 0x04, 0x1F, 0x1F, 0x04, 0x00 },
	{ 0x70, 0xF8, 0x88, 0x8F, 0x8F, 0x98, 0x30, 0x00, 0x06, 0x0C, 0x08, 0x38, 0x38, 0x0F, 0x07, 0x00 },
	{ 0x60, 0x60, 0x00, 0x00, 0x80, 0xC0, 0x60, 0x00, 0x18, 0x0C, 0x06, 0x03, 0x01, 0x18, 0x18, 0x00 },
	{ 0x00, 0xB0, 0xF8, 0xC8, 0x78, 0xB0, 0x80, 0x00, 0x0F, 0x1F, 0x10, 0x11, 0x0F, 0x1F, 0x10, 0x00 },
	{ 0x00, 0x20, 0x3E, 0x1E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
	{ 0x00, 0x00, 0xE0, 0xF0, 0x18, 0x08, 0x00, 0x00, 0x00, 0x00, 0x07, 0x0F, 0x18, 0x10, 0x00, 0x00 },
	{ 0x00, 0x00, 0x08, 0x18, 0xF0, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x10, 0x18, 0x0F, 0x07, 0x00, 0x00 },
	{ 0x00, 0x40, 0xC0, 0x80, 0x80, 0xC0, 0x40, 0x00, 0x01, 0x05, 0x07, 0x03, 0x03, 0x07, 0x05, 0x01 },
	{ 0x00, 0x00, 0x00, 0xC0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x07, 0x07, 0x01, 0x01, 0x00 },
	{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x3C, 0x1C, 0x00, 0x00, 0x00 },
	{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00 },
	{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x00, 0x00, 0x00 },
	{ 0x00, 0x00, 0x00, 0x00, 0x80, 0xC0, 0x60, 0x00, 0x18, 0x0C, 0x06, 0x03, 0x01, 0x00, 0x00, 0x00 },
	{ 0xF0, 0xF8, 0x08, 0x88, 0x48, 0xF8, 0xF0, 0x00, 0x0F, 0x1F, 0x12, 0x11, 0x10, 0x1F, 0x0F, 0x00 },
	{ 0x00, 0x20, 0x30, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x10, 0x10, 0x1F, 0x1F, 0x10, 0x10, 0x00 },
	{ 0x10, 0x18, 0x08, 0x88, 0xC8, 0x78, 0x30, 0x00, 0x1C, 0x1E, 0x13, 0x11, 0x10, 0x18, 0x18, 0x00 },
	{ 0x10, 0x18, 0x88, 0x88, 0x88, 0xF8, 0x70, 0x00, 0x08, 0x18, 0x10, 0x10, 0x10, 0x1F, 0x0F, 0x00 },
	{ 0x80, 0xC0, 0x60, 0x30, 0xF8, 0xF8, 0x00, 0x00, 0x01, 0x01, 0x01, 0x11, 0x1F, 0x1F, 0x11, 0x00 },
	{ 0xF8, 0xF8, 0x88, 0x88, 0x88, 0x88, 0x08, 0x00, 0x08, 0x18, 0x10, 0x10, 0x11, 0x1F, 0x0F, 0x00 },
	{ 0xE0, 0xF0, 0x98, 0x88, 0x88, 0x80, 0x00, 0x00, 0x0F, 0x1F, 0x10, 0x10, 0x10, 0x1F, 0x0F, 0x00 },
	{ 0x18, 0x18, 0x08, 0x08, 0x88, 0xF8, 0x78, 0x00, 0x00, 0x00, 0x1E, 0x1F, 0x01, 0x00, 0x00, 0x00 },
	{ 0x70, 0xF8, 0x88, 0x88, 0x88, 0xF8, 0x70, 0x00, 0x0F, 0x1F, 0x10, 0x10, 0x10, 0x1F, 0x0F, 0x00 },
	{ 0x70, 0xF8, 0x88, 0x88, 0x88, 0xF8, 0xF0, 0x00, 0x00, 0x10, 0x10, 0x10, 0x18, 0x0F, 0x07, 0x00 },
	{ 0x00, 0x00, 0x00, 0x60, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x0C, 0x00, 0x00, 0x00 },
	{ 0x00, 0x00, 0x00, 0x60, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x1C, 0x0C, 0x00, 0x00, 0x00 },
	{ 0x00, 0x00, 0x80, 0xC0, 0x60, 0x30, 0x10, 0x00, 0x00, 0x01, 0x03, 0x06, 0x0C, 0x18, 0x10, 0x00 },
	{ 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x00, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x00 },
	{ 0x00, 0x10, 0x30, 0x60, 0xC0, 0x80, 0x00, 0x00, 0x00, 0x10, 0x18, 0x0C, 0x06, 0x03, 0x01, 0x00 },
	{ 0x30, 0x38, 0x08, 0x88, 0xC8, 0x78, 0x30, 0x00, 0x00, 0x00, 0x00, 0x1B, 0x1B, 0x00, 0x00, 0x00 },
	{ 0xE0, 0xF0, 0x10, 0x90, 0x90, 0xF0, 0xE0, 0x00, 0x0F, 0x1F, 0x10, 0x17, 0x17, 0x17, 0x03, 0x00 },
	{ 0xC0, 0xE0, 0x30, 0x18, 0x30, 0xE0, 0xC0, 0x00, 0x1F, 0x1F, 0x01, 0x01, 0x01, 0x1F, 0x1F, 0x00 },
	{ 0x08, 0xF8, 0xF8, 0x88, 0x88, 0xF8, 0x70, 0x00, 0x10, 0x1F, 0x1F, 0x10, 0x10, 0x1F, 0x0F, 0x00 },
	{ 0xE0, 0xF0, 0x18, 0x08, 0x08, 0x18, 0x30, 0x00, 0x07, 0x0F, 0x18, 0x10, 0x10, 0x18, 0x0C, 0x00 },
	{ 0x08, 0xF8, 0xF8, 0x08, 0x18, 0xF0, 0xE0, 0x00, 0x10, 0x1F, 0x1F, 0x10, 0x18, 0x0F, 0x07, 0x00 },
	{ 0x08, 0xF8, 0xF8, 0x88, 0xC8, 0x18, 0x38, 0x00, 0x10, 0x1F, 0x1F, 0x10, 0x11, 0x18, 0x1C, 0x00 },
	{ 0x08, 0xF8, 0xF8, 0x88, 0xC8, 0x18, 0x38, 0x00, 0x10, 0x1F, 0x1F, 0x10, 0x01, 0x00, 0x00, 0x00 },
	{ 0xE0, 0xF0, 0x18, 0x08, 0x08, 0x18, 0x30, 0x00, 0x07, 0x0F, 0x18, 0x11, 0x11, 0x0F, 0x1F, 0x00 },
	{ 0xF8, 0xF8, 0x80, 0x80, 0x80, 0xF8, 0xF8, 0x00, 0x1F, 0x1F, 0x00, 0x00, 0x00, 0x1F, 0x1F, 0x00 },
	{ 0x00, 0x00, 0x08, 0xF8, 0xF8, 0x08, 0x00, 0x00, 0x00, 0x00, 0x10, 0x1F, 0x1F, 0x10, 0x00, 0x00 },
	{ 0x00, 0x00, 0x00, 0x08, 0xF8, 0xF8, 0x08, 0x00, 0x0E, 0x1E, 0x10, 0x10, 0x1F, 0x0F, 0x00, 0x00 },
	{ 0x08, 0xF8, 0xF8, 0x80, 0xE0, 0x78, 0x18, 0x00, 0x10, 0x1F, 0x1F, 0x01, 0x03, 0x1E, 0x1C, 0x00 },
	{ 0x08, 0xF8, 0xF8, 0x08, 0x00, 0x00, 0x00, 0x00, 0x10, 0x1F, 0x1F, 0x10, 0x10, 0x18, 0x1C, 0x00 },
	{ 0xF8, 0xF8, 0x70, 0xE0, 0x70, 0xF8, 0xF8, 0x00, 0x1F, 0x1F, 0x00, 0x00, 0x00, 0x1F, 0x1F, 0x00 },
	{ 0xF8, 0xF8, 0x70, 0xE0, 0xC0, 0xF8, 0xF8, 0x00, 0x1F, 0x1F, 0x00, 0x00, 0x01, 0x1F, 0x1F, 0x00 },
	{ 0xE0, 0xF0, 0x18, 0x08, 0x18, 0xF0, 0xE0, 0x00, 0x07, 0x0F, 0x18, 0x10, 0x18, 0x0F, 0x07, 0x00 },
	{ 0x08, 0xF8, 0xF8, 0x88, 0x88, 0xF8, 0x70, 0x00, 0x10, 0x1F, 0x1F, 0x10, 0x00, 0x00, 0x00, 0x00 },
	{ 0xF0, 0xF8, 0x08, 0x08, 0x08, 0xF8, 0xF0, 0x00, 0x0F, 0x1F, 0x10, 0x1C, 0x78, 0x7F, 0x4F, 0x00 },
	{ 0x08, 0xF8, 0xF8, 0x88, 0x88, 0xF8, 0x70, 0x00, 0x10, 0x1F, 0x1F, 0x00, 0x01, 0x1F, 0x1E, 0x00 },
	{ 0x30, 0x78, 0xC8, 0x88, 0x88, 0x38, 0x30, 0x00, 0x0C, 0x1C, 0x10, 0x10, 0x11, 0x1F, 0x0E, 0x00 },
	{ 0x00, 0x38, 0x18, 0xF8, 0xF8, 0x18, 0x38, 0x00, 0x00, 0x00, 0x10, 0x1F, 0x1F, 0x10, 0x00, 0x00 },
	{ 0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x0F, 0x1F, 0x10, 0x10, 0x10, 0x1F, 0x0F, 0x00 },
	{ 0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x03, 0x07, 0x0C, 0x18, 0x0C, 0x07, 0x03, 0x00 },
	{ 0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x07, 0x1F, 0x1C, 0x07, 0x1C, 0x1F, 0x07, 0x00 },
	{ 0x18, 0x78, 0xE0, 0x80, 0xE0, 0x78, 0x18, 0x00, 0x18, 0x1E, 0x07, 0x01, 0x07, 0x1E, 0x18, 0x00 },
	{ 0x00, 0x78, 0xF8, 0x80, 0x80, 0xF8, 0x78, 0x00, 0x00, 0x00, 0x10, 0x1F, 0x1F, 0x10, 0x00, 0x00 },
	{ 0x38, 0x18, 0x08, 0x88, 0xC8, 0x78, 0x38, 0x00, 0x1C, 0x1E, 0x13, 0x11, 0x10, 0x18, 0x1C, 0x00 },
	{ 0x00, 0x00, 0xF8, 0xF8, 0x08, 0x08, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x1F, 0x10, 0x10, 0x00, 0x00 },
	{ 0x70, 0xE0, 0xC0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x07, 0x0E, 0x1C, 0x00 },
	{ 0x00, 0x00, 0x08, 0x08, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x10, 0x10, 0x1F, 0x1F, 0x00, 0x00 },
	{ 0x10, 0x18, 0x0E, 0x07, 0x0E, 0x18, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
	{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40 },
	{ 0x00, 0x00, 0x07, 0x0F, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
	{ 0x00, 0x40, 0x40, 0x40, 0xC0, 0x80, 0x00, 0x00, 0x0E, 0x1F, 0x11, 0x11, 0x0F, 0x1F, 0x10, 0x00 },
	{ 0x08, 0xF8, 0xF8, 0x40, 0xC0, 0x80, 0x00, 0x00, 0x10, 0x1F, 0x0F, 0x10, 0x10, 0x1F, 0x0F, 0x00 },
	{ 0x80, 0xC0, 0x40, 0x40, 0x40, 0xC0, 0x80, 0x00, 0x0F, 0x1F, 0x10, 0x10, 0x10, 0x18, 0x08, 0x00 },
	{ 0x00, 0x80, 0xC0, 0x48, 0xF8, 0xF8, 0x00, 0x00, 0x0F, 0x1F, 0x10, 0x10, 0x0F, 0x1F, 0x10, 0x00 },
	{ 0x80, 0xC0, 0x40, 0x40, 0x40, 0xC0, 0x80, 0x00, 0x0F, 0x1F, 0x11, 0x11, 0x11, 0x19, 0x09, 0x00 },
	{ 0x80, 0xF0, 0xF8, 0x88, 0x18, 0x30, 0x00, 0x00, 0x10, 0x1F, 0x1F, 0x10, 0x00, 0x00, 0x00, 0x00 },
	{ 0x80, 0xC0, 0x40, 0x40, 0x80, 0xC0, 0x40, 0x00, 0x4F, 0xDF, 0x90, 0x90, 0xFF, 0x7F, 0x00, 0x00 },
	{ 0x08, 0xF8, 0xF8, 0x80, 0x40, 0xC0, 0x80, 0x00, 0x10, 0x1F, 0x1F, 0x00, 0x00, 0x1F, 0x1F, 0x00 },
	{ 0x00, 0x00, 0x40, 0xD8, 0xD8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x1F, 0x1F, 0x10, 0x00, 0x00 },
	{ 0x00, 0x00, 0x00, 0x00, 0x40, 0xD8, 0xD8, 0x00, 0x00, 0x60, 0xE0, 0x80, 0x80, 0xFF, 0x7F, 0x00 },
	{ 0x08, 0xF8, 0xF8, 0x00, 0x80, 0xC0, 0x40, 0x00, 0x10, 0x1F, 0x1F, 0x03, 0x07, 0x1C, 0x18, 0x00 },
	{ 0x00, 0x00, 0x08, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x1F, 0x1F, 0x10, 0x00, 0x00 },
	{ 0xC0, 0xC0, 0xC0, 0x80, 0xC0, 0xC0, 0x80, 0x00, 0x1F, 0x1F, 0x00, 0x1F, 0x00, 0x1F, 0x1F, 0x00 },
	{ 0x40, 0xC0, 0x80, 0x40, 0x40, 0xC0, 0x80, 0x00, 0x00, 0x1F, 0x1F, 0x00, 0x00, 0x1F, 0x1F, 0x00 },
	{ 0x80, 0xC0, 0x40, 0x40, 0x40, 0xC0, 0x80, 0x00, 0x0F, 0x1F, 0x10, 0x10, 0x10, 0x1F, 0x0F, 0x00 },
	{ 0x40, 0xC0, 0x80, 0x40, 0x40, 0xC0, 0x80, 0x00, 0x80, 0xFF, 0xFF, 0x90, 0x10, 0x1F, 0x0F, 0x00 },
	{ 0x80, 0xC0, 0x40, 0x40, 0x80, 0xC0, 0x40, 0x00, 0x0F, 0x1F, 0x10, 0x90, 0xFF, 0xFF, 0x80, 0x00 },
	{ 0x40, 0xC0, 0x80, 0xC0, 0x40, 0xC0, 0x80, 0x00, 0x10, 0x1F, 0x1F, 0x10, 0x00, 0x00, 0x01, 0x00 },
	{ 0x80, 0xC0, 0x40, 0x40, 0x40, 0xC0, 0x80, 0x00, 0x08, 0x19, 0x13, 0x12, 0x16, 0x1C, 0x08, 0x00 },
	{ 0x40, 0x40, 0xF0, 0xF8, 0x40, 0x40, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x1F, 0x10, 0x18, 0x08, 0x00 },
	{ 0xC0, 0xC0, 0x00, 0x00, 0xC0, 0xC0, 0x00, 0x00, 0x0F, 0x1F, 0x10, 0x10, 0x0F, 0x1F, 0x10, 0x00 },
	{ 0x00, 0xC0, 0xC0, 0x00, 0x00, 0xC0, 0xC0, 0x00, 0x00, 0x07, 0x0F, 0x18, 0x18, 0x0F, 0x07, 0x00 },
	{ 0xC0, 0xC0, 0x00, 0x00, 0x00, 0xC0, 0xC0, 0x00, 0x0F, 0x1F, 0x18, 0x0E, 0x18, 0x1F, 0x0F, 0x00 },
	{ 0x40, 0xC0, 0x80, 0x00, 0x80, 0xC0, 0x40, 0x00, 0x10, 0x18, 0x0F, 0x07, 0x0F, 0x18, 0x10, 0x00 },
	{ 0xC0, 0xC0, 0x00, 0x00, 0x00, 0xC0, 0xC0, 0x00, 0x8F, 0x9F, 0x90, 0x90, 0xD0, 0x7F, 0x3F, 0x00 },
	{ 0xC0, 0xC0, 0x40, 0x40, 0xC0, 0xC0, 0x40, 0x00, 0x18, 0x1C, 0x16, 0x13, 0x11, 0x18, 0x18, 0x00 },
	{ 0x00, 0x80, 0x80, 0xF0, 0x78, 0x08, 0x08, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x1F, 0x10, 0x10, 0x00 },
	{ 0x00, 0x00, 0x00, 0x78, 0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x1F, 0x00, 0x00, 0x00 },
	{ 0x00, 0x08, 0x08, 0x78, 0xF0, 0x80, 0x80, 0x00, 0x00, 0x10, 0x10, 0x1F, 0x0F, 0x00, 0x00, 0x00 },
	{ 0x10, 0x18, 0x08, 0x18, 0x10, 0x18, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
};

const uint8_t gFontBigDigits[11][26] = {
	{ 0x00, 0xC0, 0xF0, 0xF8, 0x3C, 0x0C, 0x0C, 0x0C, 0x0C, 0x1C, 0xF8, 0xF0, 0xE0, 0x00, 0x07, 0x1F, 0x3F, 0x78, 0x60, 0x60, 0x60, 0x60, 0x70, 0x3F, 0x1F, 0x0F },
	{ 0x00, 0x00, 0x00, 0x00, 0x30, 0x30, 0xFC, 0xFC, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0x7F, 0x7F, 0x00, 0x00, 0x00, 0x00 },
	{ 0x00, 0x10, 0x38, 0x38, 0x1C, 0x0C, 0x0C, 0x0C, 0x0C, 0xFC, 0xF8, 0xF0, 0x00, 0x00, 0x70, 0x78, 0x7C, 0x7C, 0x6E, 0x66, 0x67, 0x67, 0x63, 0x61, 0x60, 0x00 },
	{ 0x00, 0x10, 0x18, 0x18, 0x9C, 0x8C, 0x8C, 0x8C, 0x8C, 0xCC, 0xF8, 0xF8, 0x70, 0x00, 0x30, 0x30, 0x30, 0x71, 0x61, 0x61, 0x61, 0x61, 0x71, 0x3F, 0x3F, 0x1E },
	{ 0x00, 0x00, 0x00, 0x00, 0x80, 0xC0, 0xE0, 0x70, 0x38, 0xFC, 0xFC, 0xFC, 0x00, 0x00, 0x1C, 0x1E, 0x1F, 0x1F, 0x19, 0x18, 0x18, 0x18, 0x7F, 0x7F, 0x7F, 0x18 },
	{ 0x00, 0x00, 0xFC, 0xFC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0x8C, 0x0C, 0x00, 0x00, 0x18, 0x30, 0x70, 0x60, 0x60, 0x60, 0x60, 0x71, 0x7B, 0x3F, 0x1F },
	{ 0x00, 0xC0, 0xF0, 0xF8, 0x38, 0x9C, 0x8C, 0x8C, 0x8C, 0x8C, 0x9C, 0x38, 0x30, 0x00, 0x0F, 0x1F, 0x3F, 0x73, 0x61, 0x61, 0x61, 0x61, 0x73, 0x33, 0x3F, 0x1E },
	{ 0x00, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x8C, 0xEC, 0xFC, 0x3C, 0x1C, 0x00, 0x00, 0x00, 0x40, 0x60, 0x78, 0x7C, 0x1F, 0x07, 0x03, 0x00, 0x00, 0x00 },
	{ 0x00, 0x00, 0x78, 0xF8, 0xDC, 0x8C, 0x8C, 0x8C, 0x8C, 0xDC, 0xF8, 0x78, 0x00, 0x00, 0x1E, 0x3F, 0x3F, 0x73, 0x61, 0x61, 0x61, 0x61, 0x73, 0x3F, 0x3F, 0x1E },
	{ 0x00, 0xF0, 0xF8, 0xB8, 0x1C, 0x0C, 0x0C, 0x0C, 0x0C, 0x1C, 0xB8, 0xF0, 0xE0, 0x00, 0x11, 0x33, 0x77, 0x67, 0x66, 0x66, 0x66, 0x76, 0x33, 0x3F, 0x1F, 0x07 },
	{ 0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x00, 0x00 },
};

const uint8_t gFontSmallDigits[11][7] = {
	{ 0x00, 0x3E, 0x41, 0x41, 0x41, 0x41, 0x3E },
	{ 0x00, 0x00, 0x42, 0x7F, 0x40, 0x00, 0x00 },
	{ 0x00, 0x62, 0x51, 0x51, 0x49, 0x49, 0x46 },
	{ 0x00, 0x22, 0x41, 0x49, 0x49, 0x4D, 0x32 },
	{ 0x00, 0x18, 0x14, 0x12, 0x11, 0x7F, 0x10 },
	{ 0x00, 0x27, 0x45, 0x45, 0x45, 0x45, 0x39 },
	{ 0x00, 0x3E, 0x49, 0x49, 0x49, 0x49, 0x30 },
	{ 0x00, 0x01, 0x71, 0x09, 0x05, 0x03, 0x00 },
	{ 0x00, 0x36, 0x49, 0x49, 0x49, 0x49, 0x36 },
	{ 0x00, 0x46, 0x49, 0x49, 0x49, 0x29, 0x1E },
	{ 0x00, 0x08, 0x08, 0x08, 0x08, 0x08, 0x00 },
};
/*
const uint64_t gFont8x8[16 * 6] =
{
	0x0000000000000000, // 'space'
	0x0808080800080000, // '!'
	0x2828000000000000, // '"'
	0x00287C287C280000, // '#'
	0x081E281C0A3C0800, // '$'
	0x6094681629060000, // '%'
	0x1C20201926190000, // '&'
	0x0808000000000000, // '''
	0x0810202010080000, // '('
	0x1008040408100000, // ')'
	0x2A1C3E1C2A000000, // '*'
	0x0008083E08080000, // '+'
	0x0000000000081000, // ','
	0x0000003C00000000, // '-'
	0x0000000000080000, // '.'
	0x0204081020400000, // '/'

	0x1824424224180000, // '0'
	0x08180808081C0000, // '1'
	0x3C420418207E0000, // '2'
	0x3C420418423C0000, // '3'
	0x081828487C080000, // '4'
	0x7E407C02423C0000, // '5'
	0x3C407C42423C0000, // '6'
	0x7E04081020400000, // '7'
	0x3C423C42423C0000, // '8'
	0x3C42423E023C0000, // '9'
	0x0000080000080000, // ':'
	0x0000080000081000, // ';'
	0x0006186018060000, // '<'
	0x00007E007E000000, // '='
	0x0060180618600000, // '>'
	0x3844041800100000, // '?'

	0x003C449C945C201C, // '@'
	0x1818243C42420000, // 'A'
	0x7844784444780000, // 'B'
	0x3844808044380000, // 'C'
	0x7844444444780000, // 'D'
	0x7C407840407C0000, // 'E'
	0x7C40784040400000, // 'F'
	0x3844809C44380000, // 'G'
	0x42427E4242420000, // 'H'
	0x3E080808083E0000, // 'I'
	0x1C04040444380000, // 'J'
	0x4448507048440000, // 'K'
	0x40404040407E0000, // 'L'
	0x4163554941410000, // 'M'
	0x4262524A46420000, // 'N'
	0x1C222222221C0000, // 'O'

	0x7844784040400000, // 'P'
	0x1C222222221C0200, // 'Q'
	0x7844785048440000, // 'R'
	0x1C22100C221C0000, // 'S'
	0x7F08080808080000, // 'T'
	0x42424242423C0000, // 'U'
	0x8142422424180000, // 'V'
	0x4141495563410000, // 'W'
	0x4224181824420000, // 'X'
	0x4122140808080000, // 'Y'
	0x7E040810207E0000, // 'Z'
	0x3820202020380000, // '['
	0x4020100804020000, // '\'
	0x3808080808380000, // ']'
	0x1028000000000000, // '^'
	0x00000000007E0000, // '_'

	0x1008000000000000, // '`'
	0x003C023E463A0000, // 'a'
	0x40407C42625C0000, // 'b'
	0x00001C20201C0000, // 'c'
	0x02023E42463A0000, // 'd'
	0x003C427E403C0000, // 'e'
	0x0018103810100000, // 'f'
	0x0000344C44340438, // 'g'
	0x2020382424240000, // 'h'
	0x0800080808080000, // 'i'
	0x0800180808080870, // 'j'
	0x20202428302C0000, // 'k'
	0x1010101010180000, // 'l'
	0x0000665A42420000, // 'm'
	0x00002E3222220000, // 'n'
	0x00003C42423C0000, // 'o'

	0x00005C62427C4040, // 'p'
	0x00003A46423E0202, // 'q'
	0x00002C3220200000, // 'r'
	0x001C201804380000, // 's'
	0x00103C1010180000, // 't'
	0x00002222261A0000, // 'u'
	0x0000424224180000, // 'v'
	0x000081815A660000, // 'w'
	0x0000422418660000, // 'x'
	0x0000422214081060, // 'y'
	0x00003C08103C0000, // 'z'
	0x1C103030101C0000, // '{'
	0x0808080808080800, // '|'
	0x38080C0C08380000, // '}'
	0x000000324C000000, // '~'
	0x7E7E7E7E7E7E0000  // 'DEL'
};
*/

const uint8_t gFont6x8[96][6] =
{
{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }, 
{ 0x00, 0x00, 0x5F, 0x00, 0x00, 0x00 }, 
{ 0x00, 0x07, 0x00, 0x07, 0x00, 0x00 }, 
{ 0x14, 0x7F, 0x14, 0x7F, 0x14, 0x00 }, 
{ 0x24, 0x2A, 0x7F, 0x2A, 0x12, 0x00 }, 
{ 0x23, 0x13, 0x08, 0x64, 0x62, 0x00 }, 
{ 0x36, 0x49, 0x56, 0x20, 0x50, 0x00 }, 
{ 0x00, 0x08, 0x07, 0x03, 0x00, 0x00 }, 
{ 0x00, 0x1C, 0x22, 0x41, 0x00, 0x00 }, 
{ 0x00, 0x41, 0x22, 0x1C, 0x00, 0x00 }, 
{ 0x2A, 0x1C, 0x7F, 0x1C, 0x2A, 0x00 }, 
{ 0x08, 0x08, 0x3E, 0x08, 0x08, 0x00 }, 
{ 0x00, 0x80, 0x70, 0x30, 0x00, 0x00 }, 
{ 0x08, 0x08, 0x08, 0x08, 0x08, 0x00 }, 
{ 0x00, 0x00, 0x60, 0x60, 0x00, 0x00 }, 
{ 0x20, 0x10, 0x08, 0x04, 0x02, 0x00 }, 

//{ 0x3E, 0x51, 0x49, 0x45, 0x3E, 0x00 }, 
{ 0x3E, 0x41, 0x41, 0x41, 0x3E, 0x00 }, 
{ 0x00, 0x42, 0x7F, 0x40, 0x00, 0x00 }, 
{ 0x72, 0x49, 0x49, 0x49, 0x46, 0x00 }, 
{ 0x21, 0x41, 0x49, 0x4D, 0x33, 0x00 }, 
{ 0x18, 0x14, 0x12, 0x7F, 0x10, 0x00 }, 
{ 0x27, 0x45, 0x45, 0x45, 0x39, 0x00 }, 
{ 0x3C, 0x4A, 0x49, 0x49, 0x31, 0x00 }, 
{ 0x41, 0x21, 0x11, 0x09, 0x07, 0x00 }, 
{ 0x36, 0x49, 0x49, 0x49, 0x36, 0x00 }, 
{ 0x46, 0x49, 0x49, 0x29, 0x1E, 0x00 }, 
{ 0x00, 0x00, 0x14, 0x00, 0x00, 0x00 }, 
{ 0x00, 0x40, 0x34, 0x00, 0x00, 0x00 }, 
{ 0x00, 0x08, 0x14, 0x22, 0x41, 0x00 }, 
{ 0x14, 0x14, 0x14, 0x14, 0x14, 0x00 }, 
{ 0x00, 0x41, 0x22, 0x14, 0x08, 0x00 }, 
{ 0x02, 0x01, 0x59, 0x09, 0x06, 0x00 }, 

{ 0x3E, 0x41, 0x5D, 0x59, 0x4E, 0x00 }, 
{ 0x7C, 0x12, 0x11, 0x12, 0x7C, 0x00 }, 
{ 0x7F, 0x49, 0x49, 0x49, 0x36, 0x00 }, 
{ 0x3E, 0x41, 0x41, 0x41, 0x22, 0x00 }, 
{ 0x7F, 0x41, 0x41, 0x41, 0x3E, 0x00 }, 
{ 0x7F, 0x49, 0x49, 0x49, 0x41, 0x00 }, 
{ 0x7F, 0x09, 0x09, 0x09, 0x01, 0x00 }, 
{ 0x3E, 0x41, 0x41, 0x51, 0x73, 0x00 }, 
{ 0x7F, 0x08, 0x08, 0x08, 0x7F, 0x00 }, 
{ 0x00, 0x41, 0x7F, 0x41, 0x00, 0x00 }, 
{ 0x20, 0x40, 0x41, 0x3F, 0x01, 0x00 }, 
{ 0x7F, 0x08, 0x14, 0x22, 0x41, 0x00 }, 
{ 0x7F, 0x40, 0x40, 0x40, 0x40, 0x00 }, 
{ 0x7F, 0x02, 0x1C, 0x02, 0x7F, 0x00 }, 
{ 0x7F, 0x04, 0x08, 0x10, 0x7F, 0x00 }, 
{ 0x3E, 0x41, 0x41, 0x41, 0x3E, 0x00 }, 

{ 0x7F, 0x09, 0x09, 0x09, 0x06, 0x00 }, 
{ 0x3E, 0x41, 0x51, 0x21, 0x5E, 0x00 }, 
{ 0x7F, 0x09, 0x19, 0x29, 0x46, 0x00 }, 
{ 0x26, 0x49, 0x49, 0x49, 0x32, 0x00 }, 
{ 0x03, 0x01, 0x7F, 0x01, 0x03, 0x00 }, 
{ 0x3F, 0x40, 0x40, 0x40, 0x3F, 0x00 }, 
{ 0x1F, 0x20, 0x40, 0x20, 0x1F, 0x00 }, 
{ 0x3F, 0x40, 0x38, 0x40, 0x3F, 0x00 }, 
{ 0x63, 0x14, 0x08, 0x14, 0x63, 0x00 }, 
{ 0x03, 0x04, 0x78, 0x04, 0x03, 0x00 }, 
{ 0x61, 0x59, 0x49, 0x4D, 0x43, 0x00 }, 
{ 0x00, 0x7F, 0x41, 0x41, 0x41, 0x00 }, 
{ 0x02, 0x04, 0x08, 0x10, 0x20, 0x00 }, 
{ 0x00, 0x41, 0x41, 0x41, 0x7F, 0x00 }, 
{ 0x04, 0x02, 0x01, 0x02, 0x04, 0x00 }, 
{ 0x40, 0x40, 0x40, 0x40, 0x40, 0x00 }, 

{ 0x00, 0x03, 0x07, 0x08, 0x00, 0x00 }, 
{ 0x20, 0x54, 0x54, 0x78, 0x40, 0x00 }, 
{ 0x7F, 0x28, 0x44, 0x44, 0x38, 0x00 }, 
{ 0x38, 0x44, 0x44, 0x44, 0x28, 0x00 }, 
{ 0x38, 0x44, 0x44, 0x28, 0x7F, 0x00 }, 
{ 0x38, 0x54, 0x54, 0x54, 0x18, 0x00 }, 
{ 0x00, 0x08, 0x7E, 0x09, 0x02, 0x00 }, 
{ 0x18, 0xA4, 0xA4, 0x9C, 0x78, 0x00 }, 
{ 0x7F, 0x08, 0x04, 0x04, 0x78, 0x00 }, 
{ 0x00, 0x44, 0x7D, 0x40, 0x00, 0x00 }, 
{ 0x20, 0x40, 0x40, 0x3D, 0x00, 0x00 }, 
{ 0x7F, 0x10, 0x28, 0x44, 0x00, 0x00 }, 
{ 0x00, 0x41, 0x7F, 0x40, 0x00, 0x00 }, 
{ 0x7C, 0x04, 0x78, 0x04, 0x78, 0x00 }, 
{ 0x7C, 0x08, 0x04, 0x04, 0x78, 0x00 }, 
{ 0x38, 0x44, 0x44, 0x44, 0x38, 0x00 }, 

{ 0xFC, 0x18, 0x24, 0x24, 0x18, 0x00 }, 
{ 0x18, 0x24, 0x24, 0x18, 0xFC, 0x00 }, 
{ 0x7C, 0x08, 0x04, 0x04, 0x08, 0x00 }, 
{ 0x48, 0x54, 0x54, 0x54, 0x24, 0x00 }, 
{ 0x04, 0x04, 0x3F, 0x44, 0x24, 0x00 }, 
{ 0x3C, 0x40, 0x40, 0x20, 0x7C, 0x00 }, 
{ 0x1C, 0x20, 0x40, 0x20, 0x1C, 0x00 }, 
{ 0x3C, 0x40, 0x30, 0x40, 0x3C, 0x00 }, 
{ 0x44, 0x28, 0x10, 0x28, 0x44, 0x00 }, 
{ 0x4C, 0x90, 0x90, 0x90, 0x7C, 0x00 }, 
{ 0x44, 0x64, 0x54, 0x4C, 0x44, 0x00 }, 
{ 0x00, 0x08, 0x36, 0x41, 0x00, 0x00 }, 
{ 0x00, 0x00, 0x77, 0x00, 0x00, 0x00 }, 
{ 0x00, 0x41, 0x36, 0x08, 0x00, 0x00 }, 
{ 0x02, 0x01, 0x02, 0x04, 0x02, 0x00 }, 
{ 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF }
};
/*
// ASCII 5x7 font
const uint8_t gFont5x7[5 * 16 * 6] =
{
	0x00, 0x00, 0x00, 0x00, 0x00,    // ' '
	0x00, 0x00, 0x5F, 0x00, 0x00,
	0x00, 0x07, 0x00, 0x07, 0x00,
	0x14, 0x7F, 0x14, 0x7F, 0x14,
	0x24, 0x2A, 0x7F, 0x2A, 0x12,
	0x23, 0x13, 0x08, 0x64, 0x62,
	0x36, 0x49, 0x56, 0x20, 0x50,
	0x00, 0x08, 0x07, 0x03, 0x00,
	0x00, 0x1C, 0x22, 0x41, 0x00,
	0x00, 0x41, 0x22, 0x1C, 0x00,
	0x2A, 0x1C, 0x7F, 0x1C, 0x2A,
	0x08, 0x08, 0x3E, 0x08, 0x08,
	0x00, 0x80, 0x70, 0x30, 0x00,
	0x08, 0x08, 0x08, 0x08, 0x08,
	0x00, 0x00, 0x60, 0x60, 0x00,
	0x20, 0x10, 0x08, 0x04, 0x02,

//	0x3E, 0x51, 0x49, 0x45, 0x3E,    // '0'
	0x3E, 0x41, 0x41, 0x41, 0x3E,    // '0'
	0x00, 0x42, 0x7F, 0x40, 0x00,
	0x72, 0x49, 0x49, 0x49, 0x46,
	0x21, 0x41, 0x49, 0x4D, 0x33,
	0x18, 0x14, 0x12, 0x7F, 0x10,
	0x27, 0x45, 0x45, 0x45, 0x39,
	0x3C, 0x4A, 0x49, 0x49, 0x31,
	0x41, 0x21, 0x11, 0x09, 0x07,
	0x36, 0x49, 0x49, 0x49, 0x36,
	0x46, 0x49, 0x49, 0x29, 0x1E,
	0x00, 0x00, 0x14, 0x00, 0x00,
	0x00, 0x40, 0x34, 0x00, 0x00,
	0x00, 0x08, 0x14, 0x22, 0x41,
	0x14, 0x14, 0x14, 0x14, 0x14,
	0x00, 0x41, 0x22, 0x14, 0x08,
	0x02, 0x01, 0x59, 0x09, 0x06,

	0x3E, 0x41, 0x5D, 0x59, 0x4E,   // '@'
	0x7C, 0x12, 0x11, 0x12, 0x7C,   // 'A'
	0x7F, 0x49, 0x49, 0x49, 0x36,
	0x3E, 0x41, 0x41, 0x41, 0x22,
	0x7F, 0x41, 0x41, 0x41, 0x3E,
	0x7F, 0x49, 0x49, 0x49, 0x41,
	0x7F, 0x09, 0x09, 0x09, 0x01,
	0x3E, 0x41, 0x41, 0x51, 0x73,
	0x7F, 0x08, 0x08, 0x08, 0x7F,
	0x00, 0x41, 0x7F, 0x41, 0x00,
	0x20, 0x40, 0x41, 0x3F, 0x01,
	0x7F, 0x08, 0x14, 0x22, 0x41,
	0x7F, 0x40, 0x40, 0x40, 0x40,
	0x7F, 0x02, 0x1C, 0x02, 0x7F,
	0x7F, 0x04, 0x08, 0x10, 0x7F,
	0x3E, 0x41, 0x41, 0x41, 0x3E,

	0x7F, 0x09, 0x09, 0x09, 0x06,
	0x3E, 0x41, 0x51, 0x21, 0x5E,
	0x7F, 0x09, 0x19, 0x29, 0x46,
	0x26, 0x49, 0x49, 0x49, 0x32,
	0x03, 0x01, 0x7F, 0x01, 0x03,
	0x3F, 0x40, 0x40, 0x40, 0x3F,
	0x1F, 0x20, 0x40, 0x20, 0x1F,
	0x3F, 0x40, 0x38, 0x40, 0x3F,
	0x63, 0x14, 0x08, 0x14, 0x63,
	0x03, 0x04, 0x78, 0x04, 0x03,
	0x61, 0x59, 0x49, 0x4D, 0x43,
	0x00, 0x7F, 0x41, 0x41, 0x41,
	0x02, 0x04, 0x08, 0x10, 0x20,
	0x00, 0x41, 0x41, 0x41, 0x7F,
	0x04, 0x02, 0x01, 0x02, 0x04,
	0x40, 0x40, 0x40, 0x40, 0x40,

	0x00, 0x03, 0x07, 0x08, 0x00,
	0x20, 0x54, 0x54, 0x78, 0x40,
	0x7F, 0x28, 0x44, 0x44, 0x38,
	0x38, 0x44, 0x44, 0x44, 0x28,
	0x38, 0x44, 0x44, 0x28, 0x7F,
	0x38, 0x54, 0x54, 0x54, 0x18,
	0x00, 0x08, 0x7E, 0x09, 0x02,
	0x18, 0xA4, 0xA4, 0x9C, 0x78,
	0x7F, 0x08, 0x04, 0x04, 0x78,
	0x00, 0x44, 0x7D, 0x40, 0x00,
	0x20, 0x40, 0x40, 0x3D, 0x00,
	0x7F, 0x10, 0x28, 0x44, 0x00,
	0x00, 0x41, 0x7F, 0x40, 0x00,
	0x7C, 0x04, 0x78, 0x04, 0x78,
	0x7C, 0x08, 0x04, 0x04, 0x78,
	0x38, 0x44, 0x44, 0x44, 0x38,

	0xFC, 0x18, 0x24, 0x24, 0x18,
	0x18, 0x24, 0x24, 0x18, 0xFC,
	0x7C, 0x08, 0x04, 0x04, 0x08,
	0x48, 0x54, 0x54, 0x54, 0x24,
	0x04, 0x04, 0x3F, 0x44, 0x24,
	0x3C, 0x40, 0x40, 0x20, 0x7C,
	0x1C, 0x20, 0x40, 0x20, 0x1C,
	0x3C, 0x40, 0x30, 0x40, 0x3C,
	0x44, 0x28, 0x10, 0x28, 0x44,
	0x4C, 0x90, 0x90, 0x90, 0x7C,
	0x44, 0x64, 0x54, 0x4C, 0x44,
	0x00, 0x08, 0x36, 0x41, 0x00,
	0x00, 0x00, 0x77, 0x00, 0x00,
	0x00, 0x41, 0x36, 0x08, 0x00,
	0x02, 0x01, 0x02, 0x04, 0x02,
	0x3C, 0x26, 0x23, 0x26, 0x3C
};
*/