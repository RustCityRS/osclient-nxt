// libs/oldscape/jagex3/dash3d/TextureCache.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    // 0x100143d00, 48 bytes, inline, placed by debug map only (low confidence)
    // oldscape::PacketJ<Array<unsigned char, eastl::allocator> >* placement_new<oldscape::PacketJ<Array<unsigned char, eastl::allocator> >>(void*)
    PacketJ* placement_new<oldscape::PacketJ<Array<unsigned char, eastl::allocator>>>(void* param_1) {
        *(undefined8*)((long)param_1 + 16) = 0;
        *(undefined8*)((long)param_1 + 24) = 0;
        *(undefined8*)param_1 = 0;
        *(undefined8*)((long)param_1 + 8) = 0;
        oldscape::PacketJ<Array<unsigned char, eastl::allocator>>::PacketJ(param_1);
        return param_1;
    }

    // 0x100143d30, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::PacketJ<Array<unsigned char, eastl::allocator> > >* placement_new<ref_counter_shared<oldscape::PacketJ<Array<unsigned char, eastl::allocator> > >, int, oldscape::PacketJ<Array<unsigned char, eastl::allocator> >*&>(void*, int&&, oldscape::PacketJ<Array<unsigned char, eastl::allocator> >*&)
    ref_counter_shared*
    jag::placement_new<ref_counter_shared<oldscape::PacketJ<Array<unsigned char, eastl::allocator>>>, int,
                       oldscape::PacketJ<Array<unsigned char, eastl::allocator>>*&>(void* param_1, int* param_2,
                                                                                    PacketJ** param_3) {
        ref_counter_shared<oldscape::PacketJ<Array<unsigned char, eastl::allocator>>>::ref_counter_shared(
            param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x100143d50, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::PacketJ<Array<unsigned char, eastl::allocator> > >::ref_counter_shared(unsigned long, oldscape::PacketJ<Array<unsigned char, eastl::allocator> >*): jumps straight to the base-object constructor

    // 0x100143d60, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::PacketJ<Array<unsigned char, eastl::allocator> > >::ref_counter_shared(unsigned long, oldscape::PacketJ<Array<unsigned char, eastl::allocator> >*)
    void ref_counter_shared<oldscape::PacketJ<Array<unsigned char, eastl::allocator>>>::ref_counter_shared(
        ref_counter_shared<oldscape::PacketJ<Array<unsigned char, eastl::allocator>>>* this, ulong param_1,
        PacketJ* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7928 + 16;
        *(ulong*)(this + 16) = param_1;
        *(PacketJ**)(this + 24) = param_2;
    }

    // 0x100143da0, 80 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::PacketJ<Array<unsigned char, eastl::allocator> > >::DeleteData()
    void ref_counter_shared<oldscape::PacketJ<Array<unsigned char, eastl::allocator>>>::DeleteData(
        ref_counter_shared<oldscape::PacketJ<Array<unsigned char, eastl::allocator>>>* this) {
        ulong uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((*(long*)(this + 24) + lVar2))->~WindowSavedPosition();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 32;
                } while (uVar1 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x100143eb0, 32 bytes, inline, placed by debug map only (low confidence)
    // oldscape::LogFileSink* placement_new<oldscape::LogFileSink>(void*)
    LogFileSink* placement_new<oldscape::LogFileSink>(void* param_1) {
        *(undefined8*)param_1 = 0;
        *(undefined8*)((long)param_1 + 8) = 0;
        oldscape::LogFileSink::LogFileSink(param_1);
        return param_1;
    }

    // 0x100143ed0, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::LogFileSink>* placement_new<ref_counter_shared<oldscape::LogFileSink>, int, oldscape::LogFileSink*&>(void*, int&&, oldscape::LogFileSink*&)
    ref_counter_shared* jag::placement_new<ref_counter_shared<oldscape::LogFileSink>, int, oldscape::LogFileSink*&>(
        void* param_1, int* param_2, LogFileSink** param_3) {
        ref_counter_shared<oldscape::LogFileSink>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

} // namespace jag

namespace jag::oldscape::dash3d {
    class TextureCache {
    public:
        // virtual methods in vtable order
        virtual GetTexture(int);
        virtual GetAllTextureData();
        virtual GetTextureData(int, ErrorCapture&);
        virtual GetTextureColour(int);
        virtual GetTextureSolid(int);
        virtual bool GetTextureSmall(int);
        virtual void GetTextureCount();
        ~TextureCache();
        TextureCache(jagex3::Js5*, jagex3::Js5*, int, double, int);
        ulong RequestTextureImageDownloadPercent();
        void SetGamma(double);
        void ClearCache();
        void RunAnims(int);

        // data members, from how the methods use this: 88 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[48];
        int field_56;   // offset 56
        int field_60;   // offset 60
        double m_gamma; // offset 64
        int field_72;   // offset 72
        char _unknown_76[4];
        Js5* field_80; // offset 80
    };

    // 0x100143930, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // TextureCache::~TextureCache(): jumps straight to the base-object destructor

    // 0x100143940, 48 bytes, base-object destructor, inline, placed by class name and debug map
    // TextureCache::~TextureCache()
    void TextureCache::~TextureCache() {
        (&field_40)->~SharedPtrList();
        (&field_8)->~vector();
    }

} // namespace jag::oldscape::dash3d
