// projects/osclient/highlighting/HighlightedGroup.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "HighlightedGroup.h"

namespace jag::oldscape::highlight {
    // 0x100013a60
    void HighlightedGroup::ForEachNPC(std::function<void(ClientNpc const&)> callback,
                                      const std::array<shared_ptr<ClientNpc>, 65536ul>& clientNpcs) {
        unsigned short uVar1;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_00;
        unsigned int* puVar3;
        unsigned long uVar4;
        unsigned short* puVar6;
        ClientNpc* clientNpc;
        unsigned long arg1;

        uint8_t* this_01 = &field_8;
        long lVar2 = this_01->size();
        if (lVar2 != 0) {
            arg1 = 0;
            do {
                puVar6 = (unsigned short*)(*this_01)[arg1];
                uVar1 = *puVar6;
                this_00 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)clientNpcs[(unsigned long)puVar6[1]];
                clientNpc = (ClientNpc*)this_00->end();
                if (clientNpc == nullptr) {
                LAB_100013aa0:
                    lVar2 = this_01->HeapBeginPtr();
                    this_01->erase((lVar2 + arg1 * 4));
                    arg1 = arg1 - 1;
                } else {
                    if ((&clientNpc->field_1024)->operator_cast_to_bool() == '\0')
                        goto LAB_100013aa0;
                    puVar3 = (unsigned int*)clientNpc->field_1024.operator->();
                    if (*puVar3 != (unsigned int)uVar1)
                        goto LAB_100013aa0;
                    std::function<void(ClientNpc const&)>::operator()((function<void(ClientNpc const&)>*)callback,
                                                                      clientNpc);
                }
                arg1 = arg1 + 1;
                uVar4 = this_01->size();
            } while (arg1 < uVar4);
        }
    }

    // 0x1000156e0
    int GetMapSquareIndex(int arg1, int arg2) {
        return arg2 * 100 + arg1;
    }

} // namespace jag::oldscape::highlight
