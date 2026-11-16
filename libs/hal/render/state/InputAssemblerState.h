// libs/hal/render/state/InputAssemblerState.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: osclient

namespace jag::render {
    class InputAssemblerState {
    public:
        void GetVertexDeclaration() const;
        void SetPrimitiveType(PrimitiveType arg1);
        uint8_t* GetVertexBuffers() const;
        unsigned int GetPrimitiveType() const;
        int GetGLIndexBuffer() const;
        BufferInterface* GetIndexBuffer() const;
        uint8_t* GetGLVertexBuffers() const;
        void SetFlags(unsigned int arg1);
        void Destroy();
        void SetVertexStreamData(const VertexDeclaration* vertexDeclaration, const VertexBuffer* vertexBuffer);
        InputAssemblerState();
        ~InputAssemblerState();
        void Clear();
        void ResetVAO() const;
        unsigned long IsValid() const;
        bool IsValidCachedState() const;
        bool ShouldUseVAO() const;
        void SetVertexStreamData(const VertexDeclaration* vertexDeclaration, unsigned int arg2,
                                 VertexBuffer const* const* arg3, const unsigned int* arg4, const unsigned int* arg5);
        void UpdateGLVertexBufferCache() const;
        void OnBind() const;
        void UpdateGLIndexBufferCache() const;
        void BindVAO(ImmediateRenderContext& immediateRenderContext) const;
        void CreateVAO(ImmediateRenderContext& immediateRenderContext) const;
        void BindIndexBuffer() const;
        void SetIndexBuffer(const IndexBuffer* indexBuffer, unsigned int arg2);
        uint64_t GetNativeVAO() const;
        InputAssemblerState(const InputAssemblerState& inputAssemblerState);

    private:
        unsigned int m_primitiveType;
        uint32_t field_4;
        VertexDeclaration* field_8;
        uint8_t m_pVertexBuffers[8];
        uint8_t _unknown_24[96];
        BufferInterface* m_pIndexBuffer;
        unsigned int m_flags;
        uint8_t _unknown_132[4];
        shared_ptr field_136;
        int m_gLIndexBuffer;
        uint8_t _unknown_156[4];
        uint64_t field_160;
        uint64_t field_168;
        uint64_t field_176;
        uint32_t field_184;
        uint8_t _unknown_188[4];
    };

    // 0x10000b2a0: InputAssemblerState::GetVertexDeclaration() const has the same machine code as eastl::string::Layout::GetHeapSize() const

    // 0x10000c2f0: InputAssemblerState::SetPrimitiveType(PrimitiveType) has the same machine code as math::Rect<int>::SetX(int)

    // 0x1000b9950: InputAssemblerState::GetVertexBuffers() const has the same machine code as oldscape::ScriptVarType::GetDefaultValue() const

    // 0x1000b9960: InputAssemblerState::GetPrimitiveType() const has the same machine code as oldscape::ScriptVarType::GetID() const

    // 0x10015dc30: InputAssemblerState::GetGLIndexBuffer() const has the same machine code as oldscape::auth::AuthLibWrapper::GetPurchaseShopItemStatus()

    // 0x1003b0ae0: InputAssemblerState::GetIndexBuffer() const has the same machine code as auth::AuthWeb::GetOAuthAccessTokenExpiryTime()

    // 0x1004b0c70: InputAssemblerState::GetGLVertexBuffers() const has the same machine code as game::EnvironmentOverride::GetMapOverrides() const

    // 0x1008f33e0
    void InputAssemblerState::SetFlags(unsigned int arg1) {
        m_flags = arg1;
    }

    // 0x100bdf6e0
    void InputAssemblerState::SetVertexStreamData(const VertexDeclaration* vertexDeclaration,
                                                  const VertexBuffer* vertexBuffer) {
        unsigned int* in_R8;
        unsigned int* in_R9;

        VertexBuffer* local_28 = vertexBuffer;
        if (vertexDeclaration != nullptr) {
            vertexDeclaration->GetVertexStride(0);
        }
        SetVertexStreamData(vertexDeclaration, 1, &local_28, in_R8, in_R9);
    }

    // 0x100c283f0
    uint64_t InputAssemblerState::GetNativeVAO() const {
        bool cVar1 = field_136->operator_cast_to_bool();
        uint64_t uVar2 = 0;
        if (cVar1) {
            uVar2 = ((CoordMapSquare*)(*field_136).operator->())->GetX();
        }
        return uVar2;
    }

    // 0x100c42b10
    InputAssemblerState::InputAssemblerState(const InputAssemblerState& inputAssemblerState) {
        uint32_t uVar4 = inputAssemblerState.field_4;
        VertexDeclaration* pVVar1 = inputAssemblerState.field_8;
        m_primitiveType = inputAssemblerState.m_primitiveType;
        field_4 = uVar4;
        field_8 = pVVar1;
        new (m_pVertexBuffers) eastl::fixed_vector<VertexBuffer const*, 8ul>(inputAssemblerState.m_pVertexBuffers);
        m_flags = inputAssemblerState.m_flags;
        m_pIndexBuffer = inputAssemblerState.m_pIndexBuffer;
        new (field_136) shared_ptr(inputAssemblerState.field_136);
        field_184 = inputAssemblerState.field_184;
        int iVar5 = inputAssemblerState.m_gLIndexBuffer;
        uVar4 = *(uint32_t*)&inputAssemblerState.field_156;
        uint64_t uVar2 = inputAssemblerState.field_160;
        uint64_t uVar3 = inputAssemblerState.field_176;
        field_168 = inputAssemblerState.field_168;
        field_176 = uVar3;
        m_gLIndexBuffer = iVar5;
        *(uint32_t*)&field_156 = uVar4;
        field_160 = uVar2;
    }

} // namespace jag::render

namespace jag::graphics::internal {
    // 0x1008f33f0
    void VertexSetupRingArray<GUIManagerVertexBase<short>>::Destroy() {
        ((this + 144))->Destroy();
        ((this + 232))->Destroy();
        ((this + 16))->Destroy();
        ((this + 320))->Destroy();
        reset();
    }

    // 0x1008f3440
    void VertexSetupDynamic::Destroy() {
        field_336.Destroy();
        field_456.Destroy();
        field_16.Destroy();
        field_112->Destroy();
        reset();
    }

} // namespace jag::graphics::internal
