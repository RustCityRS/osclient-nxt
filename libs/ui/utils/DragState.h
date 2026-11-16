// libs/ui/utils/DragState.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::ui {
    class DragState {
    public:
        DragState* GetTarget() const;
        void Clear();
        void SetComponent(decltype(nullptr), decltype(nullptr));
        void SetLayer(decltype(nullptr));
        void SetBeenDragged(bool);
        void SetLayer(shared_ptr<Component> const&);
        ulong IsDraggedComponent(Component const*) const;
        bool HasBeenDragged() const;
        bool IsInitialised() const;

        // data members, from how the methods use this: 113 bytes
        ref_counter_base* field_0; // offset 0
        char _unknown_8[92];
        bool m_beenDragged; // offset 100
        char _unknown_101[11];
        undefined1 field_112; // offset 112
    };

    // 0x1006766a0, 48 bytes, inline, placed by class name and debug map
    // DragState::SetComponent(decltype(nullptr), decltype(nullptr))
    void DragState::SetComponent(_func_decltype_nullptr* param_1, _func_decltype_nullptr* param_2) {
        weak_ptr<Component>::reset();
        weak_ptr<Interface>::reset();
        param_1[112] = (code)0;
    }

    // 0x1006766d0, 32 bytes, inline, placed by class name and debug map
    // DragState::SetLayer(decltype(nullptr))
    void DragState::SetLayer(_func_decltype_nullptr* param_1) {
        weak_ptr<Component>::reset();
        param_1[112] = (code)0;
    }

    // 0x1006766f0, 16 bytes, inline, placed by class name and debug map
    // DragState::SetBeenDragged(bool)
    void DragState::SetBeenDragged(bool param_1) {
        m_beenDragged = param_1;
    }

    // 0x100689240, 112 bytes, inline, placed by class name
    // DragState::IsDraggedComponent(Component const*) const
    ulong DragState::IsDraggedComponent(Component* param_1) {
        char cVar1;
        Component* pCVar2;
        ulong uVar3;
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_38[16];

        cVar1 = HasBeenDragged(this);
        if (cVar1 == '\0') {
            uVar3 = 0;
        } else {
            GetTarget((DragState*)local_38);
            pCVar2 = (Component*)local_38->end();
            uVar3 = CONCAT71((int7)((ulong)param_1 >> 8), pCVar2 == param_1);
            if (cVar1 != '\0') {
                local_38->~shared_ptr();
            }
        }
        return uVar3 & 4294967295;
    }

    // 0x1006af790, 48 bytes, inline, placed by class name
    // DragState::HasBeenDragged() const
    bool DragState::HasBeenDragged() {
        bool bVar2;

        if (IsInitialised(this) == '\0') {
            bVar2 = false;
        } else {
            bVar2 = m_beenDragged != false;
        }
        return bVar2;
    }

    // 0x1006af7c0, 16 bytes, inline, placed by class name
    // DragState::IsInitialised() const
    bool DragState::IsInitialised() {
        int iVar1;

        iVar1 = use_count();
        return iVar1 != 0;
    }

} // namespace jag::ui
