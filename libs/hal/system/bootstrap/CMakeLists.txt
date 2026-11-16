add_executable(libs.hal.system.osclient MACOSX_BUNDLE
    ${ROOT}/_unplaced/libs/hal/system/bootstrap/unity_0.cpp
    ${ROOT}/libs/framework/baseapp/BaseApp.cpp
    ${ROOT}/libs/graphics/runetek7/animation/asm/BlendTree.cpp
    ${ROOT}/libs/graphics/runetek7/animation/asm/PoseBlendTreeNode.cpp
    ${ROOT}/libs/graphics/runetek7/effects/Effect.cpp
    ${ROOT}/libs/graphics/runetek7/materials/shaders/ShaderSource.cpp
    ${ROOT}/libs/graphics/runetek7/renderer/Drawable.cpp
    osx/AppDelegate.mm
    osx/main.mm
    ${ROOT}/libs/hal/windowing/MenuItem.cpp
    ${ROOT}/libs/perf/perfmodule/PerfModule.cpp
)
set_target_properties(libs.hal.system.osclient PROPERTIES UNITY_BUILD ON)
target_link_libraries(libs.hal.system.osclient PRIVATE
    osclient
    libs.audio
    libs.bzip2
    libs.clientstream
    libs.console
    libs.constants
    libs.core
    libs.debug
    libs.encryption
    libs.framework.baseapp
    libs.framework.graphicsapp
    libs.framework.sysinitparams
    libs.freetype
    libs.game.runetek5
    libs.game.shared
    libs.glew
    libs.graphics
    libs.graphics.graphicutils
    libs.graphics.postprocess
    libs.graphics.primitive.debugbasic
    libs.graphics.primitive.draw
    libs.graphics.shaderlib
    libs.graphics.view
    libs.hal.audio
    libs.hal.debugoutput
    libs.hal.file
    libs.hal.filesystem
    libs.hal.haptics
    libs.hal.hardware
    libs.hal.http
    libs.hal.input
    libs.hal.network
    libs.hal.paths
    libs.hal.render
    libs.hal.securerandom
    libs.hal.settings
    libs.hal.system.auth
    libs.hal.system.callstack
    libs.hal.system.clipboard
    libs.hal.system.discord
    libs.hal.system.metadata
    libs.hal.system.notifications
    libs.hal.system.steam
    libs.hal.system.systemdetails
    libs.hal.system.web
    libs.hal.taskrunner
    libs.hal.thread
    libs.hal.time
    libs.hal.windowing
    libs.heap
    libs.image
    libs.imgui
    libs.js5
    libs.json
    libs.jtl
    libs.libpng
    libs.logger
    libs.lzma
    libs.math
    libs.oldscape.clientlib
    libs.oldscape.jagex3
    libs.oldscape.osrendercore
    libs.oldscape.rs2lib
    libs.perf.perfmodule
    libs.sqlite
    libs.systemheap
    libs.testframework
    libs.tweaky
    libs.ui
    libtommath
    "-framework Cocoa"
    "-framework OpenGL"
    "-framework Quartz"
    "-framework AVFoundation"
    "-framework AudioToolbox"
    "-framework CoreAudio"
    curl
    z
    "-framework Foundation"
    "-framework AppKit"
    "-framework ApplicationServices"
    "-framework CoreFoundation"
    "-framework CoreGraphics"
    "-framework CoreServices"
    "-framework CoreVideo"
    "-weak_framework UserNotifications"
)
set_target_properties(libs.hal.system.osclient PROPERTIES
    OUTPUT_NAME osclient
    MACOSX_BUNDLE_INFO_PLIST ${ROOT}/packaging/macos/Info.plist
    XCODE_ATTRIBUTE_CODE_SIGN_IDENTITY "Developer ID Application: Jagex (UG2BR73SV5)"
    XCODE_ATTRIBUTE_ENABLE_HARDENED_RUNTIME YES
    BUILD_RPATH "${ROOT}/devplatform/3rdPartyLibs/cpp/curl/lib/osx;${ROOT}/devplatform/3rdPartyLibs/cpp/freetype/lib/osx")
