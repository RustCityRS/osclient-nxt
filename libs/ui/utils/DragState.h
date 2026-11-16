// libs/ui/utils/DragState.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::ui {
    class DragState {
    public:
        auto GetTarget() const;
        void Clear();
        void SetComponent(decltype(nullptr) arg1, decltype(nullptr) arg2);
        void SetLayer(decltype(nullptr) arg1);
        void SetBeenDragged(bool arg1);
        void SetLayer(const shared_ptr<Component>& component);
        unsigned long IsDraggedComponent(const Component* component) const;
        bool HasBeenDragged() const;
        bool IsInitialised() const;

    private:
        ref_counter_base* field_0;
        uint8_t _unknown_8[92];
        bool m_beenDragged;
        uint8_t _unknown_101[11];
        uint8_t field_112;
    };

    // 0x1006766a0
    void DragState::SetComponent(decltype(nullptr) arg1, decltype(nullptr) arg2) {
        reset();
        field_16.reset();
        field_112 = 0;
    }

    // 0x1006766d0
    void DragState::SetLayer(decltype(nullptr) arg1) {
        ((weak_ptr<Component>*)((long)arg1 + 32))->reset();
        *(uint8_t*)((long)arg1 + 112) = 0;
    }

    // 0x1006766f0
    void DragState::SetBeenDragged(bool arg1) {
        m_beenDragged = arg1;
    }

    // 0x100689240
    unsigned long DragState::IsDraggedComponent(const Component* component) const {
        Component* pCVar2;
        unsigned long uVar3;
        ReturnValue local_38;

        bool cVar1 = HasBeenDragged();
        if (!cVar1) {
            uVar3 = 0;
        } else {
            GetTarget(&local_38, this);
            pCVar2 = (Component*)local_38.end();
            uVar3 = (((uint64_t)((int64_t)((unsigned long)component >> 8)) << 8) | (uint8_t)(pCVar2 == component));
            if (cVar1) {
            }
        }
        return uVar3 & 4294967295;
    }

    // 0x1006af790
    bool DragState::HasBeenDragged() const {
        bool bVar2;

        if (IsInitialised() == '\0') {
            bVar2 = false;
        } else {
            bVar2 = m_beenDragged != false;
        }
        return bVar2;
    }

    // 0x1006af7c0
    bool DragState::IsInitialised() const {
        return use_count() != 0;
    }

} // namespace jag::ui
