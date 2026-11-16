// libs/graphics/runetek7/effects/viewportmap/ViewportMapManager.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class ViewportMapEntry {
    public:
        ~ViewportMapEntry();
        ViewportMapEntry(int, shared_ptr<render::Texture2D> const&);
        ViewportMapEntry(ViewportMapEntry&&);
        ViewportMapEntry* operator=(ViewportMapEntry&&);

        // data members, from how the methods use this: 32 bytes
        int field_0; // offset 0
        char _unknown_4[20];
        ulonglong field_24; // offset 24
    };

    class ViewportMapManager {
    public:
        ViewportMapManager(TextureManager&, SkyBoxManager&);
        GetViewportMapTexture(int) const;
        void RegisterViewportMapID(int);
        Initialise();
        CreateRenderingResources();
        void Destroy();
        void DestroyRenderingResources();
        void Update();
        void SetTextureMode(TextureMode);
        ~ViewportMapManager();

        // data members, from how the methods use this: 36 bytes
        TextureManager* field_0; // offset 0
        SkyBoxManager* field_8;  // offset 8
        int field_16;            // offset 16
        Callstack field_20;      // offset 20
    };

    // 0x10091fcc0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ViewportMapEntry::ViewportMapEntry(int, shared_ptr<render::Texture2D> const&): jumps straight to the base-object constructor

    // 0x100923720, 16 bytes, complete-object destructor, inline, placed by class name
    // ViewportMapManager::~ViewportMapManager(): jumps straight to the base-object destructor

    // 0x100923730, 16 bytes, base-object destructor, inline, placed by class name
    // ViewportMapManager::~ViewportMapManager()
    void ViewportMapManager::~ViewportMapManager() {
        ((field_20 + 4))->~vector();
    }

} // namespace jag::graphics
