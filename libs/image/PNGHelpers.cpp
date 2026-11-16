// libs/image/PNGHelpers.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.image

#include "PNGHelpers.h"

// 0x100a0be80
void _nxt_PNG_error(undefined8 param_1, undefined8 param_2) {
    auto piVar1 = _png_get_io_ptr();
    (jag::logger::default_logger())
        ->Log(false, 2, "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/image/PNGHelpers.cpp",
              18, "%s", param_2);
    _longjmp(piVar1, 1);
}

// 0x100a0bee0
void _nxt_PNG_warning(undefined8 param_1, undefined8 param_2) {
    (jag::logger::default_logger())
        ->Log(false, 3, "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/image/PNGHelpers.cpp",
              12, "%s", param_2);
}

// 0x100a0bf20
void _nxt_PNG_stream_reader(undefined8 param_1, uchar* param_2, ulong param_3) {
    long lVar1 = _png_get_io_ptr();
    (*(PacketReaderMixin<jag::PacketView>**)(lVar1 + 152))->gArrayBuffer(param_2, 0, param_3);
}
