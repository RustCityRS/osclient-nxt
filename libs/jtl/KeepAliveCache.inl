// libs/jtl/KeepAliveCache.inl
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    // 0x1001dab60
    void KeepAliveCache<unsigned long long, graphics::TextureData,
                        eastl::map<unsigned long long, shared_ptr<graphics::TextureData>>>::clear() {
        clear();
        ((this + 112))->clear();
    }

    // 0x100861ab0
    void
    KeepAliveCache<unsigned long long, render::Texture, eastl::map<unsigned long long, shared_ptr<render::Texture>>>::
        Insert(const unsigned long long& arg1, const shared_ptr<render::Texture>& texture) {
        ResourceList<unsigned long long, render::Texture, eastl::map<unsigned long long, shared_ptr<render::Texture>>>
            local_28;
        shared_ptr<oldscape::dash3d::GroundDecor> local_20;

        ResourceList<unsigned long long, render::Texture,
                     eastl::map<unsigned long long, shared_ptr<render::Texture>>>::AddExistingResource<>(&local_28,
                                                                                                         arg1, texture);
        if (local_28[0] == (ResourceList<unsigned long long, render::Texture,
                                         eastl::map<unsigned long long, shared_ptr<render::Texture>>>)0) {
            LogAssert("result.m_newResource",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/KeepAliveCache.inl",
                      87, nullptr);
        }
        new (this) shared_ptr(&local_20);
        return this;
    }

    // 0x100861e70
    void KeepAliveCache<unsigned long long, render::TextureCube,
                        eastl::map<unsigned long long, shared_ptr<render::TextureCube>>>::
        Insert(const unsigned long long& arg1, const shared_ptr<render::TextureCube>& textureCube) {
        ResourceList<unsigned long long, render::TextureCube,
                     eastl::map<unsigned long long, shared_ptr<render::TextureCube>>>
            local_28;
        shared_ptr<oldscape::dash3d::GroundDecor> local_20;

        ResourceList<
            unsigned long long, render::TextureCube,
            eastl::map<unsigned long long, shared_ptr<render::TextureCube>>>::AddExistingResource<>(&local_28, arg1,
                                                                                                    textureCube);
        if (local_28[0] == (ResourceList<unsigned long long, render::TextureCube,
                                         eastl::map<unsigned long long, shared_ptr<render::TextureCube>>>)0) {
            LogAssert("result.m_newResource",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/KeepAliveCache.inl",
                      87, nullptr);
        }
        new (this) shared_ptr(&local_20);
        return this;
    }

    // 0x100861fe0
    void KeepAliveCache<unsigned long long, graphics::TextureData,
                        eastl::map<unsigned long long, shared_ptr<graphics::TextureData>>>::
        Insert(const unsigned long long& arg1, const shared_ptr<graphics::TextureData>& textureData) {
        ResourceList<unsigned long long, graphics::TextureData,
                     eastl::map<unsigned long long, shared_ptr<graphics::TextureData>>>
            local_28;
        shared_ptr<oldscape::dash3d::GroundDecor> local_20;

        ResourceList<
            unsigned long long, graphics::TextureData,
            eastl::map<unsigned long long, shared_ptr<graphics::TextureData>>>::AddExistingResource<>(&local_28, arg1,
                                                                                                      textureData);
        if (local_28[0] == (ResourceList<unsigned long long, graphics::TextureData,
                                         eastl::map<unsigned long long, shared_ptr<graphics::TextureData>>>)0) {
            LogAssert("result.m_newResource",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/KeepAliveCache.inl",
                      87, nullptr);
        }
        new (this) shared_ptr(&local_20);
        return this;
    }

} // namespace jag
