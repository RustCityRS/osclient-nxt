// libs/hal/render/buffers/HistoryCachedDynamicBuffer.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::render {
    template <typename...> // 1 instantiations, e.g. <ShaderConstBuffer>
    class HistoryCachedDynamicBuffer {
    public:
        class Buffer;
        CurrentBuffer() const;
        void Destroy();
        void RotateBuffers();
        ~HistoryCachedDynamicBuffer();
        HistoryCachedDynamicBuffer();
        ulong Update(unsigned int, unsigned int, void const*);
        Create(unsigned int, unsigned int, void const*);
    };

    template <typename...> // 1 instantiations, e.g.
    class HistoryCachedDynamicBuffer::Buffer {
    public:
        ~Buffer();
        Buffer();
    };

    // 0x1009324f0, 144 bytes, inline, placed by class name and debug map
    // HistoryCachedDynamicBuffer<ShaderConstBuffer>::CurrentBuffer() const
    undefined8 HistoryCachedDynamicBuffer<ShaderConstBuffer>::CurrentBuffer() {
        char cVar1;

        cVar1 = empty();
        if (cVar1 != '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("!m_buffers.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/"
                      "HistoryCachedDynamicBuffer.h",
                      81, (char*)0);
        }
        if (*(long*)(this + 56) == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_currentBuffer",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/"
                      "HistoryCachedDynamicBuffer.h",
                      82, (char*)0);
        }
        cVar1 = (*(BufferInterface**)(this + 56))->IsCreated();
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("m_currentBuffer->IsCreated()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/"
                      "HistoryCachedDynamicBuffer.h",
                      83, (char*)0);
        }
        return *(undefined8*)(this + 56);
    }

    // 0x100932660, 16 bytes, inline, placed by class name and debug map
    // HistoryCachedDynamicBuffer<ShaderConstBuffer>::Destroy()
    void HistoryCachedDynamicBuffer<ShaderConstBuffer>::Destroy() {
        clear();
    }

    // 0x100932680, 16 bytes, inline, placed by class name and debug map
    // HistoryCachedDynamicBuffer<ShaderConstBuffer>::RotateBuffers()
    void HistoryCachedDynamicBuffer<ShaderConstBuffer>::RotateBuffers() {
        eastl::erase_if<WrapArrayValueCopy<unsigned char, eastl::allocator>,
                        HistoryCachedDynamicBuffer<ShaderConstBuffer>::Buffer,
                        eastl::hash<WrapArrayValueCopy<unsigned char, eastl::allocator>>,
                        eastl::equal_to<WrapArrayValueCopy<unsigned char, eastl::allocator>>, eastl::allocator, false,
                        HistoryCachedDynamicBuffer<ShaderConstBuffer>::RotateBuffers()::_lambda(auto : 1 &) _1_>(this,
                                                                                                                 this);
    }

    // 0x1009394f0, 16 bytes, base-object destructor, inline, placed by class name
    // HistoryCachedDynamicBuffer<ShaderConstBuffer>::~HistoryCachedDynamicBuffer()
    void HistoryCachedDynamicBuffer<ShaderConstBuffer>::~HistoryCachedDynamicBuffer() {
        ~hash_map();
    }

    // 0x100939690, 16 bytes, complete-object destructor, inline, placed by class name
    // HistoryCachedDynamicBuffer<ShaderConstBuffer>::Buffer::~Buffer(): jumps straight to the base-object destructor

    // 0x1009396a0, 16 bytes, base-object destructor, inline, placed by class name
    // HistoryCachedDynamicBuffer<ShaderConstBuffer>::Buffer::~Buffer()
    void HistoryCachedDynamicBuffer<ShaderConstBuffer>::Buffer::~Buffer() {
        ~PooledBuffer();
    }

    // 0x10093ae00, 80 bytes, base-object constructor, inline, placed by class name
    // HistoryCachedDynamicBuffer<ShaderConstBuffer>::HistoryCachedDynamicBuffer()
    void HistoryCachedDynamicBuffer<ShaderConstBuffer>::HistoryCachedDynamicBuffer() {
        allocator local_20[8];

        eastl::allocator::allocator(local_20, "EASTL hash_map");
        new (this) eastl::hash_map<
            WrapArrayValueCopy<unsigned char, eastl::allocator>, HistoryCachedDynamicBuffer<ShaderConstBuffer>::Buffer,
            eastl::hash<WrapArrayValueCopy<unsigned char, eastl::allocator>>,
            eastl::equal_to<WrapArrayValueCopy<unsigned char, eastl::allocator>>, eastl::allocator, false>(local_20);
        *(undefined8*)(this + 56) = 0;
        *(undefined4*)(this + 64) = 0;
    }

    // 0x10093fcc0, 464 bytes, inline, placed by class name
    // HistoryCachedDynamicBuffer<ShaderConstBuffer>::Update(unsigned int, unsigned int, void const*)
    ulong HistoryCachedDynamicBuffer<ShaderConstBuffer>::Update(uint param_1, uint param_2, void* param_3) {
        uint uVar2;
        ulong uVar3;
        undefined8 uVar4;
        long lVar5;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base local_80[16];
        WrapArrayValueCopy<unsigned char, eastl::allocator> local_70[48];
        WrapArrayValueCopy local_40[16];

        if (param_1 != 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("offset == 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/"
                      "HistoryCachedDynamicBuffer.h",
                      43, (char*)0);
        }
        if (param_2 == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("dataSize > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/"
                      "HistoryCachedDynamicBuffer.h",
                      44, (char*)0);
        }
        if (param_3 == (void*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("pData",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/"
                      "HistoryCachedDynamicBuffer.h",
                      45, (char*)0);
        }
        if (*(uint*)(this + 64) < param_2) {
            /* WARNING: Subroutine does not return */
            LogAssert("dataSize <= m_sizeInBytes",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/"
                      "HistoryCachedDynamicBuffer.h",
                      46, (char*)0);
        }
        uVar3 = size();
        if (6000 < uVar3) {
            uVar4 = logger::default_logger();
            logger::Logger::Log(
                uVar4, 0, 3,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/"
                "HistoryCachedDynamicBuffer.h",
                47, "Excessive buffers held within DynamicBuffer - make sure RotateBuffers is being called.");
        }
        WrapArrayValueCopy<unsigned char, eastl::allocator>::WrapArrayValueCopy(local_70, param_3, (ulong)param_2,
                                                                                true);
        eastl::hashtable<WrapArrayValueCopy<unsigned char, eastl::allocator>,
                         eastl::pair<WrapArrayValueCopy<unsigned char, eastl::allocator> const,
                                     HistoryCachedDynamicBuffer<ShaderConstBuffer>::Buffer>,
                         eastl::allocator,
                         eastl::use_first<eastl::pair<WrapArrayValueCopy<unsigned char, eastl::allocator> const,
                                                      HistoryCachedDynamicBuffer<ShaderConstBuffer>::Buffer>>,
                         eastl::equal_to<WrapArrayValueCopy<unsigned char, eastl::allocator>>,
                         eastl::hash<WrapArrayValueCopy<unsigned char, eastl::allocator>>, eastl::mod_range_hashing,
                         eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::find(local_40);
        eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                         eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        if (eastl::operator==((eastl*)local_40, local_80, extraout_RDX)) {
            uVar4 = eastl::hash_map<
                WrapArrayValueCopy<unsigned char, eastl::allocator>,
                HistoryCachedDynamicBuffer<ShaderConstBuffer>::Buffer,
                eastl::hash<WrapArrayValueCopy<unsigned char, eastl::allocator>>,
                eastl::equal_to<WrapArrayValueCopy<unsigned char, eastl::allocator>>, eastl::allocator,
                false>::operator[]((hash_map<WrapArrayValueCopy<unsigned char, eastl::allocator>,
                                             HistoryCachedDynamicBuffer<ShaderConstBuffer>::Buffer,
                                             eastl::hash<WrapArrayValueCopy<unsigned char, eastl::allocator>>,
                                             eastl::equal_to<WrapArrayValueCopy<unsigned char, eastl::allocator>>,
                                             eastl::allocator, false>*)this,
                                   (WrapArrayValueCopy*)local_70);
            uVar2 = ((uint)uVar4)->Create(param_2, 8);
            uVar3 = (ulong)uVar2;
            *(undefined8*)(this + 56) = uVar4;
        } else {
            lVar5 = local_40->HeapBeginPtr();
            *(long*)(this + 56) = lVar5 + 48;
            lVar5 = local_40->HeapBeginPtr();
            *(undefined4*)(lVar5 + 128) = 6;
            uVar3 = CONCAT71((int7)((ulong)local_40 >> 8), 1);
        }
        local_70->~WrapArrayValueCopy();
        return uVar3 & 4294967295;
    }

    // 0x100940480, 16 bytes, complete-object constructor, inline, placed by class name
    // HistoryCachedDynamicBuffer<ShaderConstBuffer>::Buffer::Buffer(): jumps straight to the base-object constructor

    // 0x100940490, 32 bytes, base-object constructor, inline, placed by class name
    // HistoryCachedDynamicBuffer<ShaderConstBuffer>::Buffer::Buffer()
    void HistoryCachedDynamicBuffer<ShaderConstBuffer>::Buffer::Buffer() {
        PooledBuffer<ShaderConstBuffer>::PooledBuffer();
        *(undefined4*)(this + 80) = 6;
    }

    // 0x100947080, 112 bytes, inline, placed by class name
    // HistoryCachedDynamicBuffer<ShaderConstBuffer>::Create(unsigned int, unsigned int, void const*)
    undefined8 HistoryCachedDynamicBuffer<ShaderConstBuffer>::Create(uint param_1, uint param_2, void* param_3) {
        undefined8 in_RAX;
        undefined4 uVar2;
        undefined8 uVar1;

        uVar2 = (undefined4)((ulong)in_RAX >> 32);
        if (65536 < param_1) {
            uVar1 = logger::default_logger();
            logger::Logger::Log(uVar1, 0, 3,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                "buffers/HistoryCachedDynamicBuffer.h",
                                26,
                                "Large HistoryCachedDynamicBuffer created (%u bytes) - consider using a different type "
                                "of DynamicBuffer.",
                                CONCAT44(uVar2, param_1));
        }
        *(uint*)(this + 64) = param_1;
        if (param_3 != (void*)0) {
            Update(this, 0, param_1, param_3);
        }
        return 1;
    }

    // 0x1009471c0, 48 bytes, inline, placed by class name
    // auto HistoryCachedDynamicBuffer<ShaderConstBuffer>::RotateBuffers()::{lambda(auto:1&)#1}::operator()<eastl::pair<WrapArrayValueCopy<unsigned char, eastl::allocator> const, HistoryCachedDynamicBuffer<ShaderConstBuffer>::Buffer> >(eastl::pair<WrapArrayValueCopy<unsigned char, eastl::allocator> const, HistoryCachedDynamicBuffer<ShaderConstBuffer>::Buffer>&) const
    /* auto 
   HistoryCachedDynamicBuffer<ShaderConstBuffer>::RotateBuffers()::{lambda(auto:1&)#1}::TEMPNAMEPLACEHOLDERVALUE(eastl::pair<WrapArrayValueCopy<unsigned
   char, eastl::allocator> const,
   HistoryCachedDynamicBuffer<ShaderConstBuffer>::Buffer>&) const */

    undefined4 HistoryCachedDynamicBuffer<ShaderConstBuffer>::RotateBuffers()::{
        lambda(auto : 1 &) #1
    }
    ::operator()(_lambda_auto_1___1_* this, pair * param_1)

    {
        int iVar1;

        if (param_1 + 48 == *(pair**)(*(long*)this + 56)) {
            return 0;
        }
        iVar1 = *(int*)(param_1 + 128);
        *(int*)(param_1 + 128) = iVar1 + -1;
        return CONCAT31((int3)((uint)iVar1 >> 8), iVar1 < 1);
    }

} // namespace jag::render
