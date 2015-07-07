#ifndef __APPHEADERFILE_HJDAJU__
#define __APPHEADERFILE_HJDAJU__

#include <src/AppConfig.h>

#include <modules/juce_audio_basics/juce_audio_basics.h>
#include <modules/juce_audio_devices/juce_audio_devices.h>
#include <modules/juce_audio_formats/juce_audio_formats.h>
#include <modules/juce_audio_plugin_client/juce_audio_plugin_client.h>
#include <modules/juce_audio_processors/juce_audio_processors.h>
#include <modules/juce_core/juce_core.h>
#include <modules/juce_cryptography/juce_cryptography.h>
#include <modules/juce_data_structures/juce_data_structures.h>
#include <modules/juce_events/juce_events.h>
#include <modules/juce_graphics/juce_graphics.h>
#include <modules/juce_gui_basics/juce_gui_basics.h>
#include <modules/juce_gui_extra/juce_gui_extra.h>
#include <modules/juce_opengl/juce_opengl.h>

#if ! DONT_SET_USING_JUCE_NAMESPACE
 // If your code uses a lot of JUCE classes, then this will obviously save you
 // a lot of typing, but can be disabled by setting DONT_SET_USING_JUCE_NAMESPACE.
 using namespace juce;
#endif

namespace ProjectInfo
{
    const char* const  projectName    = "SSRemoteVST";
    const char* const  versionString  = "0.0.9";
    const int          versionNumber  = 0x9;
}

#endif   // __APPHEADERFILE_HJDAJU__
