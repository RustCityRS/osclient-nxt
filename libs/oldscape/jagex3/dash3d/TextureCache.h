// libs/oldscape/jagex3/dash3d/TextureCache.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    // 0x100143d00
    oldscape::PacketJ<Array<unsigned char>>* placement_new<oldscape::PacketJ<Array<unsigned char>>>(void* arg1) {
        *(uint64_t*)((long)arg1 + 16) = 0;
        *(uint64_t*)((long)arg1 + 24) = 0;
        *(uint64_t*)arg1 = 0;
        *(uint64_t*)((long)arg1 + 8) = 0;
        new (arg1) oldscape::PacketJ();
        return arg1;
    }

    // 0x100143d30
    ref_counter_shared<oldscape::PacketJ<Array<unsigned char>>>*
    placement_new<ref_counter_shared<oldscape::PacketJ<Array<unsigned char>>>, int,
                  oldscape::PacketJ<Array<unsigned char>>*&>(void* arg1, int&& arg2,
                                                             oldscape::PacketJ<Array<unsigned char>>*& arg3) {
        new (arg1) ref_counter_shared<oldscape::PacketJ<Array<unsigned char>>>((long)*arg2, arg3);
        return arg1;
    }

    // 0x100143d60
    ref_counter_shared<oldscape::PacketJ<Array<unsigned char>>>::ref_counter_shared(
        unsigned long arg1, oldscape::PacketJ<Array<unsigned char>>* packetJ)
        : ref_counter_base() {
        *(uint8_t**)this = PTR_vtable_100ee7928 + 16;
        *(unsigned long*)(this + 16) = arg1;
        *(PacketJ<Array<unsigned char> _>**)(this + 24) = packetJ;
    }

    // 0x100143da0
    void ref_counter_shared<oldscape::PacketJ<Array<unsigned char>>>::DeleteData() {
        unsigned long uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((WindowSavedPosition*)(*(long*)(this + 24) + lVar2))->~WindowSavedPosition();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 32;
                } while (uVar1 < *(unsigned long*)(this + 16));
            }
            *(uint64_t*)(this + 24) = 0;
        }
    }

    // 0x100143eb0
    oldscape::LogFileSink* placement_new<oldscape::LogFileSink>(void* arg1) {
        *(uint64_t*)arg1 = 0;
        *(uint64_t*)((long)arg1 + 8) = 0;
        new (arg1) oldscape::LogFileSink();
        return arg1;
    }

    // 0x100143ed0
    ref_counter_shared<oldscape::LogFileSink>*
    placement_new<ref_counter_shared<oldscape::LogFileSink>, int, oldscape::LogFileSink*&>(
        void* arg1, int&& arg2, oldscape::LogFileSink*& arg3) {
        new (arg1) ref_counter_shared<oldscape::LogFileSink>((long)*arg2, arg3);
        return arg1;
    }

} // namespace jag

namespace jag::oldscape::dash3d {
    class TextureCache {
    public:
        // virtual methods in vtable order
        virtual auto GetTexture(int arg1);
        virtual TextureCache* GetAllTextureData();
        virtual auto GetTextureData(int arg1, ErrorCapture& errorCapture);
        virtual uint32_t GetTextureColour(int arg1);
        virtual uint8_t GetTextureSolid(int arg1);
        virtual bool GetTextureSmall(int arg1);
        virtual void GetTextureCount();
        ~TextureCache();
        TextureCache(jagex3::Js5* js51, jagex3::Js5* js52, int arg3, double arg4, int arg5);
        unsigned long RequestTextureImageDownloadPercent();
        void SetGamma(double arg1);
        void ClearCache();
        void RunAnims(int arg1);

    private:
        uint8_t _unknown_8[48];
        int field_56;
        int field_60;
        double m_gamma;
        int field_72;
        uint8_t _unknown_76[4];
        Js5* field_80;
    };

    // 0x100143940
    TextureCache::~TextureCache() {
        field_40.~SharedPtrList();
        field_8.~vector();
    }

} // namespace jag::oldscape::dash3d
