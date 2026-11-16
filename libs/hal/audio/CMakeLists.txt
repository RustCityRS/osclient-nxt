add_library(libs.hal.audio STATIC
    AudioAPI.cpp
    AudioBuffer.cpp
    AudioBufferHandler.cpp
    AudioBuss.cpp
    AudioFormat.cpp
    AudioMixer.cpp
    AudioRenderer.cpp
    AudioSend.cpp
    VoiceInstance.cpp
    decoders/vorbis/VorbisDecoder.cpp
    osx/AudioRenderer_OSX.cpp
    workers/MixerWorker.cpp
    workers/VorbisWorker.cpp
    workers/vorbis_std.code
)
set_target_properties(libs.hal.audio PROPERTIES UNITY_BUILD ON)
