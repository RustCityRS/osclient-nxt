// libs/hal/render/state/InputAssemblerState.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: osclient

namespace jag::render {
    class InputAssemblerState {
    public:
        GetVertexDeclaration() const;
        SetPrimitiveType(PrimitiveType);
        GetVertexBuffers() const;
        GetPrimitiveType() const;
        GetGLIndexBuffer() const;
        BufferInterface* GetIndexBuffer() const;
        GetGLVertexBuffers() const;
        void SetFlags(unsigned int);
        void Destroy();
        void SetVertexStreamData(VertexDeclaration const*, VertexBuffer const*);
        InputAssemblerState();
        ~InputAssemblerState();
        void Clear();
        void ResetVAO() const;
        ulong IsValid() const;
        IsValidCachedState() const;
        bool ShouldUseVAO() const;
        void SetVertexStreamData(VertexDeclaration const*, unsigned int, VertexBuffer const* const*,
                                 unsigned int const*, unsigned int const*);
        void UpdateGLVertexBufferCache() const;
        void OnBind() const;
        void UpdateGLIndexBufferCache() const;
        void BindVAO(ImmediateRenderContext&) const;
        void CreateVAO(ImmediateRenderContext&) const;
        void BindIndexBuffer() const;
        void SetIndexBuffer(IndexBuffer const*, unsigned int);
        GetNativeVAO() const;
        InputAssemblerState(InputAssemblerState const&);

        // data members, from how the methods use this: 192 bytes
        undefined4 field_0;         // offset 0
        undefined4 field_4;         // offset 4
        VertexDeclaration* field_8; // offset 8
        VertexBuffer* field_16;     // offset 16
        char _unknown_24[96];
        BufferInterface* m_pIndexBuffer; // offset 120
        uint m_flags;                    // offset 128
        char _unknown_132[4];
        shared_ptr field_136; // offset 136
        int field_152;        // offset 152
        char _unknown_156[4];
        undefined8 field_160; // offset 160
        undefined8 field_168; // offset 168
        undefined8 field_176; // offset 176
        undefined4 field_184; // offset 184
        char _unknown_188[4];
    };

    // 0x10000b2a0: the linker folded this into eastl::string::Layout::GetHeapSize() const, which has identical code
    InputAssemblerState::GetVertexDeclaration() const;

    // 0x10000c2f0: the linker folded this into math::Rect<int>::SetX(int), which has identical code
    InputAssemblerState::SetPrimitiveType(PrimitiveType);

    // 0x1000b9950: the linker folded this into oldscape::ScriptVarType::GetDefaultValue() const, which has identical code
    InputAssemblerState::GetVertexBuffers() const;

    // 0x1000b9960: the linker folded this into oldscape::ScriptVarType::GetID() const, which has identical code
    InputAssemblerState::GetPrimitiveType() const;

    // 0x10015dc30: the linker folded this into oldscape::auth::AuthLibWrapper::GetPurchaseShopItemStatus(), which has identical code
    InputAssemblerState::GetGLIndexBuffer() const;

    // 0x1003b0ae0: the linker folded this into auth::AuthWeb::GetOAuthAccessTokenExpiryTime(), which has identical code
    InputAssemblerState::GetIndexBuffer() const;

    // 0x1004b0c70: the linker folded this into game::EnvironmentOverride::GetMapOverrides() const, which has identical code
    InputAssemblerState::GetGLVertexBuffers() const;

    // 0x1008f33e0, 16 bytes, inline, placed by class name and debug map
    // InputAssemblerState::SetFlags(unsigned int)
    void InputAssemblerState::SetFlags(uint param_1) {
        m_flags = param_1;
    }

    // 0x100bdf6e0, 112 bytes, placed by class name
    // InputAssemblerState::SetVertexStreamData(VertexDeclaration const*, VertexBuffer const*)
    void InputAssemblerState::SetVertexStreamData(VertexDeclaration* param_1, VertexBuffer* param_2) {
        uint* in_R8;
        VertexBuffer* local_28;
        long local_20;

        local_20 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_28 = param_2;
        if (param_1 != (VertexDeclaration*)0) {
            param_1->GetVertexStride(0);
        }
        SetVertexStreamData((VertexDeclaration*)this, (uint)param_1, (VertexBuffer**)&DAT_00000001, (uint*)&local_28,
                            in_R8);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_20) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100be2e00, 16 bytes, complete-object constructor, placed by class name
    // InputAssemblerState::InputAssemblerState(): jumps straight to the base-object constructor

    // 0x100be2e10, 16 bytes, complete-object destructor, placed by class name
    // InputAssemblerState::~InputAssemblerState(): jumps straight to the base-object destructor

    // 0x100c283f0, 64 bytes, inline, placed by class name
    // InputAssemblerState::GetNativeVAO() const
    undefined8 InputAssemblerState::GetNativeVAO() {
        bool bVar1;
        CoordMapSquare* this_00;
        undefined8 uVar2;

        bVar1 = field_136->operator_cast_to_bool();
        uVar2 = 0;
        if (bVar1) {
            this_00 =
                (CoordMapSquare*)shared_ptr<VertexArrayObject>::operator->((shared_ptr<VertexArrayObject>*)field_136);
            uVar2 = this_00->GetX();
        }
        return uVar2;
    }

    // 0x100c42b00, 16 bytes, complete-object constructor, inline, placed by class name
    // InputAssemblerState::InputAssemblerState(InputAssemblerState const&): jumps straight to the base-object constructor

    // 0x100c42b10, 160 bytes, base-object constructor, inline, placed by class name
    // InputAssemblerState::InputAssemblerState(InputAssemblerState const&)
    void InputAssemblerState::InputAssemblerState(InputAssemblerState* param_1) {
        VertexDeclaration* pVVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        undefined4 uVar4;
        int iVar5;

        uVar4 = param_1->field_4;
        pVVar1 = param_1->field_8;
        field_0 = param_1->field_0;
        field_4 = uVar4;
        field_8 = pVVar1;
        new (&field_16, (fixed_vector*)&param_1->field_16)
            eastl::fixed_vector<VertexBuffer_const*, 8ul, true, eastl::allocator>();
        m_flags = param_1->m_flags;
        m_pIndexBuffer = param_1->m_pIndexBuffer;
        new (field_136, (shared_ptr*)param_1->field_136) shared_ptr<oldscape::dash3d::Decor>();
        field_184 = param_1->field_184;
        iVar5 = param_1->field_152;
        uVar4 = *(undefined4*)&param_1->field_156;
        uVar2 = param_1->field_160;
        uVar3 = param_1->field_176;
        field_168 = param_1->field_168;
        field_176 = uVar3;
        field_152 = iVar5;
        *(undefined4*)&field_156 = uVar4;
        field_160 = uVar2;
    }

} // namespace jag::render

namespace jag::graphics::internal {
    // 0x1008f33f0, 80 bytes, inline, placed by debug map only (low confidence)
    // VertexSetupRingArray<GUIManagerVertexBase<short> >::Destroy()
    /* VertexSetupRingArray<GUIManagerVertexBase<float>
   >::Destroy() */

    void VertexSetupRingArray<GUIManagerVertexBase<float>>::Destroy() {
        ((this + 144))->Destroy();
        ((this + 232))->Destroy();
        ((this + 16))->Destroy();
        ((this + 320))->Destroy();
        shared_ptr<Shader>::reset();
    }

    // 0x1008f3440, 80 bytes, inline, placed by debug map only (low confidence)
    // VertexSetupDynamic::Destroy()
    void VertexSetupDynamic::Destroy() {
        (&field_336)->Destroy();
        (&field_456)->Destroy();
        (&field_16)->Destroy();
        field_112->Destroy();
        shared_ptr<Shader>::reset();
    }

} // namespace jag::graphics::internal
