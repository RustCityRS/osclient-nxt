// libs/tweaky/Tweaky_RadioGroup.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.tweaky

#include "libs/ui/components/RadioGroup.h"

namespace jag::tweak {
    // 0x100a4bcb0, 336 bytes, placed by class name and debug map
    // RadioGroup::GetRadioValue() const
    int RadioGroup::GetRadioValue() {
        bool bVar1;
        char cVar2;
        shared_ptr* psVar4;
        GameToken* this_00;
        long* plVar5;
        shared_ptr* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        int iVar6;
        undefined1 auVar7[16];
        shared_ptr<oldscape::dash3d::Decor> local_68[16];
        shared_ptr local_58;
        undefined8 local_48;
        undefined8 local_40;
        int local_34;

        local_48 = eastl::list<console::Line, eastl::allocator>::begin();
        auVar7 = eastl::list<console::Line, eastl::allocator>::end();
        local_40 = auVar7._0_8_;
        bVar1 = eastl::operator!=((eastl*)&local_48, (hashtable_iterator_base*)&local_40, auVar7._8_8_);
        if (bVar1) {
            iVar6 = 0;
            do {
                psVar4 = (shared_ptr*)eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                    (ListIterator<console::Line, console::Line*, console::Line&>*)&local_48);
                shared_ptr<oldscape::dash3d::Decor>::shared_ptr(local_68, psVar4);
                this_00 = (GameToken*)shared_ptr<Control>::operator->((shared_ptr<Control>*)local_68);
                if (this_00->GetStatus() == 9) {
                    static_pointer_cast<oldscape::ClientEntity, shared_ptr<oldscape::ClientNpc>>(
                        &local_58, (jag*)local_68, extraout_RDX);
                    plVar5 = (long*)shared_ptr<RadioButton>::operator->((shared_ptr<RadioButton>*)&local_58);
                    cVar2 = (**(code**)(*plVar5 + 120))(plVar5);
                    local_58.~shared_ptr();
                    if (cVar2 == '\0')
                        goto LAB_100a4bd84;
                    bVar1 = false;
                    local_34 = iVar6;
                } else {
                LAB_100a4bd84:
                    bVar1 = true;
                }
                local_68->~shared_ptr();
                if (!bVar1) {
                    return local_34;
                }
                eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator++(
                    (ListIterator<console::Line, console::Line*, console::Line&>*)&local_48);
                bVar1 = eastl::operator!=((eastl*)&local_48, (hashtable_iterator_base*)&local_40, extraout_RDX_00);
                iVar6 = iVar6 + 1;
            } while (bVar1);
        }
        return -1;
    }

    // 0x100a4be00, 256 bytes, placed by class name and debug map
    // RadioGroup::UntickAll()
    void RadioGroup::UntickAll() {
        bool bVar1;
        shared_ptr* psVar3;
        GameToken* this;
        long lVar4;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        shared_ptr* extraout_RDX_01;
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_58[16];
        shared_ptr local_48;
        list<console::Line, eastl::allocator> local_38[8];
        list<console::Line, eastl::allocator> local_30[8];

        eastl::list<console::Line, eastl::allocator>::begin(local_38);
        eastl::list<console::Line, eastl::allocator>::end(local_30);
        bVar1 = eastl::operator!=((eastl*)local_38, (hashtable_iterator_base*)local_30, extraout_RDX);
        if (bVar1) {
            do {
                psVar3 = (shared_ptr*)eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                    (ListIterator<console::Line, console::Line*, console::Line&>*)local_38);
                new (local_58) shared_ptr<oldscape::dash3d::Decor>(psVar3);
                this = (GameToken*)shared_ptr<Control>::operator->((shared_ptr<Control>*)local_58);
                if (GetStatus() == 9) {
                    static_pointer_cast<oldscape::ClientEntity, shared_ptr<oldscape::ClientNpc>>(
                        &local_48, (jag*)local_58, extraout_RDX_01);
                    lVar4 = shared_ptr<RadioButton>::operator->((shared_ptr<RadioButton>*)&local_48);
                    *(undefined1*)(lVar4 + 211) = 0;
                    local_48.~shared_ptr();
                }
                local_58->~shared_ptr();
                eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator++(
                    (ListIterator<console::Line, console::Line*, console::Line&>*)local_38);
                bVar1 = eastl::operator!=((eastl*)local_38, (hashtable_iterator_base*)local_30, extraout_RDX_00);
            } while (bVar1);
        }
    }

} // namespace jag::tweak
