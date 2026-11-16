// libs/audio/SoundResource.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::audio {
    class SoundResource {
    public:
        // virtual methods in vtable order
        virtual ~SoundResource();
        bool IsStreamed() const;
        bool HasFailed() const;
        int GenerateCacheableId(int arg1, bool arg2);
        void SetStreamed(bool arg1);
        SoundResource();
        void GetCacheableId() const;
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
            NullSoundResourceData; // = shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>()

    private:
        uint8_t m_streamed;
    };

    // 0x100664830
    int SoundResource::GenerateCacheableId(int arg1, bool arg2) {
        uint64_t in_register_00000031;

        return (int)(((uint64_t)in_register_00000031 << 8) | (uint8_t)arg2) + arg1 * 2;
    }

    // 0x100664980
    void SoundResource::SetStreamed(bool arg1) {
        field_8 = arg1;
    }

    // 0x100665de0
    SoundResource::SoundResource() : m_streamed(0) {}

    // 0x1006699e0
    void SoundResource::GetCacheableId() const {
        (*this->_vptr[5]._dtor)();
    }

} // namespace jag::audio

namespace jag {
    // 0x1006648e0
    shared_ptr_if_not_array<VorbisJs5Resource>::type
    make_shared<VorbisJs5Resource, hal::audio::AudioAPI*>(hal::audio::AudioAPI*&& arg1) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_34;
        VorbisJs5Resource* local_30[2];

        auto arg1_00 = aligned_alloc(160, 8);
        if (arg1_00 == nullptr) {
            shared_ptr_if_not_array<VorbisJs5Resource>::type result;
        } else {
            local_30[0] = placement_new<VorbisJs5Resource, hal::audio::AudioAPI*>((void*)((long)arg1_00 + 32), arg1);
            local_34 = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<VorbisJs5Resource>, int, VorbisJs5Resource*&>(arg1_00, &local_34,
                                                                                               local_30);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_30[0]);
        }
        return result;
    }

} // namespace jag
