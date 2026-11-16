// libs/audio/SoundResource.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::audio {
    class SoundResource {
    public:
        // virtual methods in vtable order
        virtual ~SoundResource();
        IsStreamed() const;
        HasFailed() const;
        int GenerateCacheableId(int, bool);
        SetStreamed(bool);
        SoundResource();
        void GetCacheableId() const;
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> /* 16 bytes */ NullSoundResourceData;

        // data members, from how the methods use this: 9 bytes
        undefined* field_0;    // offset 0, vtable pointer
        undefined1 m_streamed; // offset 8
    };

    // 0x100664830, 16 bytes, inline, placed by class name and debug map
    // SoundResource::GenerateCacheableId(int, bool)
    int SoundResource::GenerateCacheableId(int param_1, bool param_2) {
        undefined7 in_register_00000031;

        return (int)CONCAT71(in_register_00000031, param_2) + param_1 * 2;
    }

    // 0x100664980, 16 bytes, inline, placed by class name and debug map
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // SoundResource::SetStreamed(bool)
    /* debug::DebugUIElement::NotifyDebugRegistration(bool) */

    void debug::DebugUIElement::NotifyDebugRegistration(bool param_1) {
        field_8 = param_1;
    }

    // 0x100665de0, 32 bytes, base-object constructor, inline, placed by class name
    // SoundResource::SoundResource()
    void SoundResource::SoundResource() {
        field_0 = PTR_vtable_100ee8610 + 16;
        m_streamed = 0;
    }

    // 0x1006699e0, 48 bytes, inline, placed by class name
    // SoundResource::GetCacheableId() const
    void SoundResource::GetCacheableId() {
        bool bVar1;
        int iVar2;

        iVar2 = (**(code**)(field_0 + 80))();
        bVar1 = (bool)IsValid();
        GenerateCacheableId(iVar2, bVar1);
    }

} // namespace jag::audio

namespace jag {
    // 0x1006648e0, 160 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<VorbisJs5Resource>::type make_shared<VorbisJs5Resource, hal::audio::AudioAPI*>(hal::audio::AudioAPI*&&)
    jag* make_shared<VorbisJs5Resource, hal::audio::AudioAPI*>(AudioAPI** param_1) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_34;
        VorbisJs5Resource* local_30[2];

        pvVar1 = (void*)aligned_alloc(160, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_30[0] = placement_new<VorbisJs5Resource, hal::audio::AudioAPI*>((void*)((long)pvVar1 + 32), param_1);
            local_34 = 1;
            prVar2 = placement_new<ref_counter_shared<VorbisJs5Resource>, int, VorbisJs5Resource*&>(pvVar1, &local_34,
                                                                                                    local_30);
            prVar2->~AutoSingleton(local_30[0]);
            prVar2->~AutoSingleton(local_30[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_30[0]);
        }
        return this;
    }

} // namespace jag
