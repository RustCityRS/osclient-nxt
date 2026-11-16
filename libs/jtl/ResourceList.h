// libs/jtl/ResourceList.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.oldscape.osrendercore

namespace jag {
    template <
        typename...> // 8 instantiations, e.g. <render::VAOManager::Key, render::VertexArrayObject, eastl::fixed_map<render::VAOMana, <unsigned long long, graphics::TextureData, eastl::map<unsigned long long, shared_ptr<jag:, <unsigned long long, render::Texture, eastl::map<unsigned long long, shared_ptr<rende
    class ResourceList {
    public:
        void clear();
        void GarbageCollect(
            std::function<bool(unsigned long long const&, shared_ptr<render::Texture> const&)> const& callback1,
            std::function<void(unsigned long long const&, shared_ptr<render::Texture> const&)> const& callback2);
        uint64_t size() const;
        void GarbageCollect(
            std::function<bool(unsigned long long const&, shared_ptr<render::TextureCube> const&)> const& callback1,
            std::function<void(unsigned long long const&, shared_ptr<render::TextureCube> const&)> const& callback2);
        void GarbageCollect(
            std::function<bool(unsigned long long const&, shared_ptr<graphics::TextureData> const&)> const& callback1,
            std::function<void(unsigned long long const&, shared_ptr<graphics::TextureData> const&)> const& callback2);
        uint8_t* FindResource(const unsigned long long& arg1);
        ResourceList<unsigned long long, render::Texture,
                     eastl::map<unsigned long long, shared_ptr<render::Texture>>>::AddResourceResult
        AddExistingResource<>(const unsigned long long& arg1, const shared_ptr<render::Texture>& texture);
        ResourceList<unsigned long long, render::TextureCube,
                     eastl::map<unsigned long long, shared_ptr<render::TextureCube>>>::AddResourceResult
        AddExistingResource<>(const unsigned long long& arg1, const shared_ptr<render::TextureCube>& textureCube);
        ResourceList<unsigned long long, graphics::TextureData,
                     eastl::map<unsigned long long, shared_ptr<graphics::TextureData>>>::AddResourceResult
        AddExistingResource<>(const unsigned long long& arg1, const shared_ptr<graphics::TextureData>& textureData);
        ResourceList(unsigned int arg1);
        ~ResourceList();
        void CallOnElements(std::function<void(render::VAOManager::Key const&,
                                               shared_ptr<render::VertexArrayObject> const&)> const& callback) const;
        ResourceList<
            render::VAOManager::Key, render::VertexArrayObject,
            eastl::fixed_map<render::VAOManager::Key, shared_ptr<render::VertexArrayObject>, 4096ul>>::AddResourceResult
        AddExistingResource<>(const render::VAOManager::Key& key,
                              const shared_ptr<render::VertexArrayObject>& vertexArrayObject);
        uint8_t* FindResource(const render::VAOManager::Key& key);
        void GarbageCollect(std::function<bool(render::VAOManager::Key const&,
                                               shared_ptr<render::VertexArrayObject> const&)> const& callback1,
                            std::function<void(render::VAOManager::Key const&,
                                               shared_ptr<render::VertexArrayObject> const&)> const& callback2);
        ResourceList<unsigned long, render::ShaderProgram,
                     eastl::vector_map<unsigned long, shared_ptr<render::ShaderProgram>>>::AddResourceResult
        AddResource<>(const unsigned long& arg1);
        void EraseResource(const unsigned long& arg1);
        void ReleaseResource(const unsigned long& arg1, shared_ptr<render::ShaderProgram>& shaderProgram);
        void GarbageCollect(
            std::function<bool(unsigned long const&, shared_ptr<render::ShaderProgram> const&)> const& callback1,
            std::function<void(unsigned long const&, shared_ptr<render::ShaderProgram> const&)> const& callback2);
        ResourceList<unsigned long, render::VertexShader,
                     eastl::vector_map<unsigned long, shared_ptr<render::VertexShader>>>::AddResourceResult
        AddResource<>(const unsigned long& arg1);
        ResourceList<unsigned long, render::PixelShader,
                     eastl::vector_map<unsigned long, shared_ptr<render::PixelShader>>>::AddResourceResult
        AddResource<>(const unsigned long& arg1);
        ResourceList<unsigned long, render::ComputeShader,
                     eastl::vector_map<unsigned long, shared_ptr<render::ComputeShader>>>::AddResourceResult
        AddResource<>(const unsigned long& arg1);
        void ReleaseResource(const unsigned long& arg1, shared_ptr<render::ComputeShader>& computeShader);
        void ReleaseResource(const unsigned long& arg1, shared_ptr<render::PixelShader>& pixelShader);
        void ReleaseResource(const unsigned long& arg1, shared_ptr<render::VertexShader>& vertexShader);
        void SetCapacity(unsigned int arg1);
    };

    class UISceneSettings {
    public:
        UISceneSettings();
        UISceneSettings* operator=(const UISceneSettings& uiSceneSettings);
        UISceneSettings* operator=(UISceneSettings&& uiSceneSettings);
        UISceneSettings(UISceneSettings&& uiSceneSettings);

    private:
        uint64_t field_0;
        uint64_t field_8;
        uint8_t _unknown_16[8];
    };

    // 0x1001c07a0
    UISceneSettings* UISceneSettings::operator=(const UISceneSettings& uiSceneSettings) {
        uint64_t uVar1 = uiSceneSettings.field_8;
        field_0 = uiSceneSettings.field_0;
        field_8 = uVar1;
        field_16 = uiSceneSettings.field_16;
        return this;
    }

    // 0x1001dab90
    void ResourceList<unsigned long long, graphics::TextureData,
                      eastl::map<unsigned long long, shared_ptr<graphics::TextureData>>>::clear() {

        scoped_lock<std::mutex> local_18(*this);
        ((this + 64))->clear();
    }

    // 0x1001db180
    ViewTransformsShaderConsts::ViewTransformsShaderConsts() : math::Vector3T() {}

    // 0x1001db300
    RenderableOutput::RenderableOutput(RenderableMode renderableMode, unsigned int arg2) {
        field_0 = (char)renderableMode;
        field_4 = arg2;
        field_8 = 0;
        field_12 = 0;
        new (field_16) UISceneSettings();
        new (field_48) callstack::Callstack();
    }

    // 0x1001db340
    RenderableOutput::RenderableOutput(RenderableOutput&& renderableOutput) {
        uint32_t uVar1 = renderableOutput.field_1;
        unsigned int uVar2 = renderableOutput.field_4;
        int iVar3 = renderableOutput.field_8;
        int iVar4 = renderableOutput.field_12;
        field_0 = renderableOutput.field_0;
        field_1 = uVar1;
        field_4 = uVar2;
        field_8 = iVar3;
        field_12 = iVar4;
        new (field_16) UISceneSettings(renderableOutput.field_16);
        *(uint32_t*)field_48 = *(uint32_t*)renderableOutput.field_48;
    }

    // 0x1001db380
    UISceneSettings::UISceneSettings(UISceneSettings&& uiSceneSettings) {
        uint64_t uVar1 = uiSceneSettings.field_8;
        field_0 = uiSceneSettings.field_0;
        field_8 = uVar1;
        new (&field_16) math::Rect(uiSceneSettings.field_16);
    }

    // 0x1008775f0
    void ResourceList<unsigned long long, render::Texture,
                      eastl::map<unsigned long long, shared_ptr<render::Texture>>>::clear() {

        scoped_lock<std::mutex> local_18(*this);
        ((this + 64))->clear();
    }

    // 0x100877640
    void ResourceList<unsigned long long, render::TextureCube,
                      eastl::map<unsigned long long, shared_ptr<render::TextureCube>>>::clear() {

        scoped_lock<std::mutex> local_18(*this);
        ((this + 64))->clear();
    }

    // 0x1008776a0
    void
    ResourceList<unsigned long long, render::Texture, eastl::map<unsigned long long, shared_ptr<render::Texture>>>::
        GarbageCollect(
            std::function<bool(unsigned long long const&, shared_ptr<render::Texture> const&)> const& callback1,
            std::function<void(unsigned long long const&, shared_ptr<render::Texture> const&)> const& callback2) {

        scoped_lock<std::mutex> local_28(*this);
        eastl::erase_if<
            unsigned long long, shared_ptr<render::Texture>, eastl::less<unsigned long long>, eastl::allocator,
            (std::function<bool(unsigned long long const&, shared_ptr<render::Texture> const&)> const&)
                ->GarbageCollect(
                    std::function<void(unsigned long long const&, shared_ptr<render::Texture> const&)> const&)::
                    _lambda(eastl::pair<unsigned long long const, shared_ptr<render::Texture>> const&) _1_>(
            (map<unsigned long long, shared_ptr<render::Texture>>*)(this + 64),
            (_lambda_eastl__pair<unsigned long long const, shared_ptr<render::Texture> _> _const___1_*)callback1);
    }

    // 0x100877740
    uint64_t ResourceList<unsigned long long, render::Texture,
                          eastl::map<unsigned long long, shared_ptr<render::Texture>>>::size() const {
        scoped_lock<std::mutex> local_20(*this);
        uint64_t uVar1 = ((this + 64))->capacity();
        return uVar1;
    }

    // 0x100877850
    unsigned long
    ResourceList<unsigned long long, render::Texture, eastl::map<unsigned long long, shared_ptr<render::Texture>>>::
        GarbageCollect(std::function<bool(unsigned long long const&, shared_ptr<render::Texture> const&)> const&,
                       std::function<void(unsigned long long const&, shared_ptr<render::Texture> const&)> const&)::{
        lambda(eastl::pair<unsigned long long const, shared_ptr<render::Texture>> const&) #1
    }
    ::operator()(const eastl::pair<unsigned long long const, shared_ptr<render::Texture>>& arg1) const {
        unsigned long uVar3;

        function* pfVar1 = *(function**)this;
        bool cVar2 = std::function::operator_cast_to_bool(pfVar1);
        if (!cVar2) {
        LAB_100877884:
            cVar2 = ((arg1 + 8))->unique();
            if (cVar2) {
                pfVar1 = *(function**)(this + 8);
                cVar2 = std::function::operator_cast_to_bool(pfVar1);
                uVar3 = (((uint64_t)((int64_t)((unsigned long)this >> 8)) << 8) | (uint8_t)1);
                if (cVar2) {
                    std::function<void(unsigned long long const&, shared_ptr<render::Texture> const&)>::operator()(
                        (function<void(unsigned long long const&, shared_ptr<render::Texture> const&)>*)pfVar1,
                        (unsigned long long*)arg1, (shared_ptr<render::Texture>*)(arg1 + 8));
                }
                goto LAB_1008778bb;
            }
        } else {
            cVar2 = std::function<bool(unsigned long long const&, shared_ptr<render::Texture> const&)>::operator()(
                (function<bool(unsigned long long const&, shared_ptr<render::Texture> const&)>*)pfVar1,
                (unsigned long long*)arg1, (shared_ptr<render::Texture>*)(arg1 + 8));
            if (cVar2)
                goto LAB_100877884;
        }
        uVar3 = 0;
    LAB_1008778bb:
        return uVar3 & 4294967295;
    }

    // 0x1008794d0
    void ResourceList<unsigned long long, render::TextureCube,
                      eastl::map<unsigned long long, shared_ptr<render::TextureCube>>>::
        GarbageCollect(
            std::function<bool(unsigned long long const&, shared_ptr<render::TextureCube> const&)> const& callback1,
            std::function<void(unsigned long long const&, shared_ptr<render::TextureCube> const&)> const& callback2) {

        scoped_lock<std::mutex> local_28(*this);
        eastl::erase_if<
            unsigned long long, shared_ptr<render::TextureCube>, eastl::less<unsigned long long>, eastl::allocator,
            (std::function<bool(unsigned long long const&, shared_ptr<render::TextureCube> const&)> const&)
                ->GarbageCollect(
                    std::function<void(unsigned long long const&, shared_ptr<render::TextureCube> const&)> const&)::
                    _lambda(eastl::pair<unsigned long long const, shared_ptr<render::TextureCube>> const&) _1_>(
            (map<unsigned long long, shared_ptr<render::TextureCube>>*)(this + 64),
            (_lambda_eastl__pair<unsigned long long const, shared_ptr<render::TextureCube> _> _const___1_*)callback1);
    }

    // 0x100879640
    unsigned long ResourceList<unsigned long long, render::TextureCube,
                               eastl::map<unsigned long long, shared_ptr<render::TextureCube>>>::
        GarbageCollect(std::function<bool(unsigned long long const&, shared_ptr<render::TextureCube> const&)> const&,
                       std::function<void(unsigned long long const&, shared_ptr<render::TextureCube> const&)> const&)::{
        lambda(eastl::pair<unsigned long long const, shared_ptr<render::TextureCube>> const&) #1
    }
    ::operator()(const eastl::pair<unsigned long long const, shared_ptr<render::TextureCube>>& arg1) const {
        unsigned long uVar3;

        function* pfVar1 = *(function**)this;
        bool cVar2 = std::function::operator_cast_to_bool(pfVar1);
        if (!cVar2) {
        LAB_100879674:
            cVar2 = ((arg1 + 8))->unique();
            if (cVar2) {
                pfVar1 = *(function**)(this + 8);
                cVar2 = std::function::operator_cast_to_bool(pfVar1);
                uVar3 = (((uint64_t)((int64_t)((unsigned long)this >> 8)) << 8) | (uint8_t)1);
                if (cVar2) {
                    std::function<void(unsigned long long const&, shared_ptr<render::TextureCube> const&)>::operator()(
                        (function<void(unsigned long long const&, shared_ptr<render::TextureCube> const&)>*)pfVar1,
                        (unsigned long long*)arg1, (shared_ptr<render::TextureCube>*)(arg1 + 8));
                }
                goto LAB_1008796ab;
            }
        } else {
            cVar2 = std::function<bool(unsigned long long const&, shared_ptr<render::TextureCube> const&)>::operator()(
                (function<bool(unsigned long long const&, shared_ptr<render::TextureCube> const&)>*)pfVar1,
                (unsigned long long*)arg1, (shared_ptr<render::TextureCube>*)(arg1 + 8));
            if (cVar2)
                goto LAB_100879674;
        }
        uVar3 = 0;
    LAB_1008796ab:
        return uVar3 & 4294967295;
    }

    // 0x10087b180
    void ResourceList<unsigned long long, graphics::TextureData,
                      eastl::map<unsigned long long, shared_ptr<graphics::TextureData>>>::
        GarbageCollect(
            std::function<bool(unsigned long long const&, shared_ptr<graphics::TextureData> const&)> const& callback1,
            std::function<void(unsigned long long const&, shared_ptr<graphics::TextureData> const&)> const& callback2) {

        scoped_lock<std::mutex> local_28(*this);
        eastl::erase_if<
            unsigned long long, shared_ptr<graphics::TextureData>, eastl::less<unsigned long long>, eastl::allocator,
            (std::function<bool(unsigned long long const&, shared_ptr<graphics::TextureData> const&)> const&)
                ->GarbageCollect(
                    std::function<void(unsigned long long const&, shared_ptr<graphics::TextureData> const&)> const&)::
                    _lambda(eastl::pair<unsigned long long const, shared_ptr<graphics::TextureData>> const&) _1_>(
            (map<unsigned long long, shared_ptr<graphics::TextureData>>*)(this + 64),
            (_lambda_eastl__pair<unsigned long long const, shared_ptr<graphics::TextureData> _> _const___1_*)callback1);
    }

    // 0x10087b2f0
    unsigned long ResourceList<unsigned long long, graphics::TextureData,
                               eastl::map<unsigned long long, shared_ptr<graphics::TextureData>>>::
        GarbageCollect(
            std::function<bool(unsigned long long const&, shared_ptr<graphics::TextureData> const&)> const&,
            std::function<void(unsigned long long const&, shared_ptr<graphics::TextureData> const&)> const&)::{
        lambda(eastl::pair<unsigned long long const, shared_ptr<graphics::TextureData>> const&) #1
    }
    ::operator()(const eastl::pair<unsigned long long const, shared_ptr<graphics::TextureData>>& arg1) const {
        lambda(eastl::pair<unsigned long long const, shared_ptr<graphics::TextureData>> const&) #1
    }
    ::operator()(_lambda_eastl__pair<unsigned long long const, shared_ptr<graphics::TextureData>> const___1_* this,
                 pair<unsigned long long const, shared_ptr<graphics::TextureData> _> arg1) {
        function* pfVar1;
        bool cVar2;
        unsigned long uVar3;

        pfVar1 = *(function**)this;
        cVar2 = std::function::operator_cast_to_bool(pfVar1);
        if (!cVar2) {
        LAB_10087b324:
            cVar2 = ((arg1 + 8))->unique();
            if (cVar2) {
                pfVar1 = *(function**)(this + 8);
                cVar2 = std::function::operator_cast_to_bool(pfVar1);
                uVar3 = (((uint64_t)((int64_t)((unsigned long)this >> 8)) << 8) | (uint8_t)1);
                if (cVar2) {
                    std::function<void(unsigned long long const&, shared_ptr<graphics::TextureData> const&)>::
                    operator()(
                        (function<void(unsigned long long const&, shared_ptr<graphics::TextureData> const&)>*)pfVar1,
                        (unsigned long long*)arg1, (shared_ptr<graphics::TextureData>*)(arg1 + 8));
                }
                goto LAB_10087b35b;
            }
        } else {
            cVar2 =
                std::function<bool(unsigned long long const&, shared_ptr<graphics::TextureData> const&)>::operator()(
                    (function<bool(unsigned long long const&, shared_ptr<graphics::TextureData> const&)>*)pfVar1,
                    (unsigned long long*)arg1, (shared_ptr<graphics::TextureData>*)(arg1 + 8));
            if (cVar2)
                goto LAB_10087b324;
        }
        uVar3 = 0;
    LAB_10087b35b:
        return uVar3 & 4294967295;
    }

    // 0x10087e690
    uint8_t*
    ResourceList<unsigned long long, render::Texture, eastl::map<unsigned long long, shared_ptr<render::Texture>>>::
        FindResource(const unsigned long long& arg1) {
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_38;

        if (*PTR_nullResource_100ee4a18 == '\0') {
            if (___cxa_guard_acquire(PTR_nullResource_100ee4a18) != 0) {
                new (PTR_nullResource_100ee95a0) shared_ptr();
                ___cxa_atexit(PTR__shared_ptr_100ee5328, PTR_nullResource_100ee95a0, 4294967296);
                ___cxa_guard_release(PTR_nullResource_100ee4a18);
            }
        }
        uint8_t* puVar4 = PTR_nullResource_100ee95a0;
        long lVar3 = PTR_nullResource_100ee95a0->end();
        if (lVar3 != 0) {
            LogAssert("nullResource.get() == nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/ResourceList.h", 151,
                      nullptr);
        }
        scoped_lock<std::mutex> local_30(*this);
        ReturnValue local_28 = ((this + 64))->find(arg1);
        local_38.end();
        if (local_28 != local_38 != '\0') {
            lVar3 = *local_28;
            puVar4 = (uint8_t*)(lVar3 + 8);
        }
        return puVar4;
    }

    // 0x10087e8d0
    ResourceList<unsigned long long, render::Texture,
                 eastl::map<unsigned long long, shared_ptr<render::Texture>>>::AddResourceResult
    ResourceList<unsigned long long, render::Texture, eastl::map<unsigned long long, shared_ptr<render::Texture>>>::
        AddExistingResource<>(const unsigned long long& arg1, const shared_ptr<render::Texture>& texture) {
        shared_ptr<render::Texture>* texture_00;
        shared_ptr<render::Texture>* this_00;
        long lVar3;
        shared_ptr<render::Texture>* in_RCX;
        ResourceList<unsigned long long, render::Texture, eastl::map<unsigned long long, shared_ptr<render::Texture>>>
            RVar4;
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_48;

        scoped_lock<std::mutex> local_40(arg1);
        new (this) AddResourceResult();
        ReturnValue local_38 = ((arg1 + 8))->find(texture);
        local_48.end();
        if (local_38 == local_48 == '\0') {
            lVar3 = *local_38;
            if (!*in_RCX == (*((lVar3 + 8)))) {
                LogAssert("existingResource == it->second",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/ResourceList.h",
                          102, nullptr);
            }
            lVar3 = *local_38;
            (*((this + 8))) = (*((lVar3 + 8)));
            RVar4 = (ResourceList<unsigned long long, render::Texture,
                                  eastl::map<unsigned long long, shared_ptr<render::Texture>>>)0;
        } else {
            texture_00 = (shared_ptr<render::Texture>*)(*((this + 8))) = *in_RCX;
            this_00 = (shared_ptr<render::Texture>*)(*((arg1 + 8)))[texture];
            RVar4 = (ResourceList<unsigned long long, render::Texture,
                                  eastl::map<unsigned long long, shared_ptr<render::Texture>>>)1;
            *this_00 = *texture_00;
        }
        *this = RVar4;
        return this;
    }

    // 0x10087f0c0
    uint8_t* ResourceList<
        unsigned long long, render::TextureCube,
        eastl::map<unsigned long long, shared_ptr<render::TextureCube>>>::FindResource(const unsigned long long& arg1) {
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_38;

        if (*PTR_nullResource_100ee4a10 == '\0') {
            if (___cxa_guard_acquire(PTR_nullResource_100ee4a10) != 0) {
                new (PTR_nullResource_100ee9598) shared_ptr();
                ___cxa_atexit(PTR__shared_ptr_100ee5310, PTR_nullResource_100ee9598, 4294967296);
                ___cxa_guard_release(PTR_nullResource_100ee4a10);
            }
        }
        uint8_t* puVar4 = PTR_nullResource_100ee9598;
        long lVar3 = PTR_nullResource_100ee9598->end();
        if (lVar3 != 0) {
            LogAssert("nullResource.get() == nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/ResourceList.h", 151,
                      nullptr);
        }
        scoped_lock<std::mutex> local_30(*this);
        ReturnValue local_28 = ((this + 64))->find(arg1);
        local_38.end();
        if (local_28 != local_38 != '\0') {
            lVar3 = *local_28;
            puVar4 = (uint8_t*)(lVar3 + 8);
        }
        return puVar4;
    }

    // 0x10087f2e0
    ResourceList<unsigned long long, render::TextureCube,
                 eastl::map<unsigned long long, shared_ptr<render::TextureCube>>>::AddResourceResult
    ResourceList<unsigned long long, render::TextureCube,
                 eastl::map<unsigned long long, shared_ptr<render::TextureCube>>>::
        AddExistingResource<>(const unsigned long long& arg1, const shared_ptr<render::TextureCube>& textureCube) {
        shared_ptr<render::TextureCube>* textureCube_00;
        shared_ptr<render::TextureCube>* this_00;
        long lVar3;
        shared_ptr<render::TextureCube>* in_RCX;
        ResourceList<unsigned long long, render::TextureCube,
                     eastl::map<unsigned long long, shared_ptr<render::TextureCube>>>
            RVar4;
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_48;

        scoped_lock<std::mutex> local_40(arg1);
        new (this) ResourceList<unsigned long long, render::Texture,
                                eastl::map<unsigned long long, shared_ptr<render::Texture>>>::AddResourceResult();
        ReturnValue local_38 = ((arg1 + 8))->find(textureCube);
        local_48.end();
        if (local_38 == local_48 == '\0') {
            lVar3 = *local_38;
            if (!*in_RCX == (*((lVar3 + 8)))) {
                LogAssert("existingResource == it->second",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/ResourceList.h",
                          102, nullptr);
            }
            lVar3 = *local_38;
            (*((this + 8))) = (*((lVar3 + 8)));
            RVar4 = (ResourceList<unsigned long long, render::TextureCube,
                                  eastl::map<unsigned long long, shared_ptr<render::TextureCube>>>)0;
        } else {
            textureCube_00 = (shared_ptr<render::TextureCube>*)(*((this + 8))) = *in_RCX;
            this_00 = (shared_ptr<render::TextureCube>*)(*((arg1 + 8)))[textureCube];
            RVar4 = (ResourceList<unsigned long long, render::TextureCube,
                                  eastl::map<unsigned long long, shared_ptr<render::TextureCube>>>)1;
            *this_00 = *textureCube_00;
        }
        *this = RVar4;
        return this;
    }

    // 0x10087faa0
    uint8_t* ResourceList<unsigned long long, graphics::TextureData,
                          eastl::map<unsigned long long,
                                     shared_ptr<graphics::TextureData>>>::FindResource(const unsigned long long& arg1) {
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_38;

        if (*PTR_nullResource_100ee4a20 == '\0') {
            if (___cxa_guard_acquire(PTR_nullResource_100ee4a20) != 0) {
                new (PTR_nullResource_100ee95a8) shared_ptr();
                ___cxa_atexit(PTR__shared_ptr_100ee5348, PTR_nullResource_100ee95a8, 4294967296);
                ___cxa_guard_release(PTR_nullResource_100ee4a20);
            }
        }
        uint8_t* puVar4 = PTR_nullResource_100ee95a8;
        long lVar3 = PTR_nullResource_100ee95a8->end();
        if (lVar3 != 0) {
            LogAssert("nullResource.get() == nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/ResourceList.h", 151,
                      nullptr);
        }
        scoped_lock<std::mutex> local_30(*this);
        ReturnValue local_28 = ((this + 64))->find(arg1);
        local_38.end();
        if (local_28 != local_38 != '\0') {
            lVar3 = *local_28;
            puVar4 = (uint8_t*)(lVar3 + 8);
        }
        return puVar4;
    }

    // 0x10087fdb0
    ResourceList<unsigned long long, graphics::TextureData,
                 eastl::map<unsigned long long, shared_ptr<graphics::TextureData>>>::AddResourceResult
    ResourceList<unsigned long long, graphics::TextureData,
                 eastl::map<unsigned long long, shared_ptr<graphics::TextureData>>>::
        AddExistingResource<>(const unsigned long long& arg1, const shared_ptr<graphics::TextureData>& textureData) {
        shared_ptr<graphics::TextureData>* textureData_00;
        shared_ptr<graphics::TextureData>* this_00;
        long lVar3;
        shared_ptr<graphics::TextureData>* in_RCX;
        ResourceList<unsigned long long, graphics::TextureData,
                     eastl::map<unsigned long long, shared_ptr<graphics::TextureData>>>
            RVar4;
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_48;

        scoped_lock<std::mutex> local_40(arg1);
        new (this) ResourceList<unsigned long long, render::Texture,
                                eastl::map<unsigned long long, shared_ptr<render::Texture>>>::AddResourceResult();
        ReturnValue local_38 = ((arg1 + 8))->find(textureData);
        local_48.end();
        if (local_38 == local_48 == '\0') {
            lVar3 = *local_38;
            if (!*in_RCX == (*((lVar3 + 8)))) {
                LogAssert("existingResource == it->second",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/ResourceList.h",
                          102, nullptr);
            }
            lVar3 = *local_38;
            (*((this + 8))) = (*((lVar3 + 8)));
            RVar4 = (ResourceList<unsigned long long, graphics::TextureData,
                                  eastl::map<unsigned long long, shared_ptr<graphics::TextureData>>>)0;
        } else {
            textureData_00 = (shared_ptr<graphics::TextureData>*)(*((this + 8))) = *in_RCX;
            this_00 = (shared_ptr<graphics::TextureData>*)(*((arg1 + 8)))[textureData];
            RVar4 = (ResourceList<unsigned long long, graphics::TextureData,
                                  eastl::map<unsigned long long, shared_ptr<graphics::TextureData>>>)1;
            *this_00 = *textureData_00;
        }
        *this = RVar4;
        return this;
    }

    // 0x1008d2320
    uint64_t ResourceList<unsigned long, render::VertexShader,
                          eastl::vector_map<unsigned long, shared_ptr<render::VertexShader>>>::size() const {
        scoped_lock<std::mutex> local_20(*this);
        uint64_t uVar1 = ((this + 64))->size();
        return uVar1;
    }

    // 0x10098e540
    ResourceList<unsigned long long, render::Texture,
                 eastl::map<unsigned long long, shared_ptr<render::Texture>>>::ResourceList(unsigned int arg1)
        : std::mutex() {

        new ((this + 64)) eastl::map(local_20);
        ~AutoSingleton();
    }

    // 0x10098e5a0
    ResourceList<unsigned long long, render::Texture,
                 eastl::map<unsigned long long, shared_ptr<render::Texture>>>::~ResourceList() {
        ((this + 64))->~map();
    }

    // 0x10098e680
    ResourceList<unsigned long long, render::TextureCube,
                 eastl::map<unsigned long long, shared_ptr<render::TextureCube>>>::ResourceList(unsigned int arg1)
        : std::mutex() {

        new ((this + 64)) eastl::map(local_20);
        ~AutoSingleton();
    }

    // 0x10098e790
    ResourceList<unsigned long long, graphics::TextureData,
                 eastl::map<unsigned long long, shared_ptr<graphics::TextureData>>>::ResourceList(unsigned int arg1)
        : std::mutex() {

        new ((this + 64)) eastl::map(local_20);
        ~AutoSingleton();
    }

    // 0x100bc6e60
    void ResourceList<render::VAOManager::Key, render::VertexArrayObject,
                      eastl::fixed_map<render::VAOManager::Key, shared_ptr<render::VertexArrayObject>, 4096ul>>::
        CallOnElements(std::function<void(render::VAOManager::Key const&,
                                          shared_ptr<render::VertexArrayObject> const&)> const& callback) const {
        Key* key;
        long lVar1;
        uint64_t local_40;

        scoped_lock<std::mutex> local_38(*this);
        uint64_t local_48 = ((this + 64))->begin();
        while (true) {
            local_40 = ((this + 64))->end();
            if (local_48 != local_40 == '\0')
                break;
            key = (Key*)*local_48;
            lVar1 = *local_48;
            std::function<void(render::VAOManager::Key const&, shared_ptr<render::VertexArrayObject> const&)>::
            operator()(
                (function<void(render::VAOManager::Key const&, shared_ptr<render::VertexArrayObject> const&)>*)callback,
                key, (shared_ptr<render::VertexArrayObject>*)(lVar1 + 200));
            ++local_48;
        }
    }

    // 0x100bc70f0
    ResourceList<
        render::VAOManager::Key, render::VertexArrayObject,
        eastl::fixed_map<render::VAOManager::Key, shared_ptr<render::VertexArrayObject>, 4096ul>>::AddResourceResult
    ResourceList<render::VAOManager::Key, render::VertexArrayObject,
                 eastl::fixed_map<render::VAOManager::Key, shared_ptr<render::VertexArrayObject>, 4096ul>>::
        AddExistingResource<>(const render::VAOManager::Key& key,
                              const shared_ptr<render::VertexArrayObject>& vertexArrayObject) {
        shared_ptr<render::VertexArrayObject>* vertexArrayObject_00;
        shared_ptr<render::VertexArrayObject>* this_00;
        long lVar3;
        shared_ptr<render::VertexArrayObject>* in_RCX;
        ResourceList<render::VAOManager::Key, render::VertexArrayObject,
                     eastl::fixed_map<render::VAOManager::Key, shared_ptr<render::VertexArrayObject>, 4096ul>>
            RVar4;
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_48;

        scoped_lock<std::mutex> local_40(key);
        new (this) ResourceList<unsigned long long, render::Texture,
                                eastl::map<unsigned long long, shared_ptr<render::Texture>>>::AddResourceResult();
        auto local_38 = key.field_64.find(vertexArrayObject);
        local_48.end();
        if (local_38 == local_48 == '\0') {
            lVar3 = *local_38;
            if (!*in_RCX == (*((lVar3 + 200)))) {
                LogAssert("existingResource == it->second",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/ResourceList.h",
                          102, nullptr);
            }
            lVar3 = *local_38;
            (*((this + 8))) = (*((lVar3 + 200)));
            RVar4 = (ResourceList<
                     render::VAOManager::Key, render::VertexArrayObject,
                     eastl::fixed_map<render::VAOManager::Key, shared_ptr<render::VertexArrayObject>, 4096ul>>)0;
        } else {
            vertexArrayObject_00 = (shared_ptr<render::VertexArrayObject>*)(*((this + 8))) = *in_RCX;
            this_00 = &key.field_64[vertexArrayObject];
            RVar4 = (ResourceList<
                     render::VAOManager::Key, render::VertexArrayObject,
                     eastl::fixed_map<render::VAOManager::Key, shared_ptr<render::VertexArrayObject>, 4096ul>>)1;
            *this_00 = *vertexArrayObject_00;
        }
        *this = RVar4;
        return this;
    }

    // 0x100bc7490
    uint8_t* ResourceList<render::VAOManager::Key, render::VertexArrayObject,
                          eastl::fixed_map<render::VAOManager::Key, shared_ptr<render::VertexArrayObject>,
                                           4096ul>>::FindResource(const render::VAOManager::Key& key) {
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_38;

        if (*PTR_nullResource_100ee4a08 == '\0') {
            if (___cxa_guard_acquire(PTR_nullResource_100ee4a08) != 0) {
                new (PTR_nullResource_100ee9590) shared_ptr();
                ___cxa_atexit(PTR__shared_ptr_100ee5320, PTR_nullResource_100ee9590, 4294967296);
                ___cxa_guard_release(PTR_nullResource_100ee4a08);
            }
        }
        uint8_t* puVar4 = PTR_nullResource_100ee9590;
        long lVar3 = PTR_nullResource_100ee9590->end();
        if (lVar3 != 0) {
            LogAssert("nullResource.get() == nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/ResourceList.h", 151,
                      nullptr);
        }
        scoped_lock<std::mutex> local_30(*this);
        ReturnValue local_28 = ((this + 64))->find(key);
        local_38.end();
        if (local_28 != local_38 != '\0') {
            lVar3 = *local_28;
            puVar4 = (uint8_t*)(lVar3 + 200);
        }
        return puVar4;
    }

    // 0x100bc77c0
    void ResourceList<render::VAOManager::Key, render::VertexArrayObject,
                      eastl::fixed_map<render::VAOManager::Key, shared_ptr<render::VertexArrayObject>, 4096ul>>::
        GarbageCollect(std::function<bool(render::VAOManager::Key const&,
                                          shared_ptr<render::VertexArrayObject> const&)> const& callback1,
                       std::function<void(render::VAOManager::Key const&,
                                          shared_ptr<render::VertexArrayObject> const&)> const& callback2) {

        scoped_lock<std::mutex> local_28(*this);
        eastl::erase_if<
            render::VAOManager::Key, shared_ptr<render::VertexArrayObject>, eastl::less<render::VAOManager::Key>,
            eastl::fixed_node_allocator<248ul, 4096ul, 8ul, 0ul, true>,
            (std::function<bool(render::VAOManager::Key const&, shared_ptr<render::VertexArrayObject> const&)> const&)
                ->GarbageCollect(std::function<void(render::VAOManager::Key const&,
                                                    shared_ptr<render::VertexArrayObject> const&)> const&)::
                    _lambda(eastl::pair<render::VAOManager::Key const, shared_ptr<render::VertexArrayObject>> const&)
                        _1_>(
            (map<render::VAOManager::Key, shared_ptr<render::VertexArrayObject>, eastl::less<render::VAOManager::Key>,
                 eastl::fixed_node_allocator<248ul, _4096ul, _8ul, _0ul, true> _>*)(this + 64),
            (_lambda_eastl__pair<render::VAOManager::Key const, shared_ptr<render::VertexArrayObject> _> _const___1_*)
                callback1);
    }

    // 0x100bd1610
    ResourceList<
        render::VAOManager::Key, render::VertexArrayObject,
        eastl::fixed_map<render::VAOManager::Key, shared_ptr<render::VertexArrayObject>, 4096ul>>::~ResourceList() {
        ((this + 64))->~fixed_map();
    }

    // 0x100bd30c0
    ResourceList<render::VAOManager::Key, render::VertexArrayObject,
                 eastl::fixed_map<render::VAOManager::Key, shared_ptr<render::VertexArrayObject>,
                                  4096ul>>::ResourceList(unsigned int arg1)
        : std::mutex() {
        new ((this + 64)) eastl::fixed_map<render::VAOManager::Key, shared_ptr<render::VertexArrayObject>, 4096ul>();
        ~AutoSingleton();
    }

    // 0x100bd5e20
    unsigned long
    ResourceList<render::VAOManager::Key, render::VertexArrayObject,
                 eastl::fixed_map<render::VAOManager::Key, shared_ptr<render::VertexArrayObject>, 4096ul>>::
        GarbageCollect(
            std::function<bool(render::VAOManager::Key const&, shared_ptr<render::VertexArrayObject> const&)> const&,
            std::function<void(render::VAOManager::Key const&, shared_ptr<render::VertexArrayObject> const&)> const&)::{
        lambda(eastl::pair<render::VAOManager::Key const, shared_ptr<render::VertexArrayObject>> const&) #1
    }
    ::operator()(const eastl::pair<render::VAOManager::Key const, shared_ptr<render::VertexArrayObject>>& arg1) const {
        lambda(eastl::pair<render::VAOManager::Key const, shared_ptr<render::VertexArrayObject>> const&) #1
    }
    ::operator()(
        _lambda_eastl__pair<render::VAOManager::Key const, shared_ptr<render::VertexArrayObject>> const___1_* this,
        pair<render::VAOManager::Key const, shared_ptr<render::VertexArrayObject> _> arg1) {
        function* pfVar1;
        bool cVar2;
        unsigned long uVar3;

        pfVar1 = *(function**)this;
        cVar2 = std::function::operator_cast_to_bool(pfVar1);
        if (!cVar2) {
        LAB_100bd5e57:
            cVar2 = ((arg1 + 200))->unique();
            if (cVar2) {
                pfVar1 = *(function**)(this + 8);
                cVar2 = std::function::operator_cast_to_bool(pfVar1);
                uVar3 = (((uint64_t)((int64_t)((unsigned long)this >> 8)) << 8) | (uint8_t)1);
                if (cVar2) {
                    std::function<void(render::VAOManager::Key const&, shared_ptr<render::VertexArrayObject> const&)>::
                    operator()(
                        (function<void(render::VAOManager::Key const&, shared_ptr<render::VertexArrayObject> const&)>*)
                            pfVar1,
                        (Key*)arg1, (shared_ptr<render::VertexArrayObject>*)(arg1 + 200));
                }
                goto LAB_100bd5e91;
            }
        } else {
            cVar2 = std::function<bool(render::VAOManager::Key const&, shared_ptr<render::VertexArrayObject> const&)>::
            operator()(
                (function<bool(render::VAOManager::Key const&, shared_ptr<render::VertexArrayObject> const&)>*)pfVar1,
                (Key*)arg1, (shared_ptr<render::VertexArrayObject>*)(arg1 + 200));
            if (cVar2)
                goto LAB_100bd5e57;
        }
        uVar3 = 0;
    LAB_100bd5e91:
        return uVar3 & 4294967295;
    }

    // 0x100beb560
    ResourceList<unsigned long, render::ShaderProgram,
                 eastl::vector_map<unsigned long, shared_ptr<render::ShaderProgram>>>::AddResourceResult
    ResourceList<
        unsigned long, render::ShaderProgram,
        eastl::vector_map<unsigned long, shared_ptr<render::ShaderProgram>>>::AddResource<>(const unsigned long& arg1) {
        shared_ptr<render::ShaderProgram>* shaderProgram;
        shared_ptr<render::ShaderProgram>* this_00;
        unsigned long* in_RDX;
        ReturnValue local_48;

        scoped_lock<std::mutex> local_38(arg1);
        new (this) ResourceList<unsigned long long, render::Texture,
                                eastl::map<unsigned long long, shared_ptr<render::Texture>>>::AddResourceResult();
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_01 =
            (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(arg1 + 8);
        long lVar1 = eastl::vector_map<unsigned long long, shared_ptr<game::BuildModelMain>>::find(*this_01);
        long lVar2 = this_01->end();
        if (lVar1 == lVar2) {
            make_shared<render::ShaderProgram>(&local_48);
            shaderProgram = (shared_ptr<render::ShaderProgram>*)(*((this + 8))) = local_48;
            this_00 = (shared_ptr<render::ShaderProgram>*)(*this_01)[*in_RDX];
            *this_00 = *shaderProgram;
        } else {
            (*((this + 8))) = (*((lVar1 + 8)));
        }
        *this = (ResourceList<unsigned long, render::ShaderProgram,
                              eastl::vector_map<unsigned long, shared_ptr<render::ShaderProgram>>>)(lVar1 == lVar2);
        return this;
    }

    // 0x100beb690
    void ResourceList<
        unsigned long, render::ShaderProgram,
        eastl::vector_map<unsigned long, shared_ptr<render::ShaderProgram>>>::EraseResource(const unsigned long& arg1) {

        scoped_lock<std::mutex> local_20(*this);
        eastl::vector_map<unsigned long, shared_ptr<render::ShaderProgram>>::erase(*((this + 64)));
    }

    // 0x100beba90
    void ResourceList<unsigned long, render::ShaderProgram,
                      eastl::vector_map<unsigned long, shared_ptr<render::ShaderProgram>>>::
        ReleaseResource(const unsigned long& arg1, shared_ptr<render::ShaderProgram>& shaderProgram) {
        scoped_lock<std::mutex> local_30(*this);
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_01 =
            (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(this + 64);
        pair<unsigned long, shared_ptr<render::ShaderProgram> _>* arg1_00 =
            (pair<unsigned long, shared_ptr<render::ShaderProgram> _>*)
                eastl::vector_map<unsigned long long, shared_ptr<game::BuildModelMain>>::find(*this_01);
        auto ppVar3 = this_01->end();
        if (arg1_00 == ppVar3) {
            (logger::default_logger())
                ->Log(false, 2,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/ResourceList.h", 131,
                      "ResourceList::ReleaseResource: Unable to find resource");
        } else {
            if (!(*((arg1_00 + 8))) == shaderProgram) {
                LogAssert("cachedResource == resource",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/ResourceList.h",
                          121, nullptr);
            }
            shaderProgram.reset();
            if (((arg1_00 + 8))->unique() != '\0') {
                this_01->erase(arg1_00);
            }
        }
    }

    // 0x100bebc20
    void ResourceList<unsigned long, render::ShaderProgram,
                      eastl::vector_map<unsigned long, shared_ptr<render::ShaderProgram>>>::
        GarbageCollect(
            std::function<bool(unsigned long const&, shared_ptr<render::ShaderProgram> const&)> const& callback1,
            std::function<void(unsigned long const&, shared_ptr<render::ShaderProgram> const&)> const& callback2) {
        scoped_lock<std::mutex> local_30(*this);
        Layout* this_00 = (Layout*)(this + 64);
        auto ppVar1 = this_00->HeapBeginPtr();
        auto ppVar2 = this_00->end();
        ppVar1 = eastl::remove_if<
            eastl::pair<unsigned long, shared_ptr<render::ShaderProgram>>*,
            (std::function<bool(unsigned long const&, shared_ptr<render::ShaderProgram> const&)> const&)
                ->GarbageCollect(
                    std::function<void(unsigned long const&, shared_ptr<render::ShaderProgram> const&)> const&)::
                    _lambda(eastl::pair<unsigned long, shared_ptr<render::ShaderProgram>> const&) _1_>(
            ppVar1, ppVar2,
            (_lambda_eastl__pair<unsigned long, shared_ptr<render::ShaderProgram> _> _const___1_*)callback1);
        ppVar2 = (pair<unsigned long, shared_ptr<render::ShaderProgram> _>*)this_00->end();
        this_00->erase(ppVar1, ppVar2);
    }

    // 0x100bff2a0
    unsigned long ResourceList<unsigned long, render::ShaderProgram,
                               eastl::vector_map<unsigned long, shared_ptr<render::ShaderProgram>>>::
        GarbageCollect(std::function<bool(unsigned long const&, shared_ptr<render::ShaderProgram> const&)> const&,
                       std::function<void(unsigned long const&, shared_ptr<render::ShaderProgram> const&)> const&)::{
        lambda(eastl::pair<unsigned long, shared_ptr<render::ShaderProgram>> const&) #1
    }
    ::operator()(const eastl::pair<unsigned long, shared_ptr<render::ShaderProgram>>& arg1) const {
        unsigned long uVar3;

        function* pfVar1 = *(function**)this;
        bool cVar2 = std::function::operator_cast_to_bool(pfVar1);
        if (!cVar2) {
        LAB_100bff2d4:
            cVar2 = ((arg1 + 8))->unique();
            if (cVar2) {
                pfVar1 = *(function**)(this + 8);
                cVar2 = std::function::operator_cast_to_bool(pfVar1);
                uVar3 = (((uint64_t)((int64_t)((unsigned long)this >> 8)) << 8) | (uint8_t)1);
                if (cVar2) {
                    std::function<void(unsigned long const&, shared_ptr<render::ShaderProgram> const&)>::operator()(
                        (function<void(unsigned long const&, shared_ptr<render::ShaderProgram> const&)>*)pfVar1,
                        (unsigned long*)arg1, (shared_ptr<render::ShaderProgram>*)(arg1 + 8));
                }
                goto LAB_100bff30b;
            }
        } else {
            cVar2 = std::function<bool(unsigned long const&, shared_ptr<render::ShaderProgram> const&)>::operator()(
                (function<bool(unsigned long const&, shared_ptr<render::ShaderProgram> const&)>*)pfVar1,
                (unsigned long*)arg1, (shared_ptr<render::ShaderProgram>*)(arg1 + 8));
            if (cVar2)
                goto LAB_100bff2d4;
        }
        uVar3 = 0;
    LAB_100bff30b:
        return uVar3 & 4294967295;
    }

    // 0x100c03560
    ResourceList<unsigned long, render::VertexShader,
                 eastl::vector_map<unsigned long, shared_ptr<render::VertexShader>>>::AddResourceResult
    ResourceList<unsigned long, render::VertexShader,
                 eastl::vector_map<unsigned long, shared_ptr<render::VertexShader>>>::AddResource<>(const unsigned long&
                                                                                                        arg1) {
        shared_ptr<render::VertexShader>* vertexShader;
        shared_ptr<render::VertexShader>* this_00;
        unsigned long* in_RDX;
        ReturnValue local_48;

        scoped_lock<std::mutex> local_38(arg1);
        new (this) ResourceList<unsigned long long, render::Texture,
                                eastl::map<unsigned long long, shared_ptr<render::Texture>>>::AddResourceResult();
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_01 =
            (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(arg1 + 8);
        long lVar1 = eastl::vector_map<unsigned long long, shared_ptr<game::BuildModelMain>>::find(*this_01);
        long lVar2 = this_01->end();
        if (lVar1 == lVar2) {
            make_shared<render::VertexShader>(&local_48);
            vertexShader = (shared_ptr<render::VertexShader>*)(*((this + 8))) = local_48;
            this_00 = (shared_ptr<render::VertexShader>*)(*this_01)[*in_RDX];
            *this_00 = *vertexShader;
        } else {
            (*((this + 8))) = (*((lVar1 + 8)));
        }
        *this = (ResourceList<unsigned long, render::VertexShader,
                              eastl::vector_map<unsigned long, shared_ptr<render::VertexShader>>>)(lVar1 == lVar2);
        return this;
    }

    // 0x100c03670
    void
    ResourceList<unsigned long, render::VertexShader,
                 eastl::vector_map<unsigned long, shared_ptr<render::VertexShader>>>::EraseResource(const unsigned long&
                                                                                                        arg1) {

        scoped_lock<std::mutex> local_20(*this);
        eastl::vector_map<unsigned long, shared_ptr<render::VertexShader>>::erase(*((this + 64)));
    }

    // 0x100c041c0
    ResourceList<unsigned long, render::PixelShader,
                 eastl::vector_map<unsigned long, shared_ptr<render::PixelShader>>>::AddResourceResult
    ResourceList<unsigned long, render::PixelShader,
                 eastl::vector_map<unsigned long, shared_ptr<render::PixelShader>>>::AddResource<>(const unsigned long&
                                                                                                       arg1) {
        shared_ptr<render::PixelShader>* pixelShader;
        shared_ptr<render::PixelShader>* this_00;
        unsigned long* in_RDX;
        ReturnValue local_48;

        scoped_lock<std::mutex> local_38(arg1);
        new (this) ResourceList<unsigned long long, render::Texture,
                                eastl::map<unsigned long long, shared_ptr<render::Texture>>>::AddResourceResult();
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_01 =
            (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(arg1 + 8);
        long lVar1 = eastl::vector_map<unsigned long long, shared_ptr<game::BuildModelMain>>::find(*this_01);
        long lVar2 = this_01->end();
        if (lVar1 == lVar2) {
            make_shared<render::PixelShader>(&local_48);
            pixelShader = (shared_ptr<render::PixelShader>*)(*((this + 8))) = local_48;
            this_00 = (shared_ptr<render::PixelShader>*)(*this_01)[*in_RDX];
            *this_00 = *pixelShader;
        } else {
            (*((this + 8))) = (*((lVar1 + 8)));
        }
        *this = (ResourceList<unsigned long, render::PixelShader,
                              eastl::vector_map<unsigned long, shared_ptr<render::PixelShader>>>)(lVar1 == lVar2);
        return this;
    }

    // 0x100c042d0
    void
    ResourceList<unsigned long, render::PixelShader,
                 eastl::vector_map<unsigned long, shared_ptr<render::PixelShader>>>::EraseResource(const unsigned long&
                                                                                                       arg1) {

        scoped_lock<std::mutex> local_20(*this);
        eastl::vector_map<unsigned long, shared_ptr<render::PixelShader>>::erase(*((this + 64)));
    }

    // 0x100c04dc0
    ResourceList<unsigned long, render::ComputeShader,
                 eastl::vector_map<unsigned long, shared_ptr<render::ComputeShader>>>::AddResourceResult
    ResourceList<
        unsigned long, render::ComputeShader,
        eastl::vector_map<unsigned long, shared_ptr<render::ComputeShader>>>::AddResource<>(const unsigned long& arg1) {
        shared_ptr<render::ComputeShader>* computeShader;
        shared_ptr<render::ComputeShader>* this_00;
        unsigned long* in_RDX;
        ReturnValue local_48;

        scoped_lock<std::mutex> local_38(arg1);
        new (this) ResourceList<unsigned long long, render::Texture,
                                eastl::map<unsigned long long, shared_ptr<render::Texture>>>::AddResourceResult();
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_01 =
            (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(arg1 + 8);
        long lVar1 = eastl::vector_map<unsigned long long, shared_ptr<game::BuildModelMain>>::find(*this_01);
        long lVar2 = this_01->end();
        if (lVar1 == lVar2) {
            make_shared<render::ComputeShader>(&local_48);
            computeShader = (shared_ptr<render::ComputeShader>*)(*((this + 8))) = local_48;
            this_00 = (shared_ptr<render::ComputeShader>*)(*this_01)[*in_RDX];
            *this_00 = *computeShader;
        } else {
            (*((this + 8))) = (*((lVar1 + 8)));
        }
        *this = (ResourceList<unsigned long, render::ComputeShader,
                              eastl::vector_map<unsigned long, shared_ptr<render::ComputeShader>>>)(lVar1 == lVar2);
        return this;
    }

    // 0x100c04ed0
    void ResourceList<
        unsigned long, render::ComputeShader,
        eastl::vector_map<unsigned long, shared_ptr<render::ComputeShader>>>::EraseResource(const unsigned long& arg1) {

        scoped_lock<std::mutex> local_20(*this);
        eastl::vector_map<unsigned long, shared_ptr<render::ComputeShader>>::erase(*((this + 64)));
    }

    // 0x100c05bf0
    void ResourceList<unsigned long, render::ComputeShader,
                      eastl::vector_map<unsigned long, shared_ptr<render::ComputeShader>>>::
        ReleaseResource(const unsigned long& arg1, shared_ptr<render::ComputeShader>& computeShader) {
        scoped_lock<std::mutex> local_30(*this);
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_01 =
            (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(this + 64);
        pair<unsigned long, shared_ptr<render::ComputeShader> _>* arg1_00 =
            (pair<unsigned long, shared_ptr<render::ComputeShader> _>*)
                eastl::vector_map<unsigned long long, shared_ptr<game::BuildModelMain>>::find(*this_01);
        auto ppVar3 = this_01->end();
        if (arg1_00 == ppVar3) {
            (logger::default_logger())
                ->Log(false, 2,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/ResourceList.h", 131,
                      "ResourceList::ReleaseResource: Unable to find resource");
        } else {
            if (!(*((arg1_00 + 8))) == computeShader) {
                LogAssert("cachedResource == resource",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/ResourceList.h",
                          121, nullptr);
            }
            computeShader.reset();
            if (((arg1_00 + 8))->unique() != '\0') {
                this_01->erase(arg1_00);
            }
        }
    }

    // 0x100c05d30
    void ResourceList<unsigned long, render::PixelShader,
                      eastl::vector_map<unsigned long, shared_ptr<render::PixelShader>>>::
        ReleaseResource(const unsigned long& arg1, shared_ptr<render::PixelShader>& pixelShader) {
        scoped_lock<std::mutex> local_30(*this);
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_01 =
            (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(this + 64);
        pair<unsigned long, shared_ptr<render::PixelShader> _>* arg1_00 =
            (pair<unsigned long, shared_ptr<render::PixelShader> _>*)
                eastl::vector_map<unsigned long long, shared_ptr<game::BuildModelMain>>::find(*this_01);
        auto ppVar3 = this_01->end();
        if (arg1_00 == ppVar3) {
            (logger::default_logger())
                ->Log(false, 2,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/ResourceList.h", 131,
                      "ResourceList::ReleaseResource: Unable to find resource");
        } else {
            if (!(*((arg1_00 + 8))) == pixelShader) {
                LogAssert("cachedResource == resource",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/ResourceList.h",
                          121, nullptr);
            }
            pixelShader.reset();
            if (((arg1_00 + 8))->unique() != '\0') {
                this_01->erase(arg1_00);
            }
        }
    }

    // 0x100c05e70
    void ResourceList<unsigned long, render::VertexShader,
                      eastl::vector_map<unsigned long, shared_ptr<render::VertexShader>>>::
        ReleaseResource(const unsigned long& arg1, shared_ptr<render::VertexShader>& vertexShader) {
        scoped_lock<std::mutex> local_30(*this);
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_01 =
            (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(this + 64);
        pair<unsigned long, shared_ptr<render::VertexShader> _>* arg1_00 =
            (pair<unsigned long, shared_ptr<render::VertexShader> _>*)
                eastl::vector_map<unsigned long long, shared_ptr<game::BuildModelMain>>::find(*this_01);
        auto ppVar3 = this_01->end();
        if (arg1_00 == ppVar3) {
            (logger::default_logger())
                ->Log(false, 2,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/ResourceList.h", 131,
                      "ResourceList::ReleaseResource: Unable to find resource");
        } else {
            if (!(*((arg1_00 + 8))) == vertexShader) {
                LogAssert("cachedResource == resource",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/ResourceList.h",
                          121, nullptr);
            }
            vertexShader.reset();
            if (((arg1_00 + 8))->unique() != '\0') {
                this_01->erase(arg1_00);
            }
        }
    }

    // 0x100c37f50
    ResourceList<unsigned long, render::VertexShader,
                 eastl::vector_map<unsigned long, shared_ptr<render::VertexShader>>>::~ResourceList() {
        ((this + 64))->~vector_map();
    }

    // 0x100c37fe0
    ResourceList<unsigned long, render::VertexShader,
                 eastl::vector_map<unsigned long, shared_ptr<render::VertexShader>>>::ResourceList(unsigned int arg1)
        : std::mutex() {
        new ((this + 64)) eastl::vector_map<unsigned long, shared_ptr<render::VertexShader>>();
        SetCapacity(this, arg1);
    }

    // 0x100c38050
    void
    ResourceList<unsigned long, render::VertexShader,
                 eastl::vector_map<unsigned long, shared_ptr<render::VertexShader>>>::SetCapacity(unsigned int arg1) {

        scoped_lock<std::mutex> local_20(*this);
        ((this + 64))->reserve((unsigned long)arg1);
    }

    // 0x100c38480
    ResourceList<unsigned long, render::PixelShader,
                 eastl::vector_map<unsigned long, shared_ptr<render::PixelShader>>>::~ResourceList() {
        ((this + 64))->~vector_map();
    }

    // 0x100c38510
    ResourceList<unsigned long, render::PixelShader,
                 eastl::vector_map<unsigned long, shared_ptr<render::PixelShader>>>::ResourceList(unsigned int arg1)
        : std::mutex() {
        new ((this + 64)) eastl::vector_map<unsigned long, shared_ptr<render::PixelShader>>();
        SetCapacity(this, arg1);
    }

    // 0x100c38580
    void
    ResourceList<unsigned long, render::PixelShader,
                 eastl::vector_map<unsigned long, shared_ptr<render::PixelShader>>>::SetCapacity(unsigned int arg1) {

        scoped_lock<std::mutex> local_20(*this);
        ((this + 64))->reserve((unsigned long)arg1);
    }

    // 0x100c389b0
    ResourceList<unsigned long, render::ComputeShader,
                 eastl::vector_map<unsigned long, shared_ptr<render::ComputeShader>>>::~ResourceList() {
        ((this + 64))->~vector_map();
    }

    // 0x100c38a40
    ResourceList<unsigned long, render::ComputeShader,
                 eastl::vector_map<unsigned long, shared_ptr<render::ComputeShader>>>::ResourceList(unsigned int arg1)
        : std::mutex() {
        new ((this + 64)) eastl::vector_map<unsigned long, shared_ptr<render::ComputeShader>>();
        SetCapacity(this, arg1);
    }

    // 0x100c38ab0
    void
    ResourceList<unsigned long, render::ComputeShader,
                 eastl::vector_map<unsigned long, shared_ptr<render::ComputeShader>>>::SetCapacity(unsigned int arg1) {

        scoped_lock<std::mutex> local_20(*this);
        ((this + 64))->reserve((unsigned long)arg1);
    }

    // 0x100c38e60
    ResourceList<unsigned long, render::ShaderProgram,
                 eastl::vector_map<unsigned long, shared_ptr<render::ShaderProgram>>>::ResourceList(unsigned int arg1)
        : std::mutex() {
        new ((this + 64)) eastl::vector_map<unsigned long, shared_ptr<render::ShaderProgram>>();
        SetCapacity(this, arg1);
    }

    // 0x100c38ed0
    void
    ResourceList<unsigned long, render::ShaderProgram,
                 eastl::vector_map<unsigned long, shared_ptr<render::ShaderProgram>>>::SetCapacity(unsigned int arg1) {

        scoped_lock<std::mutex> local_20(*this);
        ((this + 64))->reserve((unsigned long)arg1);
    }

    // 0x100c391e0
    ResourceList<unsigned long, render::ShaderProgram,
                 eastl::vector_map<unsigned long, shared_ptr<render::ShaderProgram>>>::~ResourceList() {
        ((this + 64))->~vector_map();
    }

} // namespace jag

namespace jag::math {
    // 0x1001dacb0
    Matrix33T<float> Matrix33RotationYawPitchRoll<float>(float arg1, float arg2, float arg3) {
        Matrix33T<float>* in_RDI;

        float fVar1 = (float)::sin(arg3);
        float fVar2 = (float)::cos(arg3);
        float fVar3 = (float)::sin(arg2);
        float fVar4 = (float)::cos(arg2);
        float fVar5 = (float)::sin(arg1);
        float fVar6 = (float)::cos(arg1);
        new (in_RDI) Matrix33T<float>(fVar6 * fVar2 + fVar5 * fVar3 * fVar1, fVar4 * fVar1,
                                      fVar3 * fVar1 * fVar6 - fVar5 * fVar2, fVar5 * fVar3 * fVar2 - fVar6 * fVar1,
                                      fVar2 * fVar4, fVar1 * fVar5 + fVar3 * fVar2 * fVar6, fVar5 * fVar4, -fVar3,
                                      fVar6 * fVar4);
    }

    // 0x1001dade0
    Matrix44T<float>& Matrix44View<float>(Matrix44T<float>& matrix44, const Matrix33T<float>& matrix33,
                                          const Vector3T<float>& vector3) {
        uint64_t local_48[2];
        uint64_t local_38[2];

        Matrix33T<float> local_70;
        Matrix33Transpose<float>(&local_70, matrix33);
        local_70.Orthonormalise(local_70);
        local_38[0] = operator-(vector3);
        local_48[0] = local_38 * &local_70;
        matrix44.Set(&local_70, local_48);
        return matrix44;
    }

    // 0x1001dae80
    Matrix33T<float>& Matrix33Transpose<float>(Matrix33T<float>& matrix331, const Matrix33T<float>& matrix332) {
        Vector3T<float>* pVVar3 = &matrix331[0];
        float* pfVar4 = &matrix332[0];
        float fVar1 = *pfVar4;
        pfVar4 = &matrix332[1];
        float fVar2 = *pfVar4;
        pfVar4 = &matrix332[2];
        pVVar3->Set(fVar1, fVar2, *pfVar4);
        pVVar3 = &matrix331[1];
        long lVar5 = matrix332[0];
        fVar1 = *(float*)(lVar5 + 4);
        lVar5 = matrix332[1];
        fVar2 = *(float*)(lVar5 + 4);
        lVar5 = matrix332[2];
        pVVar3->Set(fVar1, fVar2, *(float*)(lVar5 + 4));
        pVVar3 = &matrix331[2];
        lVar5 = matrix332[0];
        fVar1 = *(float*)(lVar5 + 8);
        lVar5 = matrix332[1];
        fVar2 = *(float*)(lVar5 + 8);
        lVar5 = matrix332[2];
        pVVar3->Set(fVar1, fVar2, *(float*)(lVar5 + 8));
        return matrix331;
    }

    // 0x1001dafc0
    Matrix33T<float>* Matrix33T<float>::Orthonormalise(const Matrix33T<float>& matrix33) {
        ReturnValue local_30;

        auto pVVar2 = matrix33.qw();
        auto pVVar3 = qw();
        pVVar3->SetXYZ(*pVVar2);
        auto pRVar4 = qw();
        *pRVar4 = Vector3T<float>::Normalize();
        pVVar2 = (Vector3T<float>*)qw();
        auto pVVar5 = matrix33.second();
        local_30[0] = (ReturnValue)Vector3Cross<float>(pVVar2, pVVar5);
        pRVar4 = local_30 = Vector3T<float>::Normalize();
        pVVar3 = (Vector4T<float>*)SSOBeginPtr();
        pVVar3->SetXYZ(*pRVar4);
        pVVar2 = (Vector3T<float>*)SSOBeginPtr();
        pVVar5 = (Vector3T<float>*)qw();
        local_30[0] = (ReturnValue)Vector3Cross<float>(pVVar2, pVVar5);
        pVVar3 = (Vector4T<float>*)second();
        pVVar3->SetXYZ(local_30);
        pVVar2 = (Vector3T<float>*)second();
        if (pVVar2->IsNormal(1e-06) == '\0') {
            LogAssert("Look().IsNormal()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/matrix/Matrix33.inl",
                      249, nullptr);
        }
        return this;
    }

    // 0x1001db0d0
    Matrix33T<float>* Matrix33T<float>::operator[](unsigned int arg1) {
        if (3 < arg1) {
            LogAssert("iRow <= M",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/matrix/Matrix33.inl",
                      281, nullptr);
        }
        return this + (unsigned long)arg1 * 12;
    }

    // 0x1001db110
    QuaternionT<float>* Matrix33T<float>::Up() {
        return this + 12;
    }

    // 0x1001db120
    bool Vector3T<float>::IsNormal(float arg1) const {
        float fVar1 = (float)LengthSq(this);
        fVar1 = (float)::abs(fVar1 - 1.0);
        return fVar1 < arg1;
    }

    // 0x1001db1c0
    Matrix44T<float>& Matrix44PerspectiveFovLH<float>(Matrix44T<float>& matrix44, float arg2, float arg3, float arg4,
                                                      float arg5, MATRIX_PROJECTION_RANGE mATRIX_PROJECTION_RANGE) {
        float fVar1 = (float)tan(arg2 * 0.5);
        float fVar3 = 1.0;
        float fVar2 = arg5 / (arg5 - arg4);
        float arg11 = fVar2;
        if (mATRIX_PROJECTION_RANGE != 0) {
            arg11 = (arg5 + arg4) / (arg5 - arg4);
            fVar3 = 2.0;
        }
        matrix44.Set((1.0 / fVar1) / arg3, 0.0, 0.0, 0.0, 0.0, 1.0 / fVar1, 0.0, 0.0, 0.0, 0.0, arg11, 1.0, 0.0, 0.0,
                     fVar2 * -arg4 * fVar3, 0.0);
        return matrix44;
    }

} // namespace jag::math

// 0x1001dae60
void sin(float arg1) {
    _sinf();
}

// 0x1001dae70
void cos(float arg1) {
    _cosf();
}

// 0x1001db2b0
void sqrt(float arg1) {
    unsigned int in_XMM0_Db;
    uint32_t in_XMM0_Dc;
    uint32_t in_XMM0_Dd;
    uint8_t in_XMM1[16];
    uint8_t auVar1[16];

    auVar1._4_4_ = in_XMM0_Db;
    auVar1._0_4_ = arg1;
    auVar1._8_4_ = in_XMM0_Dc;
    auVar1._12_4_ = in_XMM0_Dd;
    auVar1 = rsqrtss(in_XMM1, auVar1);
    float fVar2 = arg1 * auVar1._0_4_;
    return (((uint64_t)(~(in_XMM0_Db & 2147483647) & in_XMM0_Db) << 32) |
            (uint32_t)(~-(unsigned int)(ABS(arg1) < 1.1754944e-38) &
                       (unsigned int)((fVar2 * auVar1._0_4_ - 3.0) * fVar2 * -0.5)));
}

// 0x1001db2f0
void tan(float arg1) {
    _tanf();
}
