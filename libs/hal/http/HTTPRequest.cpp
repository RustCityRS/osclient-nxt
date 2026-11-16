// libs/hal/http/HTTPRequest.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.http

#include "HTTPRequest.h"

namespace jag::http {
    // 0x100324d50: the linker folded this into oldscape::graphics::NXTPixToolkit::GetPix3D(), which has identical code
    HTTPRequest::GetRedirectLocation();

    // 0x100414eb0: the linker folded this into game::MapSquare::GetClientCompositeData() const, which has identical code
    HTTPRequest::GetContentType() const;

    // 0x1004c1940: the linker folded this into callstack::JagException::errorMessage() const, which has identical code
    HTTPRequest::GetURL() const;

    // 0x100ad8f30, 96 bytes, placed by class name and debug map
    // HTTPRequest::CopyData(unsigned char*, unsigned long)
    ulong HTTPRequest::CopyData(uchar* param_1, ulong param_2) {
        long lVar1;
        long lVar2;
        undefined1* this_00;

        this_00 = m_pData;
        lVar1 = this_00->end();
        this_00->set_max_size(lVar1 + param_2, 3);
        lVar2 = this_00->data();
        _memcpy((void*)(lVar1 + lVar2), param_1, param_2);
        return param_2;
    }

    // 0x100ad8f90, 96 bytes, placed by class name and debug map
    // HTTPRequest::CopyHeader(unsigned char*, unsigned long)
    ulong HTTPRequest::CopyHeader(uchar* param_1, ulong param_2) {
        long lVar1;
        long lVar2;
        undefined1* this_00;

        this_00 = &field_160;
        lVar1 = this_00->size();
        eastl::vector<unsigned char, eastl::allocator>::resize((ulong)this_00);
        lVar2 = this_00->HeapBeginPtr();
        _memcpy((void*)(lVar1 + lVar2), param_1, param_2);
        return param_2;
    }

    // 0x100ad9040, 112 bytes, placed by class name and debug map
    // HTTPRequest::AddFooter()
    void HTTPRequest::AddFooter() {
        undefined1* this_00;
        long lVar1;
        long lVar2;

        if (field_192 != 0) {
            this_00 = m_pData;
            lVar1 = this_00->end();
            this_00->set_max_size(field_192 + lVar1, 3);
            lVar2 = this_00->data();
            ___bzero(lVar1 + lVar2, field_192);
        }
    }

    // 0x100ad90b0, 128 bytes, placed by class name and debug map
    // HTTPRequest::SetProgress(unsigned long, unsigned long)
    void HTTPRequest::SetProgress(ulong param_1, ulong param_2) {
        clock_t cVar1;

        if (field_560 < param_1) {
            cVar1 = _clock();
            field_592 = cVar1;
        } else if (field_576 != 0) {
            cVar1 = _clock();
            if ((long)field_576 * 1000000 + field_592 < cVar1) {
                m_aborted = 1;
            }
        }
        field_560 = param_1;
        field_568 = param_2;
    }

} // namespace jag::http
