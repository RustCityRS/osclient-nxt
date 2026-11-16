// libs/jtl/KeepAliveCache.inl
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    // 0x1001dab60, 48 bytes, inline, placed by class name and debug map
    // KeepAliveCache<unsigned long long, graphics::TextureData, eastl::map<unsigned long long, shared_ptr<graphics::TextureData>, eastl::less<unsigned long long>, eastl::allocator> >::clear()
    void jag::KeepAliveCache<unsigned long long, graphics::TextureData,
                             eastl::map<unsigned long long, shared_ptr<graphics::TextureData>,
                                        eastl::less<unsigned long long>, eastl::allocator>>::
        clear(KeepAliveCache<unsigned long long, graphics::TextureData,
                             eastl::map<unsigned long long, shared_ptr<graphics::TextureData>,
                                        eastl::less<unsigned long long>, eastl::allocator>>* this) {
        clear();
        ((this + 112))->clear();
    }

    // 0x100861ab0, 112 bytes, inline, placed by __FILE__ string
    // KeepAliveCache<unsigned long long, render::Texture, eastl::map<unsigned long long, shared_ptr<render::Texture>, eastl::less<unsigned long long>, eastl::allocator> >::Insert(unsigned long long const&, shared_ptr<render::Texture> const&)
    ulonglong*
    jag::KeepAliveCache<unsigned long long, render::Texture,
                        eastl::map<unsigned long long, shared_ptr<render::Texture>, eastl::less<unsigned long long>,
                                   eastl::allocator>>::Insert(ulonglong* param_1, shared_ptr* param_2) {
        shared_ptr* in_RDX;
        ResourceList<unsigned long long, render::Texture,
                     eastl::map<unsigned long long, shared_ptr<render::Texture>, eastl::less<unsigned long long>,
                                eastl::allocator>>
            local_28[8];
        shared_ptr local_20;

        ResourceList<unsigned long long, render::Texture,
                     eastl::map<unsigned long long, shared_ptr<render::Texture>, eastl::less<unsigned long long>,
                                eastl::allocator>>::AddExistingResource<>(local_28, (ulonglong*)param_2, in_RDX);
        if (local_28[0] == (ResourceList<unsigned long long, render::Texture,
                                         eastl::map<unsigned long long, shared_ptr<render::Texture>,
                                                    eastl::less<unsigned long long>, eastl::allocator>>)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("result.m_newResource",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/KeepAliveCache.inl",
                      87, (char*)0);
        }
        new (param_1) shared_ptr<oldscape::dash3d::Decor>(&local_20);
        local_28->~pair();
        return param_1;
    }

    // 0x100861e70, 112 bytes, inline, placed by __FILE__ string
    // KeepAliveCache<unsigned long long, render::TextureCube, eastl::map<unsigned long long, shared_ptr<render::TextureCube>, eastl::less<unsigned long long>, eastl::allocator> >::Insert(unsigned long long const&, shared_ptr<render::TextureCube> const&)
    ulonglong*
    jag::KeepAliveCache<unsigned long long, render::TextureCube,
                        eastl::map<unsigned long long, shared_ptr<render::TextureCube>, eastl::less<unsigned long long>,
                                   eastl::allocator>>::Insert(ulonglong* param_1, shared_ptr* param_2) {
        shared_ptr* in_RDX;
        ResourceList<unsigned long long, render::TextureCube,
                     eastl::map<unsigned long long, shared_ptr<render::TextureCube>, eastl::less<unsigned long long>,
                                eastl::allocator>>
            local_28[8];
        shared_ptr local_20;

        ResourceList<unsigned long long, render::TextureCube,
                     eastl::map<unsigned long long, shared_ptr<render::TextureCube>, eastl::less<unsigned long long>,
                                eastl::allocator>>::AddExistingResource<>(local_28, (ulonglong*)param_2, in_RDX);
        if (local_28[0] == (ResourceList<unsigned long long, render::TextureCube,
                                         eastl::map<unsigned long long, shared_ptr<render::TextureCube>,
                                                    eastl::less<unsigned long long>, eastl::allocator>>)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("result.m_newResource",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/KeepAliveCache.inl",
                      87, (char*)0);
        }
        new (param_1) shared_ptr<oldscape::dash3d::Decor>(&local_20);
        local_28->~pair();
        return param_1;
    }

    // 0x100861fe0, 112 bytes, inline, placed by __FILE__ string
    // KeepAliveCache<unsigned long long, graphics::TextureData, eastl::map<unsigned long long, shared_ptr<graphics::TextureData>, eastl::less<unsigned long long>, eastl::allocator> >::Insert(unsigned long long const&, shared_ptr<graphics::TextureData> const&)
    ulonglong*
    jag::KeepAliveCache<unsigned long long, graphics::TextureData,
                        eastl::map<unsigned long long, shared_ptr<graphics::TextureData>,
                                   eastl::less<unsigned long long>, eastl::allocator>>::Insert(ulonglong* param_1,
                                                                                               shared_ptr* param_2) {
        shared_ptr* in_RDX;
        ResourceList<unsigned long long, graphics::TextureData,
                     eastl::map<unsigned long long, shared_ptr<graphics::TextureData>, eastl::less<unsigned long long>,
                                eastl::allocator>>
            local_28[8];
        shared_ptr local_20;

        ResourceList<unsigned long long, graphics::TextureData,
                     eastl::map<unsigned long long, shared_ptr<graphics::TextureData>, eastl::less<unsigned long long>,
                                eastl::allocator>>::AddExistingResource<>(local_28, (ulonglong*)param_2, in_RDX);
        if (local_28[0] == (ResourceList<unsigned long long, graphics::TextureData,
                                         eastl::map<unsigned long long, shared_ptr<graphics::TextureData>,
                                                    eastl::less<unsigned long long>, eastl::allocator>>)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("result.m_newResource",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/KeepAliveCache.inl",
                      87, (char*)0);
        }
        new (param_1) shared_ptr<oldscape::dash3d::Decor>(&local_20);
        local_28->~pair();
        return param_1;
    }

} // namespace jag
