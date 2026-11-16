// projects/osclient/folderbrowser/FolderBrowser.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: osclient

namespace jag::oldscape {
    // 0x100058f60, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // FolderSelection::FolderSelectionRequest::FolderSelectionRequest(): jumps straight to the base-object constructor

    // 0x100058f70, 48 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // FolderSelection::FolderSelectionRequest::FolderSelectionRequest()
    void FolderSelection::FolderSelectionRequest::FolderSelectionRequest() {
        std::atomic<FolderSelection::FolderPathRequestStatus>::atomic();
        new (&field_8) eastl::string();
    }

    // 0x100059090, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // FolderSelection::FolderSelectionRequest::~FolderSelectionRequest(): jumps straight to the base-object destructor

    // 0x100059090: the linker folded this into FolderSelection::FolderSelectionRequest::~FolderSelectionRequest(), which has identical code
    LanguageMessage::~LanguageMessage();

    // 0x1000590a0, 16 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // FolderSelection::FolderSelectionRequest::~FolderSelectionRequest()
    /* LanguageMessage::~LanguageMessage() */

    void LanguageMessage::~LanguageMessage() {
        (&field_8)->~basic_string();
    }

    // 0x1000590a0: the linker folded this into FolderSelection::FolderSelectionRequest::~FolderSelectionRequest(), which has identical code
    LanguageMessage::~LanguageMessage();

} // namespace jag::oldscape

namespace jag {
    // 0x100058ff0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::FolderSelection::FolderSelectionRequest>::ref_counter_shared(unsigned long, oldscape::FolderSelection::FolderSelectionRequest*): jumps straight to the base-object constructor

    // 0x100059000, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::FolderSelection::FolderSelectionRequest>::ref_counter_shared(unsigned long, oldscape::FolderSelection::FolderSelectionRequest*)
    void ref_counter_shared<oldscape::FolderSelection::FolderSelectionRequest>::ref_counter_shared(
        ulong param_1, FolderSelectionRequest* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7650 + 16;
        *(ulong*)(this + 16) = param_1;
        *(FolderSelectionRequest**)(this + 24) = param_2;
    }

    // 0x100059040, 80 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::FolderSelection::FolderSelectionRequest>::DeleteData()
    void ref_counter_shared<oldscape::FolderSelection::FolderSelectionRequest>::DeleteData() {
        ulong uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((*(long*)(this + 24) + lVar2))->~LanguageMessage();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 40;
                } while (uVar1 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x100059090: the linker folded this into oldscape::FolderSelection::FolderSelectionRequest::~FolderSelectionRequest(), which has identical code
    PacketError::~PacketError();

    // 0x1000590a0: the linker folded this into oldscape::FolderSelection::FolderSelectionRequest::~FolderSelectionRequest(), which has identical code
    PacketError::~PacketError();

} // namespace jag

namespace jag::game {
    // 0x100059090: the linker folded this into oldscape::FolderSelection::FolderSelectionRequest::~FolderSelectionRequest(), which has identical code
    PhraseType::~PhraseType();

    // 0x100059090: the linker folded this into oldscape::FolderSelection::FolderSelectionRequest::~FolderSelectionRequest(), which has identical code
    GWCLocation::~GWCLocation();

    // 0x1000590a0: the linker folded this into oldscape::FolderSelection::FolderSelectionRequest::~FolderSelectionRequest(), which has identical code
    PhraseType::~PhraseType();

    // 0x1000590a0: the linker folded this into oldscape::FolderSelection::FolderSelectionRequest::~FolderSelectionRequest(), which has identical code
    GWCLocation::~GWCLocation();

} // namespace jag::game

namespace jag::sock {
    // 0x100059090: the linker folded this into oldscape::FolderSelection::FolderSelectionRequest::~FolderSelectionRequest(), which has identical code
    AddressBase::~AddressBase();

    // 0x1000590a0: the linker folded this into oldscape::FolderSelection::FolderSelectionRequest::~FolderSelectionRequest(), which has identical code
    AddressBase::~AddressBase();

} // namespace jag::sock

namespace jag::oldscape::configdecoder {
    // 0x100059090: the linker folded this into FolderSelection::FolderSelectionRequest::~FolderSelectionRequest(), which has identical code
    ParamTypeHelper::ParamVariant::~ParamVariant();

    // 0x1000590a0: the linker folded this into FolderSelection::FolderSelectionRequest::~FolderSelectionRequest(), which has identical code
    ParamTypeHelper::ParamVariant::~ParamVariant();

} // namespace jag::oldscape::configdecoder
