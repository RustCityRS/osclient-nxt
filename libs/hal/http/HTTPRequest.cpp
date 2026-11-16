// libs/hal/http/HTTPRequest.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.http

#include "HTTPRequest.h"

namespace jag::http {
    // 0x100324d50: HTTPRequest::GetRedirectLocation() has the same machine code as oldscape::graphics::NXTPixToolkit::GetPix3D()

    // 0x100414eb0: HTTPRequest::GetContentType() const has the same machine code as game::MapSquare::GetClientCompositeData() const

    // 0x1004c1940: HTTPRequest::GetURL() const has the same machine code as callstack::JagException::errorMessage() const

    // 0x100ad8f30
    unsigned long HTTPRequest::CopyData(unsigned char* arg1, unsigned long arg2) {
        uint8_t* this_00 = m_pData;
        long lVar1 = this_00->end();
        this_00->set_max_size(lVar1 + arg2, 3);
        long lVar2 = this_00->data();
        _memcpy((void*)(lVar1 + lVar2), arg1, arg2);
        return arg2;
    }

    // 0x100ad8f90
    unsigned long HTTPRequest::CopyHeader(unsigned char* arg1, unsigned long arg2) {
        uint8_t* this_00 = &field_160;
        long lVar1 = this_00->size();
        this_00->resize(lVar1 + arg2);
        long lVar2 = this_00->HeapBeginPtr();
        _memcpy((void*)(lVar1 + lVar2), arg1, arg2);
        return arg2;
    }

    // 0x100ad9040
    void HTTPRequest::AddFooter() {
        uint8_t* this_00;
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

    // 0x100ad90b0
    void HTTPRequest::SetProgress(unsigned long arg1, unsigned long arg2) {
        clock_t cVar1;

        if (field_560 < arg1) {
            cVar1 = _clock();
            field_592 = cVar1;
        } else if (field_576 != 0) {
            cVar1 = _clock();
            if ((long)field_576 * 1000000 + field_592 < cVar1) {
                m_aborted = 1;
            }
        }
        field_560 = arg1;
        field_568 = arg2;
    }

} // namespace jag::http
