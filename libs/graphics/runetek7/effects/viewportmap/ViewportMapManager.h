// libs/graphics/runetek7/effects/viewportmap/ViewportMapManager.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class ViewportMapEntry {
    public:
        ~ViewportMapEntry();
        ViewportMapEntry(int arg1, const shared_ptr<render::Texture2D>& texture2D);
        ViewportMapEntry(ViewportMapEntry&& skyBoxEntry);
        ViewportMapEntry* operator=(ViewportMapEntry&& viewportMapEntry);

    private:
        int field_0;
        uint8_t _unknown_4[20];
        unsigned long long field_24;
    };

    class ViewportMapManager {
    public:
        ViewportMapManager(TextureManager& textureManager, SkyBoxManager& skyBoxManager);
        uint64_t GetViewportMapTexture(int arg1) const;
        void RegisterViewportMapID(int arg1);
        void Initialise();
        void CreateRenderingResources();
        void Destroy();
        void DestroyRenderingResources();
        void Update();
        void SetTextureMode(TextureMode textureMode);
        ~ViewportMapManager();

    private:
        TextureManager* field_0;
        SkyBoxManager* field_8;
        TextureMode field_16;
        Callstack field_20;
    };

    // 0x100923730
    ViewportMapManager::~ViewportMapManager() {
        ((field_20 + 4))->~vector();
    }

} // namespace jag::graphics
