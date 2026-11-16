// libs/hal/render/shaders/VertexDeclarationManager.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::render::internal {
    // 0x100c3a640, 16 bytes, inline, placed by debug map only (low confidence)
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // BufferPool<IndexBuffer>::GarbageCollect(bool)::{lambda(ManagedBuffer<IndexBuffer>&)#1}::operator()(ManagedBuffer<IndexBuffer>&) const
    /* BufferPool<VertexBuffer>::GarbageCollect(bool)::{lambda(ManagedBuffer<VertexBuffer>&)#1}::TEMPNAMEPLACEHOLDERVALUE(ManagedBuffer<VertexBuffer>&)
   const */

    byte BufferPool<VertexBuffer>::GarbageCollect(bool)::{
        lambda(ManagedBuffer<VertexBuffer>&) #1
    }
    ::operator()(_lambda_jag__render__internal__ManagedBuffer<VertexBuffer> ___1_* this, ManagedBuffer * param_1)

    {
        return param_1->IsCreated() ^ 1;
    }

    // 0x100c3a650, 48 bytes, inline, placed by debug map only (low confidence)
    // ManagedBuffer<IndexBuffer>::operator=(ManagedBuffer<IndexBuffer>&&)
    /* ManagedBuffer<IndexBuffer>::TEMPNAMEPLACEHOLDERVALUE(ManagedBuffer<IndexBuffer>&&)
    */

    ManagedBuffer<IndexBuffer>* ManagedBuffer<IndexBuffer>::operator=(ManagedBuffer* param_1) {
        PooledBuffer<IndexBuffer>::operator=((PooledBuffer<IndexBuffer>*)this, (PooledBuffer*)param_1);
        *(undefined4*)(this + 88) = *(undefined4*)(param_1 + 88);
        return this;
    }

    // 0x100c3a7e0, 80 bytes, inline, placed by debug map only (low confidence)
    // BufferPool<IndexBuffer>::GarbageCollect(bool)::{lambda(ManagedBuffer<IndexBuffer> const&, ManagedBuffer<IndexBuffer> const&)#1}::operator()(ManagedBuffer<IndexBuffer> const&, ManagedBuffer<IndexBuffer> const&) const
    /* BufferPool<IndexBuffer>::GarbageCollect(bool)::{lambda(ManagedBuffer<IndexBuffer>
   const&, ManagedBuffer<IndexBuffer>
   const&)#1}::TEMPNAMEPLACEHOLDERVALUE(ManagedBuffer<IndexBuffer>
   const&, ManagedBuffer<IndexBuffer> const&) const */

    bool BufferPool<IndexBuffer>::GarbageCollect(bool)::{
        lambda(ManagedBuffer<IndexBuffer> const&, ManagedBuffer<IndexBuffer> const&) #1
    }
    ::operator()(_lambda_jag__render__internal__ManagedBuffer<IndexBuffer>
                     const__jag__render__internal__ManagedBuffer<IndexBuffer> const___1_* this,
                 ManagedBuffer * param_1, ManagedBuffer * param_2)

    {
        char cVar1;
        uint uVar2;
        uint uVar3;

        cVar1 = param_1->IsPermanent();
        uVar3 = *(uint*)(param_1 + 88) + 1000;
        if (cVar1 == '\0') {
            uVar3 = *(uint*)(param_1 + 88);
        }
        cVar1 = param_2->IsPermanent();
        uVar2 = *(uint*)(param_2 + 88) + 1000;
        if (cVar1 == '\0') {
            uVar2 = *(uint*)(param_2 + 88);
        }
        return uVar2 < uVar3;
    }

    // 0x100c3b250, 48 bytes, inline, placed by debug map only (low confidence)
    // ManagedBuffer<VertexBuffer>::operator=(ManagedBuffer<VertexBuffer>&&)
    /* ManagedBuffer<ShaderConstBuffer>::TEMPNAMEPLACEHOLDERVALUE(ManagedBuffer<ShaderConstBuffer>&&)
    */

    ManagedBuffer<ShaderConstBuffer>* ManagedBuffer<ShaderConstBuffer>::operator=(ManagedBuffer* param_1) {
        PooledBuffer<ShaderConstBuffer>::operator=((PooledBuffer<ShaderConstBuffer>*)this, (PooledBuffer*)param_1);
        *(undefined4*)(this + 80) = *(undefined4*)(param_1 + 80);
        return this;
    }

} // namespace jag::render::internal

namespace jag::render {
    class VertexDeclarationManager {
    public:
        // virtual methods in vtable order
        virtual ~VertexDeclarationManager();
        void Register(VertexDeclaration const*);
        void Unregister(VertexDeclaration const*);
        GetVertexDeclaration(unsigned int);
        VertexDeclarationManager(unsigned int);

        // data members, from how the methods use this: 48 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[40];
    };

    // 0x100c39220, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // VertexDeclarationManager::VertexDeclarationManager(unsigned int): jumps straight to the base-object constructor

    // 0x100c39240, 112 bytes, base-object constructor, inline, placed by class name and debug map
    // VertexDeclarationManager::VertexDeclarationManager(unsigned int)
    void VertexDeclarationManager::VertexDeclarationManager(uint param_1) {
        new (this) Singleton<VertexDeclarationManager>();
        field_0 = &PTR__VertexDeclarationManager_100f28210;
        new (&field_8)
            eastl::vector_map<unsigned int, VertexDeclaration_const*, eastl::less<unsigned int>, eastl::allocator,
                              eastl::vector<eastl::pair<unsigned int, VertexDeclaration_const*>, eastl::allocator>>();
        (&field_8, (ulong)param_1)->reserve();
    }

} // namespace jag::render
