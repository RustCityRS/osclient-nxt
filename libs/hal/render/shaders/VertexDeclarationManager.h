// libs/hal/render/shaders/VertexDeclarationManager.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::render::internal {
    // 0x100c3a640
    uint8_t BufferPool<IndexBuffer>::GarbageCollect(bool)::{
        lambda(ManagedBuffer<IndexBuffer>&) #1
    }
    ::operator()(ManagedBuffer<IndexBuffer>& bool) const {
        lambda(ManagedBuffer<VertexBuffer>&) #1
    }
    ::operator()(_lambda_jag__render__internal__ManagedBuffer<VertexBuffer> ___1_* this,
                 ManagedBuffer<PixelUnpackBuffer>* managedBuffer) {
        uint8_t bVar1;

        bVar1 = managedBuffer->IsCreated();
        return bVar1 ^ 1;
    }

    // 0x100c3a650
    ManagedBuffer<IndexBuffer>* ManagedBuffer<IndexBuffer>::operator=(ManagedBuffer<IndexBuffer>&& managedBuffer) {
        *this = managedBuffer;
        *(uint32_t*)(this + 88) = *(uint32_t*)(managedBuffer + 88);
        return this;
    }

    // 0x100c3a7e0
    bool BufferPool<IndexBuffer>::GarbageCollect(bool)::{
        lambda(ManagedBuffer<IndexBuffer> const&, ManagedBuffer<IndexBuffer> const&) #1
    }
    ::operator()(const ManagedBuffer<IndexBuffer>& bool, const ManagedBuffer<IndexBuffer>& arg2) const {
        lambda(ManagedBuffer<IndexBuffer> const&, ManagedBuffer<IndexBuffer> const&) #1
    }
    ::operator()(_lambda_jag__render__internal__ManagedBuffer<IndexBuffer>
                     const__jag__render__internal__ManagedBuffer<IndexBuffer> const___1_* this,
                 ManagedBuffer<IndexBuffer>* managedBuffer1, ManagedBuffer<IndexBuffer>* managedBuffer2) {
        bool cVar1;
        unsigned int uVar2;
        unsigned int uVar3;

        cVar1 = managedBuffer1->IsPermanent();
        uVar3 = *(unsigned int*)(managedBuffer1 + 88) + 1000;
        if (!cVar1) {
            uVar3 = *(unsigned int*)(managedBuffer1 + 88);
        }
        cVar1 = managedBuffer2->IsPermanent();
        uVar2 = *(unsigned int*)(managedBuffer2 + 88) + 1000;
        if (!cVar1) {
            uVar2 = *(unsigned int*)(managedBuffer2 + 88);
        }
        return uVar2 < uVar3;
    }

    // 0x100c3b250
    ManagedBuffer<ShaderConstBuffer>*
    ManagedBuffer<VertexBuffer>::operator=(ManagedBuffer<VertexBuffer>&& managedBuffer) {
        *this = managedBuffer;
        *(uint32_t*)(this + 80) = *(uint32_t*)(managedBuffer + 80);
        return this;
    }

} // namespace jag::render::internal

namespace jag::render {
    class VertexDeclarationManager {
    public:
        // virtual methods in vtable order
        virtual ~VertexDeclarationManager();
        void Register(const VertexDeclaration* vertexDeclaration);
        void Unregister(const VertexDeclaration* vertexDeclaration);
        uint64_t GetVertexDeclaration(unsigned int arg1);
        VertexDeclarationManager(unsigned int arg1);

    private:
        unsigned int field_8;
        uint8_t _unknown_12[36];
    };

    // 0x100c39240
    VertexDeclarationManager::VertexDeclarationManager(unsigned int arg1) : Singleton<VertexDeclarationManager>() {
        field_8.reserve((unsigned long)arg1);
    }

} // namespace jag::render
