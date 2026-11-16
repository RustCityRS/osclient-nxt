// projects/osclient/folderbrowser/FolderBrowser.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: osclient

namespace jag::oldscape {
    // 0x100058f70
    FolderSelection::FolderSelectionRequest::FolderSelectionRequest() {
        new (&field_8) eastl::string();
    }

    // 0x1000590a0
    FolderSelection::FolderSelectionRequest::~FolderSelectionRequest() {
        field_8.~basic_string();
    }

    // 0x1000590a0: LanguageMessage::~LanguageMessage() has the same machine code as FolderSelection::FolderSelectionRequest::~FolderSelectionRequest()

} // namespace jag::oldscape

namespace jag {
    // 0x100059000
    ref_counter_shared<oldscape::FolderSelection::FolderSelectionRequest>::ref_counter_shared(
        unsigned long arg1, oldscape::FolderSelection::FolderSelectionRequest* folderSelectionRequest)
        : ref_counter_base() {}

    // 0x100059040
    void ref_counter_shared<oldscape::FolderSelection::FolderSelectionRequest>::DeleteData() {
        ref_counter_shared<oldscape::FolderSelection::FolderSelectionRequest> _vtbl* prVar1;
        long lVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar2 = 0;
                prVar1 = nullptr;
                do {
                    ((LanguageMessage*)((long)&(this[3]._vptr)->_dtor + lVar2))->~LanguageMessage();
                    prVar1 =
                        (ref_counter_shared<oldscape::FolderSelection::FolderSelectionRequest> _vtbl*)((long)&prVar1
                                                                                                           ->_dtor +
                                                                                                       1);
                    lVar2 = lVar2 + 40;
                } while (prVar1 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

    // 0x1000590a0: PacketError::~PacketError() has the same machine code as oldscape::FolderSelection::FolderSelectionRequest::~FolderSelectionRequest()

} // namespace jag

namespace jag::game {
    // 0x1000590a0: PhraseType::~PhraseType() has the same machine code as oldscape::FolderSelection::FolderSelectionRequest::~FolderSelectionRequest()

    // 0x1000590a0: GWCLocation::~GWCLocation() has the same machine code as oldscape::FolderSelection::FolderSelectionRequest::~FolderSelectionRequest()

} // namespace jag::game

namespace jag::sock {
    // 0x1000590a0: AddressBase::~AddressBase() has the same machine code as oldscape::FolderSelection::FolderSelectionRequest::~FolderSelectionRequest()

} // namespace jag::sock

namespace jag::oldscape::configdecoder {
    // 0x1000590a0: ParamTypeHelper::ParamVariant::~ParamVariant() has the same machine code as FolderSelection::FolderSelectionRequest::~FolderSelectionRequest()

} // namespace jag::oldscape::configdecoder
