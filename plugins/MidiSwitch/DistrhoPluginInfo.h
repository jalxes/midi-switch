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
  kControllerChannel1,
  kStatusChannel1,
  kControllerChannel2,
  kStatusChannel2,
  kControllerChannel3,
  kStatusChannel3,
  kControllerChannel4,
  kStatusChannel4,
  kControllerChannel5,
  kStatusChannel5,
  kControllerChannel6,
  kStatusChannel6,
  kControllerChannel7,
  kStatusChannel7,
  kControllerChannel8,
  kStatusChannel8,
  kControllerChannel9,
  kStatusChannel9,
  kControllerChannel10,
  kStatusChannel10,
  kControllerChannel11,
  kStatusChannel11,
  kControllerChannel12,
  kStatusChannel12,
  kControllerChannel13,
  kStatusChannel13,
  kControllerChannel14,
  kStatusChannel14,
  kControllerChannel15,
  kStatusChannel15,
  kControllerChannel16,
  kStatusChannel16,
};
const int kParamCount = 31;

#endif // DISTRHO_PLUGIN_INFO_H_INCLUDED
