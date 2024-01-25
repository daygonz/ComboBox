/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"

using namespace juce;



//==============================================================================
_1_7_24AudioProcessorEditor::_1_7_24AudioProcessorEditor (_1_7_24AudioProcessor& p)
    : AudioProcessorEditor (&p), audioProcessor (p)
{
    // Make sure that before the constructor has finished, you've set the
    // editor's size to whatever you need it to be.
    setSize (400, 300);

    addAndMakeVisible(&effectsgui);
}

_1_7_24AudioProcessorEditor::~_1_7_24AudioProcessorEditor()
{
}

//==============================================================================
void _1_7_24AudioProcessorEditor::paint (juce::Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)
    g.fillAll (getLookAndFeel().findColour (juce::ResizableWindow::backgroundColourId));

    g.setColour (juce::Colours::white);
    g.setFont (15.0f);
    g.drawFittedText ("Hello World!", getLocalBounds(), juce::Justification::centred, 1);
}

void _1_7_24AudioProcessorEditor::resized()
{
    // This is generally where you'll want to lay out the positions of any
    // subcomponents in your editor..
    juce::Rectangle<int> area = getLocalBounds();

    const int componentWidth = 200;
    const int componentHeight = 200;

    effectsgui.setBounds(area.removeFromLeft(componentWidth).removeFromTop(componentHeight));

    //effectsgui.setBounds(50, 50, getWidth() - 100, getHeight() - 100);
}
