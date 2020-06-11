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
class Project0AudioProcessorEditor  : public AudioProcessorEditor
{
public:
    Project0AudioProcessorEditor (Project0AudioProcessor&);
    ~Project0AudioProcessorEditor();

    //==============================================================================
    void paint (Graphics&) override;
    void resized() override;

    // void mouseDown(const MouseEvent& e) override;
    void mouseUp(const MouseEvent& e) override;

private:
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    Project0AudioProcessor& processor;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (Project0AudioProcessorEditor)
};
