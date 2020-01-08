/*
 * DISTRHO Plugin Framework (DPF)
 * Copyright (C) 2012-2014 Filipe Coelho <falktx@falktx.com>
 *
 * Permission to use, copy, modify, and/or distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES WITH
 * REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF MERCHANTABILITY
 * AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY SPECIAL, DIRECT,
 * INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM
 * LOSS OF USE, DATA OR PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE OR
 * OTHER TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR
 * PERFORMANCE OF THIS SOFTWARE.
 */

#ifndef DISTRHO_PLUGIN_INFO_H_INCLUDED
#define DISTRHO_PLUGIN_INFO_H_INCLUDED

#define DISTRHO_PLUGIN_BRAND "jalxes"
#define DISTRHO_PLUGIN_NAME "MidiSwitch"
#define DISTRHO_PLUGIN_URI "http://jalxes.bin/clean/midi_switch"

#define DISTRHO_PLUGIN_HAS_UI 0
#define DISTRHO_PLUGIN_IS_RT_SAFE 1
#define DISTRHO_PLUGIN_WANT_PROGRAMS 0
#define DISTRHO_PLUGIN_WANT_STATE 0
#define DISTRHO_PLUGIN_NUM_INPUTS 0
#define DISTRHO_PLUGIN_NUM_OUTPUTS 0
#define DISTRHO_PLUGIN_WANT_MIDI_INPUT 1
#define DISTRHO_PLUGIN_WANT_MIDI_OUTPUT 1
#define DISTRHO_PLUGIN_WANT_TIMEPOS 0

enum Parameters
{
  kStatusChannel0,
  kStatusChannel1,
  kStatusChannel2,
  kStatusChannel3,
  kStatusChannel4,
  kStatusChannel5,
  kStatusChannel6,
  kStatusChannel7,
  kStatusChannel8,
  kStatusChannel9,
  kStatusChannel10,
  kStatusChannel11,
  kStatusChannel12,
  kStatusChannel13,
  kStatusChannel14,
  kStatusChannel15,
  kControllerChannel0,
  kControllerChannel1,
  kControllerChannel2,
  kControllerChannel3,
  kControllerChannel4,
  kControllerChannel5,
  kControllerChannel6,
  kControllerChannel7,
  kControllerChannel8,
  kControllerChannel9,
  kControllerChannel10,
  kControllerChannel11,
  kControllerChannel12,
  kControllerChannel13,
  kControllerChannel14,
  kControllerChannel15,
};
const int kParamCount = 32;

#endif // DISTRHO_PLUGIN_INFO_H_INCLUDED
