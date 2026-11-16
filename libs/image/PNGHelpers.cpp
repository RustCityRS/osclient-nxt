// libs/image/PNGHelpers.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.image

#include "PNGHelpers.h"

// 0x100a0be80, 96 bytes, placed by debug map only (low confidence)
// nxt_PNG_error
void _nxt_PNG_error(undefined8 param_1, undefined8 param_2) {
    int* piVar1;
    undefined8 uVar2;

    piVar1 = (int*)_png_get_io_ptr();
    uVar2 = jag::logger::default_logger();
    jag::logger::Logger::Log(
        uVar2, 0, 2, "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/image/PNGHelpers.cpp", 18,
        &DAT_100e377c0, param_2);
    /* WARNING: Subroutine does not return */
    _longjmp(piVar1, 1);
}

// 0x100a0bee0, 64 bytes, placed by debug map only (low confidence)
// nxt_PNG_warning
void _nxt_PNG_warning(undefined8 param_1, undefined8 param_2) {
    undefined8 uVar1;

    uVar1 = jag::logger::default_logger();
    jag::logger::Logger::Log(
        uVar1, 0, 3, "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/image/PNGHelpers.cpp", 12,
        &DAT_100e377c0, param_2);
}

// 0x100a0bf20, 48 bytes, placed by debug map only (low confidence)
// nxt_PNG_stream_reader
void _nxt_PNG_stream_reader(undefined8 param_1, uchar* param_2, ulong param_3) {
    long lVar1;

    lVar1 = _png_get_io_ptr();
    (*(PacketReaderMixin<jag::PacketView>**)(lVar1 + 152))->gArrayBuffer(param_2, 0, param_3);
}
