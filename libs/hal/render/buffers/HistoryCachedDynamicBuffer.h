// libs/hal/render/buffers/HistoryCachedDynamicBuffer.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::render {
    template <typename...> // 1 instantiations, e.g. <ShaderConstBuffer>
    class HistoryCachedDynamicBuffer {
    public:
        class Buffer;
        uint64_t CurrentBuffer() const;
        void Destroy();
        void RotateBuffers();
        ~HistoryCachedDynamicBuffer();
        HistoryCachedDynamicBuffer();
        unsigned long Update(unsigned int arg1, unsigned int arg2, const void* arg3);
        uint64_t Create(unsigned int arg1, unsigned int arg2, const void* arg3);
    };

    template <typename...> // 1 instantiations, e.g.
    class HistoryCachedDynamicBuffer::Buffer {
    public:
        ~Buffer();
        Buffer();
    };

    // 0x1009324f0
    uint64_t HistoryCachedDynamicBuffer<ShaderConstBuffer>::CurrentBuffer() const {

        if (empty()) {
            LogAssert("!m_buffers.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/"
                      "HistoryCachedDynamicBuffer.h",
                      81, nullptr);
        }
        if (*(long*)(this + 56) == 0) {
            LogAssert("m_currentBuffer",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/"
                      "HistoryCachedDynamicBuffer.h",
                      82, nullptr);
        }
        if (!((*(BufferInterface**)(this + 56))->IsCreated())) {
            LogAssert("m_currentBuffer->IsCreated()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/"
                      "HistoryCachedDynamicBuffer.h",
                      83, nullptr);
        }
        return *(uint64_t*)(this + 56);
    }

    // 0x100932660
    void HistoryCachedDynamicBuffer<ShaderConstBuffer>::Destroy() {
        clear();
    }

    // 0x100932680
    void HistoryCachedDynamicBuffer<ShaderConstBuffer>::RotateBuffers() {
        eastl::erase_if<WrapArrayValueCopy<unsigned char>, HistoryCachedDynamicBuffer<ShaderConstBuffer>::Buffer,
                        eastl::hash<WrapArrayValueCopy<unsigned char>>,
                        eastl::equal_to<WrapArrayValueCopy<unsigned char>>, eastl::allocator, false,
                        HistoryCachedDynamicBuffer<ShaderConstBuffer>::RotateBuffers()::_lambda(auto : 1 &) _1_>(
            (hash_map<WrapArrayValueCopy<unsigned char>, HistoryCachedDynamicBuffer<ShaderConstBuffer>::Buffer>*)this,
            (_lambda_auto_1___1_*)this);
    }

    // 0x1009394f0
    HistoryCachedDynamicBuffer<ShaderConstBuffer>::~HistoryCachedDynamicBuffer() {}

    // 0x1009396a0
    HistoryCachedDynamicBuffer<ShaderConstBuffer>::Buffer::~Buffer() {}

    // 0x10093ae00
    HistoryCachedDynamicBuffer<ShaderConstBuffer>::HistoryCachedDynamicBuffer() {

        new (this)
            eastl::hash_map<WrapArrayValueCopy<unsigned char>, HistoryCachedDynamicBuffer<ShaderConstBuffer>::Buffer>(
                local_20);
        *(uint64_t*)(this + 56) = 0;
        *(uint32_t*)(this + 64) = 0;
    }

    // 0x10093fcc0
    unsigned long HistoryCachedDynamicBuffer<ShaderConstBuffer>::Update(unsigned int arg1, unsigned int arg2,
                                                                        const void* arg3) {
        unsigned int uVar2;
        uint64_t uVar4;
        long lVar5;

        if (arg1 != 0) {
            LogAssert("offset == 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/"
                      "HistoryCachedDynamicBuffer.h",
                      43, nullptr);
        }
        if (arg2 == 0) {
            LogAssert("dataSize > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/"
                      "HistoryCachedDynamicBuffer.h",
                      44, nullptr);
        }
        if (arg3 == nullptr) {
            LogAssert("pData",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/"
                      "HistoryCachedDynamicBuffer.h",
                      45, nullptr);
        }
        if (*(unsigned int*)(this + 64) < arg2) {
            LogAssert("dataSize <= m_sizeInBytes",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/"
                      "HistoryCachedDynamicBuffer.h",
                      46, nullptr);
        }
        unsigned long uVar3 = size();
        if (6000 < uVar3) {
            (logger::default_logger())
                ->Log(false, 3,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/"
                      "HistoryCachedDynamicBuffer.h",
                      47, "Excessive buffers held within DynamicBuffer - make sure RotateBuffers is being called.");
        }
        WrapArrayValueCopy<unsigned char> local_70(arg3, (unsigned long)arg2, true);
        auto local_40 = find(local_70);
        auto local_80 = end();
        if (local_40 == local_80 == '\0') {
            lVar5 = local_40.HeapBeginPtr();
            *(long*)(this + 56) = lVar5 + 48;
            lVar5 = local_40.HeapBeginPtr();
            *(uint32_t*)(lVar5 + 128) = 6;
            uVar3 = (((uint64_t)((int64_t)((unsigned long)&local_40 >> 8)) << 8) | (uint8_t)1);
        } else {
            uVar4 = (*this)[local_70];
            uVar2 = ((unsigned int)uVar4)->Create(arg2, 8);
            uVar3 = (unsigned long)uVar2;
            *(uint64_t*)(this + 56) = uVar4;
        }
        return uVar3 & 4294967295;
    }

    // 0x100940490
    HistoryCachedDynamicBuffer<ShaderConstBuffer>::Buffer::Buffer() {
        PooledBuffer<ShaderConstBuffer>::PooledBuffer();
        *(uint32_t*)(this + 80) = 6;
    }

    // 0x100947080
    uint64_t HistoryCachedDynamicBuffer<ShaderConstBuffer>::Create(unsigned int arg1, unsigned int arg2,
                                                                   const void* arg3) {
        uint64_t in_RAX;

        uint32_t uVar1 = (uint32_t)((unsigned long)in_RAX >> 32);
        if (65536 < arg1) {
            (logger::default_logger())
                ->Log(false, 3,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/"
                      "HistoryCachedDynamicBuffer.h",
                      26,
                      "Large HistoryCachedDynamicBuffer created (%u bytes) - consider using a different type of "
                      "DynamicBuffer.",
                      (((uint64_t)uVar1 << 32) | (uint32_t)arg1));
        }
        *(unsigned int*)(this + 64) = arg1;
        if (arg3 != nullptr) {
            Update(this, 0, arg1, arg3);
        }
        return 1;
    }

    // 0x1009471c0
    auto HistoryCachedDynamicBuffer<ShaderConstBuffer>::RotateBuffers()::{
        lambda(auto : 1 &) #1
    }
    ::operator()<
        eastl::pair<WrapArrayValueCopy<unsigned char> const, HistoryCachedDynamicBuffer<ShaderConstBuffer>::Buffer>>(
        eastl::pair<WrapArrayValueCopy<unsigned char> const, HistoryCachedDynamicBuffer<ShaderConstBuffer>::Buffer>&
            arg1) const {
        lambda(auto : 1 &) #1
    }
    ::operator()(
        _lambda_auto_1___1_* this,
        pair<WrapArrayValueCopy<unsigned char> const, HistoryCachedDynamicBuffer<ShaderConstBuffer>::Buffer> arg1) {
        int iVar1;

        if (arg1 + 48 == *(pair<WrapArrayValueCopy<unsigned char> const,
                                HistoryCachedDynamicBuffer<ShaderConstBuffer>::Buffer>**)(*(long*)this + 56)) {
            return 0;
        }
        iVar1 = *(int*)(arg1 + 128);
        *(int*)(arg1 + 128) = iVar1 - 1;
        return iVar1 < 1;
    }

} // namespace jag::render
