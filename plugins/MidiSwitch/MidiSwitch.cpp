/*
 * DISTRHO Plugin Framework (DPF)
 * Copyright (C) 2012-2015 Filipe Coelho <falktx@falktx.com>
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

#include "DistrhoPlugin.hpp"
#include "string"
#include <vector>

START_NAMESPACE_DISTRHO

// -----------------------------------------------------------------------------------------------------------

/**
  Simple plugin to demonstrate state usage (including UI).
  The plugin will be treated as an effect, but it will not change the host
  audio.
 */
class MidiSwitch : public Plugin
{
public:
  MidiSwitch()
    : Plugin(kParamCount, 0, 0) // parameters, programs, states
  {
    std::memset(fParams, 0, sizeof(float) * kParamCount);
  }

protected:
  /* --------------------------------------------------------------------------------------------------------
   * Information */

  /**
     Get the plugin label.
     A plugin label follows the same rules as Parameter::symbol, with the
     exception that it can start with numbers.
   */
  const char* getLabel() const override { return "Midi Switch"; }

  /**
     Get an extensive comment/description about the plugin.
   */
  const char* getDescription() const override { return "MidiSwitch man."; }

  /**
     Get the plugin author/maker.
   */
  const char* getMaker() const override { return "jalxes"; }

  /**
     Get the plugin homepage.
   */
  const char* getHomePage() const override
  {
    return "https://github.com/jalxes/midi_switch";
  }

  /**
     Get the plugin license name (a single line of text).
     For commercial plugins this should return some short copyright information.
   */
  const char* getLicense() const override { return "APACHE"; }

  /**
     Get the plugin version, in hexadecimal.
   */
  uint32_t getVersion() const override { return d_version(1, 0, 0); }

  /**
     Get the plugin unique Id.
     This value is used by LADSPA, DSSI and VST plugin formats.
   */
  int64_t getUniqueId() const override { return d_cconst('d', 'S', 't', 's'); }

  /* --------------------------------------------------------------------------------------------------------
   * Init */

  /**
     This plugin has no parameters..
   */
  void initParameter(uint32_t index, Parameter& parameter) override
  {
    if (index > kParamCount)
      return;

    if (index < 16) {
      parameter.hints = kParameterIsAutomable | kParameterIsBoolean;
      //   parameter.hints = kParameterIsOutput | kParameterIsBoolean;
      parameter.ranges.def = 0.0f;
      parameter.ranges.min = 0.0f;
      parameter.ranges.max = 1.0f;
      parameter.name = ("Status_CC_Channel" + std::to_string(index)).c_str();
      parameter.symbol = parameter.name;
      parameter.symbol.replace('-', '_');
      return;
    }

    parameter.hints = kParameterIsAutomable | kParameterIsInteger;
    parameter.ranges.def = 0.0f;
    parameter.ranges.min = 0.0f;
    parameter.ranges.max = 127.0f;
    parameter.name = ("CC_Channel" + std::to_string(index - 16)).c_str();
    parameter.symbol = parameter.name;
    parameter.symbol.replace('-', '_');
  }

  /* --------------------------------------------------------------------------------------------------------
   * Internal data */

  float getParameterValue(uint32_t index) const override
  {
    if (index > kParamCount)
      return 0.0f;

    return fParams[index];
  }

  void setParameterValue(uint32_t index, float value) override
  {
    if (index > kParamCount)
      return;

    fParams[index] = value;
  }

  /* --------------------------------------------------------------------------------------------------------
   * Process */

  void run(const float**,
           float**,
           uint32_t,
           const MidiEvent* midiEvents,
           uint32_t midiEventCount) override
  {

    for (uint32_t i = 0; i < midiEventCount; ++i) {
      MidiEvent event = midiEvents[i];

      if (fParams[kStatusChannel0]) {
        event.data[0] = 0 + (event.data[2] != 0 ? 0x90 : 0x80);
        writeMidiEvent(event);
      }
      if (fParams[kStatusChannel1]) {
        event.data[0] = 1 + (event.data[2] != 0 ? 0x90 : 0x80);
        writeMidiEvent(event);
      }
      if (fParams[kStatusChannel2]) {
        event.data[0] = 2 + (event.data[2] != 0 ? 0x90 : 0x80);
        writeMidiEvent(event);
      }
      if (fParams[kStatusChannel3]) {
        event.data[0] = 3 + (event.data[2] != 0 ? 0x90 : 0x80);
        writeMidiEvent(event);
      }
      if (fParams[kStatusChannel4]) {
        event.data[0] = 4 + (event.data[2] != 0 ? 0x90 : 0x80);
        writeMidiEvent(event);
      }
      if (fParams[kStatusChannel5]) {
        event.data[0] = 5 + (event.data[2] != 0 ? 0x90 : 0x80);
        writeMidiEvent(event);
      }
      if (fParams[kStatusChannel6]) {
        event.data[0] = 6 + (event.data[2] != 0 ? 0x90 : 0x80);
        writeMidiEvent(event);
      }
      if (fParams[kStatusChannel7]) {
        event.data[0] = 7 + (event.data[2] != 0 ? 0x90 : 0x80);
        writeMidiEvent(event);
      }
      if (fParams[kStatusChannel8]) {
        event.data[0] = 8 + (event.data[2] != 0 ? 0x90 : 0x80);
        writeMidiEvent(event);
      }
      if (fParams[kStatusChannel9]) {
        event.data[0] = 9 + (event.data[2] != 0 ? 0x90 : 0x80);
        writeMidiEvent(event);
      }
      if (fParams[kStatusChannel10]) {
        event.data[0] = 10 + (event.data[2] != 0 ? 0x90 : 0x80);
        writeMidiEvent(event);
      }
      if (fParams[kStatusChannel11]) {
        event.data[0] = 11 + (event.data[2] != 0 ? 0x90 : 0x80);
        writeMidiEvent(event);
      }
      if (fParams[kStatusChannel12]) {
        event.data[0] = 12 + (event.data[2] != 0 ? 0x90 : 0x80);
        writeMidiEvent(event);
      }
      if (fParams[kStatusChannel13]) {
        event.data[0] = 13 + (event.data[2] != 0 ? 0x90 : 0x80);
        writeMidiEvent(event);
      }
      if (fParams[kStatusChannel14]) {
        event.data[0] = 14 + (event.data[2] != 0 ? 0x90 : 0x80);
        writeMidiEvent(event);
      }
      if (fParams[kStatusChannel15]) {
        event.data[0] = 15 + (event.data[2] != 0 ? 0x90 : 0x80);
        writeMidiEvent(event);
      }
    }
  }

  // -------------------------------------------------------------------------------------------------------

private:
  /**
     Our parameters used to display the grid on/off states.
   */
  float fParams[kParamCount];
  /**
     Set our plugin class as non-copyable and add a leak detector just in
     case.
   */
  DISTRHO_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(MidiSwitch)
};

/* ------------------------------------------------------------------------------------------------------------
 * Plugin entry point, called by DPF to create a new plugin instance. */

Plugin*
createPlugin()
{
  return new MidiSwitch();
}

// -----------------------------------------------------------------------------------------------------------

END_NAMESPACE_DISTRHO
