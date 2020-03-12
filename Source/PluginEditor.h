/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "PluginProcessor.h"

//==============================================================================
/**
*/
class Plugin5AudioProcessorEditor  : public AudioProcessorEditor,
                                           private Slider::Listener     // [2]
{
public:
    Plugin5AudioProcessorEditor (Plugin5AudioProcessor&);
    ~Plugin5AudioProcessorEditor();

    //==============================================================================
    void paint (Graphics&) override;
    void resized() override;

private:
    //void sliderValueChanged (Slider* slider) override; // [3]
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    Plugin5AudioProcessor& processor;
    Slider midiVolume; // [1]
    void sliderValueChanged (Slider* slider) override; // [3]
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (Plugin5AudioProcessorEditor)
};
