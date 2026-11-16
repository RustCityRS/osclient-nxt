// libs/jtl/ResourceList.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.oldscape.osrendercore

namespace jag {
    template <
        typename...> // 8 instantiations, e.g. <render::VAOManager::Key, render::VertexArrayObject, eastl::fixed_map<render::VAOMana, <unsigned long long, graphics::TextureData, eastl::map<unsigned long long, shared_ptr<jag:, <unsigned long long, render::Texture, eastl::map<unsigned long long, shared_ptr<rende
    class ResourceList {
    public:
        void clear();
        void GarbageCollect(std::function<bool(unsigned long long const&, shared_ptr<render::Texture> const&)> const&,
                            std::function<void(unsigned long long const&, shared_ptr<render::Texture> const&)> const&);
        size() const;
        void
        GarbageCollect(std::function<bool(unsigned long long const&, shared_ptr<render::TextureCube> const&)> const&,
                       std::function<void(unsigned long long const&, shared_ptr<render::TextureCube> const&)> const&);
        void
        GarbageCollect(std::function<bool(unsigned long long const&, shared_ptr<graphics::TextureData> const&)> const&,
                       std::function<void(unsigned long long const&, shared_ptr<graphics::TextureData> const&)> const&);
        FindResource(unsigned long long const&);
        ResourceList<unsigned long long, render::Texture,
                     eastl::map<unsigned long long, shared_ptr<render::Texture>, eastl::less<unsigned long long>,
                                eastl::allocator>>::AddResourceResult
        AddExistingResource<>(unsigned long long const&, shared_ptr<render::Texture> const&);
        ResourceList<unsigned long long, render::TextureCube,
                     eastl::map<unsigned long long, shared_ptr<render::TextureCube>, eastl::less<unsigned long long>,
                                eastl::allocator>>::AddResourceResult
        AddExistingResource<>(unsigned long long const&, shared_ptr<render::TextureCube> const&);
        ResourceList<unsigned long long, graphics::TextureData,
                     eastl::map<unsigned long long, shared_ptr<graphics::TextureData>, eastl::less<unsigned long long>,
                                eastl::allocator>>::AddResourceResult
        AddExistingResource<>(unsigned long long const&, shared_ptr<graphics::TextureData> const&);
        ResourceList(unsigned int);
        ~ResourceList();
        void CallOnElements(std::function<void(render::VAOManager::Key const&,
                                               shared_ptr<render::VertexArrayObject> const&)> const&) const;
        ResourceList<render::VAOManager::Key, render::VertexArrayObject,
                     eastl::fixed_map<render::VAOManager::Key, shared_ptr<render::VertexArrayObject>, 4096ul, true,
                                      eastl::less<render::VAOManager::Key>, eastl::allocator>>::AddResourceResult
        AddExistingResource<>(render::VAOManager::Key const&, shared_ptr<render::VertexArrayObject> const&);
        FindResource(render::VAOManager::Key const&);
        void GarbageCollect(
            std::function<bool(render::VAOManager::Key const&, shared_ptr<render::VertexArrayObject> const&)> const&,
            std::function<void(render::VAOManager::Key const&, shared_ptr<render::VertexArrayObject> const&)> const&);
        ResourceList<unsigned long, render::ShaderProgram,
                     eastl::vector_map<unsigned long, shared_ptr<render::ShaderProgram>, eastl::less<unsigned long>,
                                       eastl::allocator,
                                       eastl::vector<eastl::pair<unsigned long, shared_ptr<render::ShaderProgram>>,
                                                     eastl::allocator>>>::AddResourceResult
        AddResource<>(unsigned long const&);
        void EraseResource(unsigned long const&);
        void ReleaseResource(unsigned long const&, shared_ptr<render::ShaderProgram>&);
        void GarbageCollect(std::function<bool(unsigned long const&, shared_ptr<render::ShaderProgram> const&)> const&,
                            std::function<void(unsigned long const&, shared_ptr<render::ShaderProgram> const&)> const&);
        ResourceList<unsigned long, render::VertexShader,
                     eastl::vector_map<unsigned long, shared_ptr<render::VertexShader>, eastl::less<unsigned long>,
                                       eastl::allocator,
                                       eastl::vector<eastl::pair<unsigned long, shared_ptr<render::VertexShader>>,
                                                     eastl::allocator>>>::AddResourceResult
        AddResource<>(unsigned long const&);
        ResourceList<unsigned long, render::PixelShader,
                     eastl::vector_map<unsigned long, shared_ptr<render::PixelShader>, eastl::less<unsigned long>,
                                       eastl::allocator,
                                       eastl::vector<eastl::pair<unsigned long, shared_ptr<render::PixelShader>>,
                                                     eastl::allocator>>>::AddResourceResult
        AddResource<>(unsigned long const&);
        ResourceList<unsigned long, render::ComputeShader,
                     eastl::vector_map<unsigned long, shared_ptr<render::ComputeShader>, eastl::less<unsigned long>,
                                       eastl::allocator,
                                       eastl::vector<eastl::pair<unsigned long, shared_ptr<render::ComputeShader>>,
                                                     eastl::allocator>>>::AddResourceResult
        AddResource<>(unsigned long const&);
        void ReleaseResource(unsigned long const&, shared_ptr<render::ComputeShader>&);
        void ReleaseResource(unsigned long const&, shared_ptr<render::PixelShader>&);
        void ReleaseResource(unsigned long const&, shared_ptr<render::VertexShader>&);
        void SetCapacity(unsigned int);
    };

    class UISceneSettings {
    public:
        UISceneSettings();
        UISceneSettings* operator=(UISceneSettings const&);
        UISceneSettings* operator=(UISceneSettings&&);
        UISceneSettings(UISceneSettings&&);

        // data members, from how the methods use this: 24 bytes
        undefined8 field_0; // offset 0
        undefined8 field_8; // offset 8
        char _unknown_16[8];
    };

    // 0x1001c07a0, 48 bytes, inline, placed by class header (inline)
    // UISceneSettings::operator=(UISceneSettings const&)
    /* UISceneSettings::TEMPNAMEPLACEHOLDERVALUE(UISceneSettings&&) */

    UISceneSettings* UISceneSettings::operator=(UISceneSettings* param_1) {
        undefined8 uVar1;

        uVar1 = param_1->field_8;
        field_0 = param_1->field_0;
        field_8 = uVar1;
        math::Rect<unsigned int>::operator=((Rect<unsigned int>*)&field_16, (Rect*)&param_1->field_16);
        return this;
    }

    // 0x1001dab90, 80 bytes, inline, placed by class name and debug map
    // ResourceList<unsigned long long, graphics::TextureData, eastl::map<unsigned long long, shared_ptr<graphics::TextureData>, eastl::less<unsigned long long>, eastl::allocator> >::clear()
    void jag::ResourceList<unsigned long long, graphics::TextureData,
                           eastl::map<unsigned long long, shared_ptr<graphics::TextureData>,
                                      eastl::less<unsigned long long>, eastl::allocator>>::
        clear(ResourceList<unsigned long long, graphics::TextureData,
                           eastl::map<unsigned long long, shared_ptr<graphics::TextureData>,
                                      eastl::less<unsigned long long>, eastl::allocator>>* this) {
        scoped_lock<std::mutex> local_18[8];

        std::scoped_lock<std::mutex>::scoped_lock(local_18, (mutex*)this);
        ((this + 64))->clear();
        std::scoped_lock<std::mutex>::~scoped_lock(local_18);
    }

    // 0x1001db170, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ViewTransformsShaderConsts::ViewTransformsShaderConsts(): jumps straight to the base-object constructor

    // 0x1001db180, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ViewTransformsShaderConsts::ViewTransformsShaderConsts()
    void ViewTransformsShaderConsts::ViewTransformsShaderConsts() {
        new (this) math::Vector3T<int>();
        new (&field_16) math::Matrix44T<float>();
        new (&field_80) math::Matrix44T<float>();
        new (&field_144) math::Matrix44T<float>();
    }

    // 0x1001db300, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // RenderableOutput::RenderableOutput(RenderableMode, unsigned int)
    void RenderableOutput::RenderableOutput(undefined1 param_2, undefined4 param_3) {
        field_0 = param_2;
        field_4 = param_3;
        field_8 = 0;
        field_12 = 0;
        new (field_16) UISceneSettings();
        new (field_48) callstack::Callstack();
    }

    // 0x1001db340, 48 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // RenderableOutput::RenderableOutput(RenderableOutput&&)
    void RenderableOutput::RenderableOutput(RenderableOutput* param_1) {
        undefined3 uVar1;
        undefined4 uVar2;
        int iVar3;
        int iVar4;

        uVar1 = param_1->field_1;
        uVar2 = param_1->field_4;
        iVar3 = param_1->field_8;
        iVar4 = param_1->field_12;
        field_0 = param_1->field_0;
        field_1 = uVar1;
        field_4 = uVar2;
        field_8 = iVar3;
        field_12 = iVar4;
        new (field_16, (UISceneSettings*)param_1->field_16) UISceneSettings();
        *(undefined4*)field_48 = *(undefined4*)param_1->field_48;
    }

    // 0x1001db370, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // UISceneSettings::UISceneSettings(UISceneSettings&&): jumps straight to the base-object constructor

    // 0x1001db380, 32 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // UISceneSettings::UISceneSettings(UISceneSettings&&)
    void UISceneSettings::UISceneSettings(UISceneSettings* param_1) {
        undefined8 uVar1;

        uVar1 = param_1->field_8;
        field_0 = param_1->field_0;
        field_8 = uVar1;
        new (&field_16, (Rect*)&param_1->field_16) math::Rect<unsigned int>();
    }

    // 0x1008775f0, 80 bytes, inline, placed by class name
    // ResourceList<unsigned long long, render::Texture, eastl::map<unsigned long long, shared_ptr<render::Texture>, eastl::less<unsigned long long>, eastl::allocator> >::clear()
    void jag::ResourceList<unsigned long long, render::Texture,
                           eastl::map<unsigned long long, shared_ptr<render::Texture>, eastl::less<unsigned long long>,
                                      eastl::allocator>>::
        clear(ResourceList<unsigned long long, render::Texture,
                           eastl::map<unsigned long long, shared_ptr<render::Texture>, eastl::less<unsigned long long>,
                                      eastl::allocator>>* this) {
        scoped_lock<std::mutex> local_18[8];

        std::scoped_lock<std::mutex>::scoped_lock(local_18, (mutex*)this);
        ((this + 64))->clear();
        std::scoped_lock<std::mutex>::~scoped_lock(local_18);
    }

    // 0x100877640, 80 bytes, inline, placed by class name
    // ResourceList<unsigned long long, render::TextureCube, eastl::map<unsigned long long, shared_ptr<render::TextureCube>, eastl::less<unsigned long long>, eastl::allocator> >::clear()
    void jag::ResourceList<unsigned long long, render::TextureCube,
                           eastl::map<unsigned long long, shared_ptr<render::TextureCube>,
                                      eastl::less<unsigned long long>, eastl::allocator>>::
        clear(ResourceList<unsigned long long, render::TextureCube,
                           eastl::map<unsigned long long, shared_ptr<render::TextureCube>,
                                      eastl::less<unsigned long long>, eastl::allocator>>* this) {
        scoped_lock<std::mutex> local_18[8];

        std::scoped_lock<std::mutex>::scoped_lock(local_18, (mutex*)this);
        ((this + 64))->clear();
        std::scoped_lock<std::mutex>::~scoped_lock(local_18);
    }

    // 0x1008776a0, 96 bytes, inline, placed by class name
    // ResourceList<unsigned long long, render::Texture, eastl::map<unsigned long long, shared_ptr<render::Texture>, eastl::less<unsigned long long>, eastl::allocator> >::GarbageCollect(std::function<bool (unsigned long long const&, shared_ptr<render::Texture> const&)> const&, std::function<void (unsigned long long const&, shared_ptr<render::Texture> const&)> const&)
    /* ResourceList<unsigned long long, render::Texture, eastl::map<unsigned long long,
   shared_ptr<render::Texture>, eastl::less<unsigned long long>, eastl::allocator>
   >::GarbageCollect(std::function<bool (unsigned long long const&,
   shared_ptr<render::Texture> const&)> const&, std::function<void (unsigned long long
   const&, shared_ptr<render::Texture> const&)> const&) */

    void jag::ResourceList<unsigned long long, render::Texture,
                           eastl::map<unsigned long long, shared_ptr<render::Texture>, eastl::less<unsigned long long>,
                                      eastl::allocator>>::
        GarbageCollect(ResourceList<unsigned long long, render::Texture,
                                    eastl::map<unsigned long long, shared_ptr<render::Texture>,
                                               eastl::less<unsigned long long>, eastl::allocator>>* this,
                       function* param_1, function* param_2) {
        scoped_lock<std::mutex> local_28[8];

        std::scoped_lock<std::mutex>::scoped_lock(local_28, (mutex*)this);
        eastl::erase_if<
            unsigned long long, shared_ptr<render::Texture>, eastl::less<unsigned long long>, eastl::allocator,
            (std::function<bool(unsigned long long const&, shared_ptr<render::Texture> const&)> const&)
                ->GarbageCollect(
                    std::function<void(unsigned long long const&, shared_ptr<render::Texture> const&)> const&)::
                    _lambda(eastl::pair<unsigned long long const, shared_ptr<render::Texture>> const&) _1_>(
            (eastl*)(this + 64), param_1, param_2);
        std::scoped_lock<std::mutex>::~scoped_lock(local_28);
    }

    // 0x100877740, 64 bytes, inline, placed by class name
    // ResourceList<unsigned long long, render::Texture, eastl::map<unsigned long long, shared_ptr<render::Texture>, eastl::less<unsigned long long>, eastl::allocator> >::size() const
    /* ResourceList<unsigned long long, render::TextureCube, eastl::map<unsigned long long,
   shared_ptr<render::TextureCube>, eastl::less<unsigned long long>, eastl::allocator>
   >::size() const */

    undefined8 jag::ResourceList<unsigned long long, render::TextureCube,
                                 eastl::map<unsigned long long, shared_ptr<render::TextureCube>,
                                            eastl::less<unsigned long long>, eastl::allocator>>::
        size(ResourceList<unsigned long long, render::TextureCube,
                          eastl::map<unsigned long long, shared_ptr<render::TextureCube>,
                                     eastl::less<unsigned long long>, eastl::allocator>>* this) {
        undefined8 uVar1;
        scoped_lock<std::mutex> local_20[8];

        std::scoped_lock<std::mutex>::scoped_lock(local_20, (mutex*)this);
        uVar1 = ((this + 64))->capacity();
        std::scoped_lock<std::mutex>::~scoped_lock(local_20);
        return uVar1;
    }

    // 0x100877850, 128 bytes, inline, placed by class name
    // ResourceList<unsigned long long, render::Texture, eastl::map<unsigned long long, shared_ptr<render::Texture>, eastl::less<unsigned long long>, eastl::allocator> >::GarbageCollect(std::function<bool (unsigned long long const&, shared_ptr<render::Texture> const&)> const&, std::function<void (unsigned long long const&, shared_ptr<render::Texture> const&)> const&)::{lambda(eastl::pair<unsigned long long const, shared_ptr<render::Texture> > const&)#1}::operator()(eastl::pair<unsigned long long const, shared_ptr<render::Texture> > const&) const
    /* ResourceList<unsigned long long, render::Texture, eastl::map<unsigned long long,
   shared_ptr<render::Texture>, eastl::less<unsigned long long>, eastl::allocator>
   >::GarbageCollect(std::function<bool (unsigned long long const&,
   shared_ptr<render::Texture> const&)> const&, std::function<void (unsigned long long
   const&, shared_ptr<render::Texture> const&)> const&)::{lambda(eastl::pair<unsigned long
   long const, shared_ptr<render::Texture> >
   const&)#1}::TEMPNAMEPLACEHOLDERVALUE(eastl::pair<unsigned long long const,
   shared_ptr<render::Texture> > const&) const */

    ulong jag::ResourceList<unsigned long long, render::Texture,
                            eastl::map<unsigned long long, shared_ptr<render::Texture>, eastl::less<unsigned long long>,
                                       eastl::allocator>>::
        GarbageCollect(std::function<bool(unsigned long long const&, shared_ptr<render::Texture> const&)> const&,
                       std::function<void(unsigned long long const&, shared_ptr<render::Texture> const&)> const&)::{
        lambda(eastl::pair<unsigned long long const, shared_ptr<render::Texture>> const&) #1
    }
    ::operator()(_lambda_eastl__pair<unsigned long long const, shared_ptr<render::Texture>> const___1_* this,
                 pair * param_1) {
        function* pfVar1;
        bool bVar2;
        char cVar3;
        ulong uVar4;

        pfVar1 = *(function**)this;
        bVar2 = std::function::operator_cast_to_bool(pfVar1);
        if (bVar2) {
            cVar3 = std::function<bool(unsigned long long const&, shared_ptr<render::Texture> const&)>::operator()(
                (ulonglong*)pfVar1, (shared_ptr*)param_1);
            if (cVar3 != '\0')
                goto LAB_100877884;
        } else {
        LAB_100877884:
            cVar3 = ((param_1 + 8))->unique();
            if (cVar3 != '\0') {
                pfVar1 = *(function**)(this + 8);
                bVar2 = std::function::operator_cast_to_bool(pfVar1);
                uVar4 = CONCAT71((int7)((ulong)this >> 8), 1);
                if (bVar2) {
                    std::function<void(unsigned long long const&, shared_ptr<render::Texture> const&)>::operator()(
                        (ulonglong*)pfVar1, (shared_ptr*)param_1);
                }
                goto LAB_1008778bb;
            }
        }
        uVar4 = 0;
    LAB_1008778bb:
        return uVar4 & 4294967295;
    }

    // 0x1008794d0, 96 bytes, inline, placed by class name
    // ResourceList<unsigned long long, render::TextureCube, eastl::map<unsigned long long, shared_ptr<render::TextureCube>, eastl::less<unsigned long long>, eastl::allocator> >::GarbageCollect(std::function<bool (unsigned long long const&, shared_ptr<render::TextureCube> const&)> const&, std::function<void (unsigned long long const&, shared_ptr<render::TextureCube> const&)> const&)
    /* ResourceList<unsigned long long, render::TextureCube, eastl::map<unsigned long long,
   shared_ptr<render::TextureCube>, eastl::less<unsigned long long>, eastl::allocator>
   >::GarbageCollect(std::function<bool (unsigned long long const&,
   shared_ptr<render::TextureCube> const&)> const&, std::function<void (unsigned long long
   const&, shared_ptr<render::TextureCube> const&)> const&) */

    void jag::ResourceList<unsigned long long, render::TextureCube,
                           eastl::map<unsigned long long, shared_ptr<render::TextureCube>,
                                      eastl::less<unsigned long long>, eastl::allocator>>::
        GarbageCollect(ResourceList<unsigned long long, render::TextureCube,
                                    eastl::map<unsigned long long, shared_ptr<render::TextureCube>,
                                               eastl::less<unsigned long long>, eastl::allocator>>* this,
                       function* param_1, function* param_2) {
        scoped_lock<std::mutex> local_28[8];

        std::scoped_lock<std::mutex>::scoped_lock(local_28, (mutex*)this);
        eastl::erase_if<
            unsigned long long, shared_ptr<render::TextureCube>, eastl::less<unsigned long long>, eastl::allocator,
            (std::function<bool(unsigned long long const&, shared_ptr<render::TextureCube> const&)> const&)
                ->GarbageCollect(
                    std::function<void(unsigned long long const&, shared_ptr<render::TextureCube> const&)> const&)::
                    _lambda(eastl::pair<unsigned long long const, shared_ptr<render::TextureCube>> const&) _1_>(
            (eastl*)(this + 64), param_1, param_2);
        std::scoped_lock<std::mutex>::~scoped_lock(local_28);
    }

    // 0x100879640, 128 bytes, inline, placed by class name
    // ResourceList<unsigned long long, render::TextureCube, eastl::map<unsigned long long, shared_ptr<render::TextureCube>, eastl::less<unsigned long long>, eastl::allocator> >::GarbageCollect(std::function<bool (unsigned long long const&, shared_ptr<render::TextureCube> const&)> const&, std::function<void (unsigned long long const&, shared_ptr<render::TextureCube> const&)> const&)::{lambda(eastl::pair<unsigned long long const, shared_ptr<render::TextureCube> > const&)#1}::operator()(eastl::pair<unsigned long long const, shared_ptr<render::TextureCube> > const&) const
    /* ResourceList<unsigned long long, render::TextureCube, eastl::map<unsigned long long,
   shared_ptr<render::TextureCube>, eastl::less<unsigned long long>, eastl::allocator>
   >::GarbageCollect(std::function<bool (unsigned long long const&,
   shared_ptr<render::TextureCube> const&)> const&, std::function<void (unsigned long long
   const&, shared_ptr<render::TextureCube> const&)> const&)::{lambda(eastl::pair<unsigned
   long long const, shared_ptr<render::TextureCube> >
   const&)#1}::TEMPNAMEPLACEHOLDERVALUE(eastl::pair<unsigned long long const,
   shared_ptr<render::TextureCube> > const&) const */

    ulong jag::ResourceList<unsigned long long, render::TextureCube,
                            eastl::map<unsigned long long, shared_ptr<render::TextureCube>,
                                       eastl::less<unsigned long long>, eastl::allocator>>::
        GarbageCollect(std::function<bool(unsigned long long const&, shared_ptr<render::TextureCube> const&)> const&,
                       std::function<void(unsigned long long const&, shared_ptr<render::TextureCube> const&)> const&)::{
        lambda(eastl::pair<unsigned long long const, shared_ptr<render::TextureCube>> const&) #1
    }
    ::operator()(_lambda_eastl__pair<unsigned long long const, shared_ptr<render::TextureCube>> const___1_* this,
                 pair * param_1) {
        function* pfVar1;
        bool bVar2;
        char cVar3;
        ulong uVar4;

        pfVar1 = *(function**)this;
        bVar2 = std::function::operator_cast_to_bool(pfVar1);
        if (bVar2) {
            cVar3 = std::function<bool(unsigned long long const&, shared_ptr<render::TextureCube> const&)>::operator()(
                (ulonglong*)pfVar1, (shared_ptr*)param_1);
            if (cVar3 != '\0')
                goto LAB_100879674;
        } else {
        LAB_100879674:
            cVar3 = ((param_1 + 8))->unique();
            if (cVar3 != '\0') {
                pfVar1 = *(function**)(this + 8);
                bVar2 = std::function::operator_cast_to_bool(pfVar1);
                uVar4 = CONCAT71((int7)((ulong)this >> 8), 1);
                if (bVar2) {
                    std::function<void(unsigned long long const&, shared_ptr<render::TextureCube> const&)>::operator()(
                        (ulonglong*)pfVar1, (shared_ptr*)param_1);
                }
                goto LAB_1008796ab;
            }
        }
        uVar4 = 0;
    LAB_1008796ab:
        return uVar4 & 4294967295;
    }

    // 0x10087b180, 96 bytes, inline, placed by class name
    // ResourceList<unsigned long long, graphics::TextureData, eastl::map<unsigned long long, shared_ptr<graphics::TextureData>, eastl::less<unsigned long long>, eastl::allocator> >::GarbageCollect(std::function<bool (unsigned long long const&, shared_ptr<graphics::TextureData> const&)> const&, std::function<void (unsigned long long const&, shared_ptr<graphics::TextureData> const&)> const&)
    /* ResourceList<unsigned long long, graphics::TextureData, eastl::map<unsigned long long,
   shared_ptr<graphics::TextureData>, eastl::less<unsigned long long>, eastl::allocator>
   >::GarbageCollect(std::function<bool (unsigned long long const&,
   shared_ptr<graphics::TextureData> const&)> const&, std::function<void (unsigned long
   long const&, shared_ptr<graphics::TextureData> const&)> const&) */

    void jag::ResourceList<unsigned long long, graphics::TextureData,
                           eastl::map<unsigned long long, shared_ptr<graphics::TextureData>,
                                      eastl::less<unsigned long long>, eastl::allocator>>::
        GarbageCollect(ResourceList<unsigned long long, graphics::TextureData,
                                    eastl::map<unsigned long long, shared_ptr<graphics::TextureData>,
                                               eastl::less<unsigned long long>, eastl::allocator>>* this,
                       function* param_1, function* param_2) {
        scoped_lock<std::mutex> local_28[8];

        std::scoped_lock<std::mutex>::scoped_lock(local_28, (mutex*)this);
        eastl::erase_if<
            unsigned long long, shared_ptr<graphics::TextureData>, eastl::less<unsigned long long>, eastl::allocator,
            (std::function<bool(unsigned long long const&, shared_ptr<graphics::TextureData> const&)> const&)
                ->GarbageCollect(
                    std::function<void(unsigned long long const&, shared_ptr<graphics::TextureData> const&)> const&)::
                    _lambda(eastl::pair<unsigned long long const, shared_ptr<graphics::TextureData>> const&) _1_>(
            (eastl*)(this + 64), param_1, param_2);
        std::scoped_lock<std::mutex>::~scoped_lock(local_28);
    }

    // 0x10087b2f0, 128 bytes, inline, placed by class name
    // ResourceList<unsigned long long, graphics::TextureData, eastl::map<unsigned long long, shared_ptr<graphics::TextureData>, eastl::less<unsigned long long>, eastl::allocator> >::GarbageCollect(std::function<bool (unsigned long long const&, shared_ptr<graphics::TextureData> const&)> const&, std::function<void (unsigned long long const&, shared_ptr<graphics::TextureData> const&)> const&)::{lambda(eastl::pair<unsigned long long const, shared_ptr<graphics::TextureData> > const&)#1}::operator()(eastl::pair<unsigned long long const, shared_ptr<graphics::TextureData> > const&) const
    /* ResourceList<unsigned long long, graphics::TextureData, eastl::map<unsigned long long,
   shared_ptr<graphics::TextureData>, eastl::less<unsigned long long>, eastl::allocator>
   >::GarbageCollect(std::function<bool (unsigned long long const&,
   shared_ptr<graphics::TextureData> const&)> const&, std::function<void (unsigned long
   long const&, shared_ptr<graphics::TextureData> const&)>
   const&)::{lambda(eastl::pair<unsigned long long const,
   shared_ptr<graphics::TextureData> >
   const&)#1}::TEMPNAMEPLACEHOLDERVALUE(eastl::pair<unsigned long long const,
   shared_ptr<graphics::TextureData> > const&) const */

    ulong jag::ResourceList<unsigned long long, graphics::TextureData,
                            eastl::map<unsigned long long, shared_ptr<graphics::TextureData>,
                                       eastl::less<unsigned long long>, eastl::allocator>>::
        GarbageCollect(
            std::function<bool(unsigned long long const&, shared_ptr<graphics::TextureData> const&)> const&,
            std::function<void(unsigned long long const&, shared_ptr<graphics::TextureData> const&)> const&)::{
        lambda(eastl::pair<unsigned long long const, shared_ptr<graphics::TextureData>> const&) #1
    }
    ::operator()(_lambda_eastl__pair<unsigned long long const, shared_ptr<graphics::TextureData>> const___1_* this,
                 pair * param_1)

    {
        function* pfVar1;
        bool bVar2;
        char cVar3;
        ulong uVar4;

        pfVar1 = *(function**)this;
        bVar2 = std::function::operator_cast_to_bool(pfVar1);
        if (bVar2) {
            cVar3 =
                std::function<bool(unsigned long long const&, shared_ptr<graphics::TextureData> const&)>::operator()(
                    (ulonglong*)pfVar1, (shared_ptr*)param_1);
            if (cVar3 != '\0')
                goto LAB_10087b324;
        } else {
        LAB_10087b324:
            cVar3 = ((param_1 + 8))->unique();
            if (cVar3 != '\0') {
                pfVar1 = *(function**)(this + 8);
                bVar2 = std::function::operator_cast_to_bool(pfVar1);
                uVar4 = CONCAT71((int7)((ulong)this >> 8), 1);
                if (bVar2) {
                    std::function<void(unsigned long long const&,
                                       shared_ptr<graphics::TextureData> const&)>::operator()((ulonglong*)pfVar1,
                                                                                              (shared_ptr*)param_1);
                }
                goto LAB_10087b35b;
            }
        }
        uVar4 = 0;
    LAB_10087b35b:
        return uVar4 & 4294967295;
    }

    // 0x10087e690, 320 bytes, inline, placed by class name
    // ResourceList<unsigned long long, render::Texture, eastl::map<unsigned long long, shared_ptr<render::Texture>, eastl::less<unsigned long long>, eastl::allocator> >::FindResource(unsigned long long const&)
    undefined* jag::ResourceList<unsigned long long, render::Texture,
                                 eastl::map<unsigned long long, shared_ptr<render::Texture>,
                                            eastl::less<unsigned long long>, eastl::allocator>>::
        FindResource(ResourceList<unsigned long long, render::Texture,
                                  eastl::map<unsigned long long, shared_ptr<render::Texture>,
                                             eastl::less<unsigned long long>, eastl::allocator>>* this,
                     ulonglong* param_1) {
        long lVar3;
        hashtable_iterator_base* extraout_RDX;
        undefined* puVar4;
        hashtable_iterator_base local_38[8];
        scoped_lock<std::mutex> local_30[8];
        eastl local_28[8];

        if (*PTR_nullResource_100ee4a18 == '\0') {
            if (___cxa_guard_acquire(PTR_nullResource_100ee4a18) != 0) {
                new (PTR_nullResource_100ee95a0) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_1);
                ___cxa_atexit(PTR__shared_ptr_100ee5328, PTR_nullResource_100ee95a0, 4294967296);
                ___cxa_guard_release(PTR_nullResource_100ee4a18);
            }
        }
        puVar4 = PTR_nullResource_100ee95a0;
        lVar3 = PTR_nullResource_100ee95a0->end();
        if (lVar3 != 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("nullResource.get() == nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/ResourceList.h", 151,
                      (char*)0);
        }
        std::scoped_lock<std::mutex>::scoped_lock(local_30, (mutex*)this);
        eastl::rbtree<unsigned long long, eastl::pair<unsigned long long const, shared_ptr<render::Texture>>,
                      eastl::less<unsigned long long>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned long long const, shared_ptr<render::Texture>>>, true,
                      true>::find((ulonglong*)local_28);
        eastl::rbtree<unsigned int,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::end();
        if (eastl::operator!=(local_28, local_38, extraout_RDX)) {
            lVar3 = eastl::rbtree_iterator<
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
            operator*(
                (rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)
                    local_28);
            puVar4 = (undefined*)(lVar3 + 8);
        }
        std::scoped_lock<std::mutex>::~scoped_lock(local_30);
        return puVar4;
    }

    // 0x10087e8d0, 288 bytes, inline, placed by class name
    // ResourceList<unsigned long long, render::Texture, eastl::map<unsigned long long, shared_ptr<render::Texture>, eastl::less<unsigned long long>, eastl::allocator> >::AddResourceResult ResourceList<unsigned long long, render::Texture, eastl::map<unsigned long long, shared_ptr<render::Texture>, eastl::less<unsigned long long>, eastl::allocator> >::AddExistingResource<>(unsigned long long const&, shared_ptr<render::Texture> const&)
    ResourceList<
        unsigned long long, render::Texture,
        eastl::map<unsigned long long, shared_ptr<render::Texture>, eastl::less<unsigned long long>, eastl::allocator>>*
    jag::ResourceList<unsigned long long, render::Texture,
                      eastl::map<unsigned long long, shared_ptr<render::Texture>, eastl::less<unsigned long long>,
                                 eastl::allocator>>::
        AddExistingResource<>(ResourceList<unsigned long long, render::Texture,
                                           eastl::map<unsigned long long, shared_ptr<render::Texture>,
                                                      eastl::less<unsigned long long>, eastl::allocator>>* this,
                              ulonglong* param_1, shared_ptr* param_2) {
        bool bVar1;
        shared_ptr* psVar2;
        shared_ptr<render::Texture>* this_00;
        long lVar3;
        shared_ptr* in_RCX;
        hashtable_iterator_base* extraout_RDX;
        ResourceList<unsigned long long, render::Texture,
                     eastl::map<unsigned long long, shared_ptr<render::Texture>, eastl::less<unsigned long long>,
                                eastl::allocator>>
            RVar4;
        undefined1 auVar5[16];
        hashtable_iterator_base local_48[8];
        scoped_lock<std::mutex> local_40[8];
        eastl local_38[8];

        std::scoped_lock<std::mutex>::scoped_lock(local_40, (mutex*)param_1);
        new (this) AddResourceResult();
        eastl::rbtree<unsigned long long, eastl::pair<unsigned long long const, shared_ptr<render::Texture>>,
                      eastl::less<unsigned long long>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned long long const, shared_ptr<render::Texture>>>, true,
                      true>::find((ulonglong*)local_38);
        eastl::rbtree<unsigned int,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::end();
        bVar1 = eastl::operator==(local_38, local_48, extraout_RDX);
        if (bVar1) {
            psVar2 =
                (shared_ptr*)shared_ptr<render::Texture>::operator=((shared_ptr<render::Texture>*)(this + 8), in_RCX);
            this_00 = (shared_ptr<render::Texture>*)eastl::map<
                unsigned long long, shared_ptr<render::Texture>, eastl::less<unsigned long long>,
                eastl::allocator>::operator[]((map<unsigned long long, shared_ptr<render::Texture>,
                                                   eastl::less<unsigned long long>, eastl::allocator>*)(param_1 + 8),
                                              (ulonglong*)param_2);
            RVar4 = (ResourceList<unsigned long long, render::Texture,
                                  eastl::map<unsigned long long, shared_ptr<render::Texture>,
                                             eastl::less<unsigned long long>, eastl::allocator>>)1;
            shared_ptr<render::Texture>::operator=(this_00, psVar2);
        } else {
            auVar5 = eastl::rbtree_iterator<
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
            operator*(
                (rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)
                    local_38);
            bVar1 = operator==((jag*)in_RCX, (shared_ptr*)(auVar5._0_8_ + 8), auVar5._8_8_);
            if (!bVar1) {
                /* WARNING: Subroutine does not return */
                LogAssert("existingResource == it->second",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/ResourceList.h",
                          102, (char*)0);
            }
            lVar3 = eastl::rbtree_iterator<
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
            operator*(
                (rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)
                    local_38);
            shared_ptr<render::Texture>::operator=((shared_ptr<render::Texture>*)(this + 8), (shared_ptr*)(lVar3 + 8));
            RVar4 = (ResourceList<unsigned long long, render::Texture,
                                  eastl::map<unsigned long long, shared_ptr<render::Texture>,
                                             eastl::less<unsigned long long>, eastl::allocator>>)0;
        }
        *this = RVar4;
        std::scoped_lock<std::mutex>::~scoped_lock(local_40);
        return this;
    }

    // 0x10087f0c0, 320 bytes, inline, placed by class name
    // ResourceList<unsigned long long, render::TextureCube, eastl::map<unsigned long long, shared_ptr<render::TextureCube>, eastl::less<unsigned long long>, eastl::allocator> >::FindResource(unsigned long long const&)
    undefined* jag::ResourceList<unsigned long long, render::TextureCube,
                                 eastl::map<unsigned long long, shared_ptr<render::TextureCube>,
                                            eastl::less<unsigned long long>, eastl::allocator>>::
        FindResource(ResourceList<unsigned long long, render::TextureCube,
                                  eastl::map<unsigned long long, shared_ptr<render::TextureCube>,
                                             eastl::less<unsigned long long>, eastl::allocator>>* this,
                     ulonglong* param_1) {
        long lVar3;
        hashtable_iterator_base* extraout_RDX;
        undefined* puVar4;
        hashtable_iterator_base local_38[8];
        scoped_lock<std::mutex> local_30[8];
        eastl local_28[8];

        if (*PTR_nullResource_100ee4a10 == '\0') {
            if (___cxa_guard_acquire(PTR_nullResource_100ee4a10) != 0) {
                new (PTR_nullResource_100ee9598) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_1);
                ___cxa_atexit(PTR__shared_ptr_100ee5310, PTR_nullResource_100ee9598, 4294967296);
                ___cxa_guard_release(PTR_nullResource_100ee4a10);
            }
        }
        puVar4 = PTR_nullResource_100ee9598;
        lVar3 = PTR_nullResource_100ee9598->end();
        if (lVar3 != 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("nullResource.get() == nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/ResourceList.h", 151,
                      (char*)0);
        }
        std::scoped_lock<std::mutex>::scoped_lock(local_30, (mutex*)this);
        eastl::rbtree<unsigned long long, eastl::pair<unsigned long long const, shared_ptr<render::TextureCube>>,
                      eastl::less<unsigned long long>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned long long const, shared_ptr<render::TextureCube>>>, true,
                      true>::find((ulonglong*)local_28);
        eastl::rbtree<unsigned int,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::end();
        if (eastl::operator!=(local_28, local_38, extraout_RDX)) {
            lVar3 = eastl::rbtree_iterator<
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
            operator*(
                (rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)
                    local_28);
            puVar4 = (undefined*)(lVar3 + 8);
        }
        std::scoped_lock<std::mutex>::~scoped_lock(local_30);
        return puVar4;
    }

    // 0x10087f2e0, 288 bytes, inline, placed by class name
    // ResourceList<unsigned long long, render::TextureCube, eastl::map<unsigned long long, shared_ptr<render::TextureCube>, eastl::less<unsigned long long>, eastl::allocator> >::AddResourceResult ResourceList<unsigned long long, render::TextureCube, eastl::map<unsigned long long, shared_ptr<render::TextureCube>, eastl::less<unsigned long long>, eastl::allocator> >::AddExistingResource<>(unsigned long long const&, shared_ptr<render::TextureCube> const&)
    ResourceList<unsigned long long, render::TextureCube,
                 eastl::map<unsigned long long, shared_ptr<render::TextureCube>, eastl::less<unsigned long long>,
                            eastl::allocator>>*
    jag::ResourceList<unsigned long long, render::TextureCube,
                      eastl::map<unsigned long long, shared_ptr<render::TextureCube>, eastl::less<unsigned long long>,
                                 eastl::allocator>>::
        AddExistingResource<>(ResourceList<unsigned long long, render::TextureCube,
                                           eastl::map<unsigned long long, shared_ptr<render::TextureCube>,
                                                      eastl::less<unsigned long long>, eastl::allocator>>* this,
                              ulonglong* param_1, shared_ptr* param_2) {
        bool bVar1;
        shared_ptr* psVar2;
        shared_ptr<render::TextureCube>* this_00;
        long lVar3;
        shared_ptr* in_RCX;
        hashtable_iterator_base* extraout_RDX;
        ResourceList<unsigned long long, render::TextureCube,
                     eastl::map<unsigned long long, shared_ptr<render::TextureCube>, eastl::less<unsigned long long>,
                                eastl::allocator>>
            RVar4;
        undefined1 auVar5[16];
        hashtable_iterator_base local_48[8];
        scoped_lock<std::mutex> local_40[8];
        eastl local_38[8];

        std::scoped_lock<std::mutex>::scoped_lock(local_40, (mutex*)param_1);
        new (this) ResourceList<unsigned long long, render::Texture,
                                eastl::map<unsigned long long, shared_ptr<render::Texture>,
                                           eastl::less<unsigned long long>, eastl::allocator>>::AddResourceResult();
        eastl::rbtree<unsigned long long, eastl::pair<unsigned long long const, shared_ptr<render::TextureCube>>,
                      eastl::less<unsigned long long>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned long long const, shared_ptr<render::TextureCube>>>, true,
                      true>::find((ulonglong*)local_38);
        eastl::rbtree<unsigned int,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::end();
        bVar1 = eastl::operator==(local_38, local_48, extraout_RDX);
        if (bVar1) {
            psVar2 = (shared_ptr*)shared_ptr<render::TextureCube>::operator=(
                (shared_ptr<render::TextureCube>*)(this + 8), in_RCX);
            this_00 = (shared_ptr<render::TextureCube>*)eastl::map<
                unsigned long long, shared_ptr<render::TextureCube>, eastl::less<unsigned long long>,
                eastl::allocator>::operator[]((map<unsigned long long, shared_ptr<render::TextureCube>,
                                                   eastl::less<unsigned long long>, eastl::allocator>*)(param_1 + 8),
                                              (ulonglong*)param_2);
            RVar4 = (ResourceList<unsigned long long, render::TextureCube,
                                  eastl::map<unsigned long long, shared_ptr<render::TextureCube>,
                                             eastl::less<unsigned long long>, eastl::allocator>>)1;
            shared_ptr<render::TextureCube>::operator=(this_00, psVar2);
        } else {
            auVar5 = eastl::rbtree_iterator<
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
            operator*(
                (rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)
                    local_38);
            bVar1 = operator==((jag*)in_RCX, (shared_ptr*)(auVar5._0_8_ + 8), auVar5._8_8_);
            if (!bVar1) {
                /* WARNING: Subroutine does not return */
                LogAssert("existingResource == it->second",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/ResourceList.h",
                          102, (char*)0);
            }
            lVar3 = eastl::rbtree_iterator<
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
            operator*(
                (rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)
                    local_38);
            shared_ptr<render::TextureCube>::operator=((shared_ptr<render::TextureCube>*)(this + 8),
                                                       (shared_ptr*)(lVar3 + 8));
            RVar4 = (ResourceList<unsigned long long, render::TextureCube,
                                  eastl::map<unsigned long long, shared_ptr<render::TextureCube>,
                                             eastl::less<unsigned long long>, eastl::allocator>>)0;
        }
        *this = RVar4;
        std::scoped_lock<std::mutex>::~scoped_lock(local_40);
        return this;
    }

    // 0x10087faa0, 320 bytes, inline, placed by class name
    // ResourceList<unsigned long long, graphics::TextureData, eastl::map<unsigned long long, shared_ptr<graphics::TextureData>, eastl::less<unsigned long long>, eastl::allocator> >::FindResource(unsigned long long const&)
    undefined* jag::ResourceList<unsigned long long, graphics::TextureData,
                                 eastl::map<unsigned long long, shared_ptr<graphics::TextureData>,
                                            eastl::less<unsigned long long>, eastl::allocator>>::
        FindResource(ResourceList<unsigned long long, graphics::TextureData,
                                  eastl::map<unsigned long long, shared_ptr<graphics::TextureData>,
                                             eastl::less<unsigned long long>, eastl::allocator>>* this,
                     ulonglong* param_1) {
        long lVar3;
        hashtable_iterator_base* extraout_RDX;
        undefined* puVar4;
        hashtable_iterator_base local_38[8];
        scoped_lock<std::mutex> local_30[8];
        eastl local_28[8];

        if (*PTR_nullResource_100ee4a20 == '\0') {
            if (___cxa_guard_acquire(PTR_nullResource_100ee4a20) != 0) {
                new (PTR_nullResource_100ee95a8) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_1);
                ___cxa_atexit(PTR__shared_ptr_100ee5348, PTR_nullResource_100ee95a8, 4294967296);
                ___cxa_guard_release(PTR_nullResource_100ee4a20);
            }
        }
        puVar4 = PTR_nullResource_100ee95a8;
        lVar3 = PTR_nullResource_100ee95a8->end();
        if (lVar3 != 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("nullResource.get() == nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/ResourceList.h", 151,
                      (char*)0);
        }
        std::scoped_lock<std::mutex>::scoped_lock(local_30, (mutex*)this);
        eastl::rbtree<unsigned long long, eastl::pair<unsigned long long const, shared_ptr<graphics::TextureData>>,
                      eastl::less<unsigned long long>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned long long const, shared_ptr<graphics::TextureData>>>, true,
                      true>::find((ulonglong*)local_28);
        eastl::rbtree<unsigned int,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::end();
        if (eastl::operator!=(local_28, local_38, extraout_RDX)) {
            lVar3 = eastl::rbtree_iterator<
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
            operator*(
                (rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)
                    local_28);
            puVar4 = (undefined*)(lVar3 + 8);
        }
        std::scoped_lock<std::mutex>::~scoped_lock(local_30);
        return puVar4;
    }

    // 0x10087fdb0, 288 bytes, inline, placed by class name
    // ResourceList<unsigned long long, graphics::TextureData, eastl::map<unsigned long long, shared_ptr<graphics::TextureData>, eastl::less<unsigned long long>, eastl::allocator> >::AddResourceResult ResourceList<unsigned long long, graphics::TextureData, eastl::map<unsigned long long, shared_ptr<graphics::TextureData>, eastl::less<unsigned long long>, eastl::allocator> >::AddExistingResource<>(unsigned long long const&, shared_ptr<graphics::TextureData> const&)
    ResourceList<unsigned long long, graphics::TextureData,
                 eastl::map<unsigned long long, shared_ptr<graphics::TextureData>, eastl::less<unsigned long long>,
                            eastl::allocator>>*
    jag::ResourceList<unsigned long long, graphics::TextureData,
                      eastl::map<unsigned long long, shared_ptr<graphics::TextureData>, eastl::less<unsigned long long>,
                                 eastl::allocator>>::
        AddExistingResource<>(ResourceList<unsigned long long, graphics::TextureData,
                                           eastl::map<unsigned long long, shared_ptr<graphics::TextureData>,
                                                      eastl::less<unsigned long long>, eastl::allocator>>* this,
                              ulonglong* param_1, shared_ptr* param_2) {
        bool bVar1;
        shared_ptr* psVar2;
        shared_ptr<graphics::TextureData>* this_00;
        long lVar3;
        shared_ptr* in_RCX;
        hashtable_iterator_base* extraout_RDX;
        ResourceList<unsigned long long, graphics::TextureData,
                     eastl::map<unsigned long long, shared_ptr<graphics::TextureData>, eastl::less<unsigned long long>,
                                eastl::allocator>>
            RVar4;
        undefined1 auVar5[16];
        hashtable_iterator_base local_48[8];
        scoped_lock<std::mutex> local_40[8];
        eastl local_38[8];

        std::scoped_lock<std::mutex>::scoped_lock(local_40, (mutex*)param_1);
        new (this) ResourceList<unsigned long long, render::Texture,
                                eastl::map<unsigned long long, shared_ptr<render::Texture>,
                                           eastl::less<unsigned long long>, eastl::allocator>>::AddResourceResult();
        eastl::rbtree<unsigned long long, eastl::pair<unsigned long long const, shared_ptr<graphics::TextureData>>,
                      eastl::less<unsigned long long>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned long long const, shared_ptr<graphics::TextureData>>>, true,
                      true>::find((ulonglong*)local_38);
        eastl::rbtree<unsigned int,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::end();
        bVar1 = eastl::operator==(local_38, local_48, extraout_RDX);
        if (bVar1) {
            psVar2 = (shared_ptr*)shared_ptr<graphics::TextureData>::operator=(
                (shared_ptr<graphics::TextureData>*)(this + 8), in_RCX);
            this_00 = (shared_ptr<graphics::TextureData>*)eastl::map<
                unsigned long long, shared_ptr<graphics::TextureData>, eastl::less<unsigned long long>,
                eastl::allocator>::operator[]((map<unsigned long long, shared_ptr<graphics::TextureData>,
                                                   eastl::less<unsigned long long>, eastl::allocator>*)(param_1 + 8),
                                              (ulonglong*)param_2);
            RVar4 = (ResourceList<unsigned long long, graphics::TextureData,
                                  eastl::map<unsigned long long, shared_ptr<graphics::TextureData>,
                                             eastl::less<unsigned long long>, eastl::allocator>>)1;
            shared_ptr<graphics::TextureData>::operator=(this_00, psVar2);
        } else {
            auVar5 = eastl::rbtree_iterator<
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
            operator*(
                (rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)
                    local_38);
            bVar1 = operator==((jag*)in_RCX, (shared_ptr*)(auVar5._0_8_ + 8), auVar5._8_8_);
            if (!bVar1) {
                /* WARNING: Subroutine does not return */
                LogAssert("existingResource == it->second",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/ResourceList.h",
                          102, (char*)0);
            }
            lVar3 = eastl::rbtree_iterator<
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
            operator*(
                (rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)
                    local_38);
            shared_ptr<graphics::TextureData>::operator=((shared_ptr<graphics::TextureData>*)(this + 8),
                                                         (shared_ptr*)(lVar3 + 8));
            RVar4 = (ResourceList<unsigned long long, graphics::TextureData,
                                  eastl::map<unsigned long long, shared_ptr<graphics::TextureData>,
                                             eastl::less<unsigned long long>, eastl::allocator>>)0;
        }
        *this = RVar4;
        std::scoped_lock<std::mutex>::~scoped_lock(local_40);
        return this;
    }

    // 0x1008d2320, 64 bytes, inline, placed by class name
    // ResourceList<unsigned long, render::VertexShader, eastl::vector_map<unsigned long, shared_ptr<render::VertexShader>, eastl::less<unsigned long>, eastl::allocator, eastl::vector<eastl::pair<unsigned long, shared_ptr<render::VertexShader> >, eastl::allocator> > >::size() const
    /* ResourceList<unsigned long, render::PixelShader, eastl::vector_map<unsigned long,
   shared_ptr<render::PixelShader>, eastl::less<unsigned long>, eastl::allocator,
   eastl::vector<eastl::pair<unsigned long, shared_ptr<render::PixelShader> >,
   eastl::allocator> > >::size() const */

    undefined8 jag::ResourceList<
        unsigned long, render::PixelShader,
        eastl::vector_map<
            unsigned long, shared_ptr<render::PixelShader>, eastl::less<unsigned long>, eastl::allocator,
            eastl::vector<eastl::pair<unsigned long, shared_ptr<render::PixelShader>>, eastl::allocator>>>::
        size(ResourceList<
             unsigned long, render::PixelShader,
             eastl::vector_map<
                 unsigned long, shared_ptr<render::PixelShader>, eastl::less<unsigned long>, eastl::allocator,
                 eastl::vector<eastl::pair<unsigned long, shared_ptr<render::PixelShader>>, eastl::allocator>>>* this) {
        undefined8 uVar1;
        scoped_lock<std::mutex> local_20[8];

        std::scoped_lock<std::mutex>::scoped_lock(local_20, (mutex*)this);
        uVar1 = ((this + 64))->size();
        std::scoped_lock<std::mutex>::~scoped_lock(local_20);
        return uVar1;
    }

    // 0x10098e520, 16 bytes, complete-object constructor, inline, placed by class name
    // ResourceList<unsigned long long, render::Texture, eastl::map<unsigned long long, shared_ptr<render::Texture>, eastl::less<unsigned long long>, eastl::allocator> >::ResourceList(unsigned int): jumps straight to the base-object constructor

    // 0x10098e530, 16 bytes, complete-object destructor, inline, placed by class name
    // ResourceList<unsigned long long, render::Texture, eastl::map<unsigned long long, shared_ptr<render::Texture>, eastl::less<unsigned long long>, eastl::allocator> >::~ResourceList(): jumps straight to the base-object destructor

    // 0x10098e540, 96 bytes, base-object constructor, inline, placed by class name
    // ResourceList<unsigned long long, render::Texture, eastl::map<unsigned long long, shared_ptr<render::Texture>, eastl::less<unsigned long long>, eastl::allocator> >::ResourceList(unsigned int)
    void jag::ResourceList<unsigned long long, render::Texture,
                           eastl::map<unsigned long long, shared_ptr<render::Texture>, eastl::less<unsigned long long>,
                                      eastl::allocator>>::
        ResourceList(ResourceList<unsigned long long, render::Texture,
                                  eastl::map<unsigned long long, shared_ptr<render::Texture>,
                                             eastl::less<unsigned long long>, eastl::allocator>>* this,
                     uint param_1) {
        allocator local_20[8];

        new (this) std::mutex();
        eastl::allocator::allocator(local_20, "EASTL map");
        eastl::map<eastl::string, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                   eastl::less<eastl::string>, eastl::allocator>::map((allocator*)(this + 64));
        ~AutoSingleton(param_1);
    }

    // 0x10098e5a0, 48 bytes, base-object destructor, inline, placed by class name
    // ResourceList<unsigned long long, render::Texture, eastl::map<unsigned long long, shared_ptr<render::Texture>, eastl::less<unsigned long long>, eastl::allocator> >::~ResourceList()
    /* ResourceList<unsigned long long, render::TextureCube, eastl::map<unsigned long long,
   shared_ptr<render::TextureCube>, eastl::less<unsigned long long>, eastl::allocator>
   >::~ResourceList() */

    void jag::ResourceList<unsigned long long, render::TextureCube,
                           eastl::map<unsigned long long, shared_ptr<render::TextureCube>,
                                      eastl::less<unsigned long long>, eastl::allocator>>::
        ~ResourceList(ResourceList<unsigned long long, render::TextureCube,
                                   eastl::map<unsigned long long, shared_ptr<render::TextureCube>,
                                              eastl::less<unsigned long long>, eastl::allocator>>* this) {
        ((this + 64))->~map();
        ~mutex();
    }

    // 0x10098e670, 16 bytes, complete-object constructor, inline, placed by class name
    // ResourceList<unsigned long long, render::TextureCube, eastl::map<unsigned long long, shared_ptr<render::TextureCube>, eastl::less<unsigned long long>, eastl::allocator> >::ResourceList(unsigned int): jumps straight to the base-object constructor

    // 0x10098e680, 96 bytes, base-object constructor, inline, placed by class name
    // ResourceList<unsigned long long, render::TextureCube, eastl::map<unsigned long long, shared_ptr<render::TextureCube>, eastl::less<unsigned long long>, eastl::allocator> >::ResourceList(unsigned int)
    void jag::ResourceList<unsigned long long, render::TextureCube,
                           eastl::map<unsigned long long, shared_ptr<render::TextureCube>,
                                      eastl::less<unsigned long long>, eastl::allocator>>::
        ResourceList(ResourceList<unsigned long long, render::TextureCube,
                                  eastl::map<unsigned long long, shared_ptr<render::TextureCube>,
                                             eastl::less<unsigned long long>, eastl::allocator>>* this,
                     uint param_1) {
        allocator local_20[8];

        new (this) std::mutex();
        eastl::allocator::allocator(local_20, "EASTL map");
        eastl::map<eastl::string, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                   eastl::less<eastl::string>, eastl::allocator>::map((allocator*)(this + 64));
        ~AutoSingleton(param_1);
    }

    // 0x10098e780, 16 bytes, complete-object constructor, inline, placed by class name
    // ResourceList<unsigned long long, graphics::TextureData, eastl::map<unsigned long long, shared_ptr<graphics::TextureData>, eastl::less<unsigned long long>, eastl::allocator> >::ResourceList(unsigned int): jumps straight to the base-object constructor

    // 0x10098e790, 96 bytes, base-object constructor, inline, placed by class name
    // ResourceList<unsigned long long, graphics::TextureData, eastl::map<unsigned long long, shared_ptr<graphics::TextureData>, eastl::less<unsigned long long>, eastl::allocator> >::ResourceList(unsigned int)
    void jag::ResourceList<unsigned long long, graphics::TextureData,
                           eastl::map<unsigned long long, shared_ptr<graphics::TextureData>,
                                      eastl::less<unsigned long long>, eastl::allocator>>::
        ResourceList(ResourceList<unsigned long long, graphics::TextureData,
                                  eastl::map<unsigned long long, shared_ptr<graphics::TextureData>,
                                             eastl::less<unsigned long long>, eastl::allocator>>* this,
                     uint param_1) {
        allocator local_20[8];

        new (this) std::mutex();
        eastl::allocator::allocator(local_20, "EASTL map");
        eastl::map<eastl::string, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                   eastl::less<eastl::string>, eastl::allocator>::map((allocator*)(this + 64));
        ~AutoSingleton(param_1);
    }

    // 0x100bc6ca0, 16 bytes, complete-object constructor, inline, placed by class name
    // ResourceList<render::VAOManager::Key, render::VertexArrayObject, eastl::fixed_map<render::VAOManager::Key, shared_ptr<render::VertexArrayObject>, 4096ul, true, eastl::less<render::VAOManager::Key>, eastl::allocator> >::ResourceList(unsigned int): jumps straight to the base-object constructor

    // 0x100bc6d10, 16 bytes, complete-object destructor, inline, placed by class name
    // ResourceList<render::VAOManager::Key, render::VertexArrayObject, eastl::fixed_map<render::VAOManager::Key, shared_ptr<render::VertexArrayObject>, 4096ul, true, eastl::less<render::VAOManager::Key>, eastl::allocator> >::~ResourceList(): jumps straight to the base-object destructor

    // 0x100bc6e60, 192 bytes, inline, placed by class name
    // ResourceList<render::VAOManager::Key, render::VertexArrayObject, eastl::fixed_map<render::VAOManager::Key, shared_ptr<render::VertexArrayObject>, 4096ul, true, eastl::less<render::VAOManager::Key>, eastl::allocator> >::CallOnElements(std::function<void (render::VAOManager::Key const&, shared_ptr<render::VertexArrayObject> const&)> const&) const
    /* ResourceList<render::VAOManager::Key, render::VertexArrayObject,
   eastl::fixed_map<render::VAOManager::Key, shared_ptr<render::VertexArrayObject>,
   4096ul, true, eastl::less<render::VAOManager::Key>, eastl::allocator>
   >::CallOnElements(std::function<void (render::VAOManager::Key const&,
   shared_ptr<render::VertexArrayObject> const&)> const&) const */

    void jag::ResourceList<render::VAOManager::Key, render::VertexArrayObject,
                           eastl::fixed_map<render::VAOManager::Key, shared_ptr<render::VertexArrayObject>, 4096ul,
                                            true, eastl::less<render::VAOManager::Key>, eastl::allocator>>::
        CallOnElements(
            ResourceList<render::VAOManager::Key, render::VertexArrayObject,
                         eastl::fixed_map<render::VAOManager::Key, shared_ptr<render::VertexArrayObject>, 4096ul, true,
                                          eastl::less<render::VAOManager::Key>, eastl::allocator>>* this,
            function* param_1) {
        shared_ptr* psVar1;
        hashtable_iterator_base* extraout_RDX;
        undefined8 local_48;
        undefined8 local_40;
        scoped_lock<std::mutex> local_38[8];

        std::scoped_lock<std::mutex>::scoped_lock(local_38, (mutex*)this);
        local_48 = eastl::rbtree<eastl::string, eastl::pair<eastl::stringconst, bool>, eastl::less<eastl::string>,
                                 eastl::allocator, eastl::use_first<eastl::pair<eastl::stringconst, bool>>, true,
                                 true>::begin();
        while (true) {
            local_40 = eastl::rbtree<eastl::string, eastl::pair<eastl::stringconst, bool>, eastl::less<eastl::string>,
                                     eastl::allocator, eastl::use_first<eastl::pair<eastl::stringconst, bool>>, true,
                                     true>::end();
            if (!eastl::operator!=((eastl*)&local_48, (hashtable_iterator_base*)&local_40, extraout_RDX))
                break;
            psVar1 = (shared_ptr*)eastl::rbtree_iterator<
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
            operator*((rbtree_iterator<
                       eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                       eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                       eastl::pair<unsigned int const,
                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)&local_48);
            eastl::rbtree_iterator<
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
            operator*((rbtree_iterator<
                       eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                       eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                       eastl::pair<unsigned int const,
                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)&local_48);
            std::function<void(render::VAOManager::Key_const&,
                               shared_ptr<render::VertexArrayObject> const&)>::operator()((Key*)param_1, psVar1);
            eastl::rbtree_iterator<
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
            operator++(
                (rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const,
                                eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)&local_48);
        }
        std::scoped_lock<std::mutex>::~scoped_lock(local_38);
    }

    // 0x100bc70f0, 288 bytes, inline, placed by class name
    // ResourceList<render::VAOManager::Key, render::VertexArrayObject, eastl::fixed_map<render::VAOManager::Key, shared_ptr<render::VertexArrayObject>, 4096ul, true, eastl::less<render::VAOManager::Key>, eastl::allocator> >::AddResourceResult ResourceList<render::VAOManager::Key, render::VertexArrayObject, eastl::fixed_map<render::VAOManager::Key, shared_ptr<render::VertexArrayObject>, 4096ul, true, eastl::less<render::VAOManager::Key>, eastl::allocator> >::AddExistingResource<>(render::VAOManager::Key const&, shared_ptr<render::VertexArrayObject> const&)
    ResourceList<render::VAOManager::Key, render::VertexArrayObject,
                 eastl::fixed_map<render::VAOManager::Key, shared_ptr<render::VertexArrayObject>, 4096ul, true,
                                  eastl::less<render::VAOManager::Key>, eastl::allocator>>*
    jag::ResourceList<render::VAOManager::Key, render::VertexArrayObject,
                      eastl::fixed_map<render::VAOManager::Key, shared_ptr<render::VertexArrayObject>, 4096ul, true,
                                       eastl::less<render::VAOManager::Key>, eastl::allocator>>::
        AddExistingResource<>(
            ResourceList<render::VAOManager::Key, render::VertexArrayObject,
                         eastl::fixed_map<render::VAOManager::Key, shared_ptr<render::VertexArrayObject>, 4096ul, true,
                                          eastl::less<render::VAOManager::Key>, eastl::allocator>>* this,
            Key* param_1, shared_ptr* param_2) {
        bool bVar1;
        shared_ptr* psVar2;
        shared_ptr<render::VertexArrayObject>* this_00;
        long lVar3;
        shared_ptr* in_RCX;
        hashtable_iterator_base* extraout_RDX;
        ResourceList<render::VAOManager::Key, render::VertexArrayObject,
                     eastl::fixed_map<render::VAOManager::Key, shared_ptr<render::VertexArrayObject>, 4096ul, true,
                                      eastl::less<render::VAOManager::Key>, eastl::allocator>>
            RVar4;
        undefined1 auVar5[16];
        hashtable_iterator_base local_48[8];
        scoped_lock<std::mutex> local_40[8];
        eastl local_38[8];

        std::scoped_lock<std::mutex>::scoped_lock(local_40, (mutex*)param_1);
        new (this) ResourceList<unsigned long long, render::Texture,
                                eastl::map<unsigned long long, shared_ptr<render::Texture>,
                                           eastl::less<unsigned long long>, eastl::allocator>>::AddResourceResult();
        eastl::rbtree<
            render::VAOManager::Key, eastl::pair<render::VAOManager::Key_const, shared_ptr<render::VertexArrayObject>>,
            eastl::less<render::VAOManager::Key>,
            eastl::fixed_node_allocator<248ul, 4096ul, 8ul, 0ul, true, eastl::allocator>,
            eastl::use_first<eastl::pair<render::VAOManager::Key_const, shared_ptr<render::VertexArrayObject>>>, true,
            true>::find((Key*)local_38);
        eastl::rbtree<unsigned int,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::end();
        bVar1 = eastl::operator==(local_38, local_48, extraout_RDX);
        if (bVar1) {
            psVar2 = (shared_ptr*)shared_ptr<render::VertexArrayObject>::operator=(
                (shared_ptr<render::VertexArrayObject>*)(this + 8), in_RCX);
            this_00 = (shared_ptr<render::VertexArrayObject>*)eastl::map<
                render::VAOManager::Key, shared_ptr<render::VertexArrayObject>, eastl::less<render::VAOManager::Key>,
                eastl::fixed_node_allocator<248ul, 4096ul, 8ul, 0ul, true, eastl::allocator>>::
            operator[](
                (map<render::VAOManager::Key, shared_ptr<render::VertexArrayObject>,
                     eastl::less<render::VAOManager::Key>,
                     eastl::fixed_node_allocator<248ul, 4096ul, 8ul, 0ul, true, eastl::allocator>>*)&param_1->field_64,
                (Key*)param_2);
            RVar4 =
                (ResourceList<render::VAOManager::Key, render::VertexArrayObject,
                              eastl::fixed_map<render::VAOManager::Key, shared_ptr<render::VertexArrayObject>, 4096ul,
                                               true, eastl::less<render::VAOManager::Key>, eastl::allocator>>)1;
            shared_ptr<render::VertexArrayObject>::operator=(this_00, psVar2);
        } else {
            auVar5 = eastl::rbtree_iterator<
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
            operator*(
                (rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)
                    local_38);
            bVar1 = operator==((jag*)in_RCX, (shared_ptr*)(auVar5._0_8_ + 200), auVar5._8_8_);
            if (!bVar1) {
                /* WARNING: Subroutine does not return */
                LogAssert("existingResource == it->second",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/ResourceList.h",
                          102, (char*)0);
            }
            lVar3 = eastl::rbtree_iterator<
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
            operator*(
                (rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)
                    local_38);
            shared_ptr<render::VertexArrayObject>::operator=((shared_ptr<render::VertexArrayObject>*)(this + 8),
                                                             (shared_ptr*)(lVar3 + 200));
            RVar4 =
                (ResourceList<render::VAOManager::Key, render::VertexArrayObject,
                              eastl::fixed_map<render::VAOManager::Key, shared_ptr<render::VertexArrayObject>, 4096ul,
                                               true, eastl::less<render::VAOManager::Key>, eastl::allocator>>)0;
        }
        *this = RVar4;
        std::scoped_lock<std::mutex>::~scoped_lock(local_40);
        return this;
    }

    // 0x100bc7490, 320 bytes, inline, placed by class name
    // ResourceList<render::VAOManager::Key, render::VertexArrayObject, eastl::fixed_map<render::VAOManager::Key, shared_ptr<render::VertexArrayObject>, 4096ul, true, eastl::less<render::VAOManager::Key>, eastl::allocator> >::FindResource(render::VAOManager::Key const&)
    undefined*
    jag::ResourceList<render::VAOManager::Key, render::VertexArrayObject,
                      eastl::fixed_map<render::VAOManager::Key, shared_ptr<render::VertexArrayObject>, 4096ul, true,
                                       eastl::less<render::VAOManager::Key>, eastl::allocator>>::
        FindResource(
            ResourceList<render::VAOManager::Key, render::VertexArrayObject,
                         eastl::fixed_map<render::VAOManager::Key, shared_ptr<render::VertexArrayObject>, 4096ul, true,
                                          eastl::less<render::VAOManager::Key>, eastl::allocator>>* this,
            Key* param_1) {
        long lVar3;
        hashtable_iterator_base* extraout_RDX;
        undefined* puVar4;
        hashtable_iterator_base local_38[8];
        scoped_lock<std::mutex> local_30[8];
        eastl local_28[8];

        if (*PTR_nullResource_100ee4a08 == '\0') {
            if (___cxa_guard_acquire(PTR_nullResource_100ee4a08) != 0) {
                new (PTR_nullResource_100ee9590) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_1);
                ___cxa_atexit(PTR__shared_ptr_100ee5320, PTR_nullResource_100ee9590, 4294967296);
                ___cxa_guard_release(PTR_nullResource_100ee4a08);
            }
        }
        puVar4 = PTR_nullResource_100ee9590;
        lVar3 = PTR_nullResource_100ee9590->end();
        if (lVar3 != 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("nullResource.get() == nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/ResourceList.h", 151,
                      (char*)0);
        }
        std::scoped_lock<std::mutex>::scoped_lock(local_30, (mutex*)this);
        eastl::rbtree<
            render::VAOManager::Key, eastl::pair<render::VAOManager::Key_const, shared_ptr<render::VertexArrayObject>>,
            eastl::less<render::VAOManager::Key>,
            eastl::fixed_node_allocator<248ul, 4096ul, 8ul, 0ul, true, eastl::allocator>,
            eastl::use_first<eastl::pair<render::VAOManager::Key_const, shared_ptr<render::VertexArrayObject>>>, true,
            true>::find((Key*)local_28);
        eastl::rbtree<unsigned int,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::end();
        if (eastl::operator!=(local_28, local_38, extraout_RDX)) {
            lVar3 = eastl::rbtree_iterator<
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
            operator*(
                (rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)
                    local_28);
            puVar4 = (undefined*)(lVar3 + 200);
        }
        std::scoped_lock<std::mutex>::~scoped_lock(local_30);
        return puVar4;
    }

    // 0x100bc77c0, 96 bytes, inline, placed by class name
    // ResourceList<render::VAOManager::Key, render::VertexArrayObject, eastl::fixed_map<render::VAOManager::Key, shared_ptr<render::VertexArrayObject>, 4096ul, true, eastl::less<render::VAOManager::Key>, eastl::allocator> >::GarbageCollect(std::function<bool (render::VAOManager::Key const&, shared_ptr<render::VertexArrayObject> const&)> const&, std::function<void (render::VAOManager::Key const&, shared_ptr<render::VertexArrayObject> const&)> const&)
    /* ResourceList<render::VAOManager::Key, render::VertexArrayObject,
   eastl::fixed_map<render::VAOManager::Key, shared_ptr<render::VertexArrayObject>,
   4096ul, true, eastl::less<render::VAOManager::Key>, eastl::allocator>
   >::GarbageCollect(std::function<bool (render::VAOManager::Key const&,
   shared_ptr<render::VertexArrayObject> const&)> const&, std::function<void
   (render::VAOManager::Key const&, shared_ptr<render::VertexArrayObject> const&)>
   const&) */

    void jag::ResourceList<render::VAOManager::Key, render::VertexArrayObject,
                           eastl::fixed_map<render::VAOManager::Key, shared_ptr<render::VertexArrayObject>, 4096ul,
                                            true, eastl::less<render::VAOManager::Key>, eastl::allocator>>::
        GarbageCollect(
            ResourceList<render::VAOManager::Key, render::VertexArrayObject,
                         eastl::fixed_map<render::VAOManager::Key, shared_ptr<render::VertexArrayObject>, 4096ul, true,
                                          eastl::less<render::VAOManager::Key>, eastl::allocator>>* this,
            function* param_1, function* param_2) {
        scoped_lock<std::mutex> local_28[8];

        std::scoped_lock<std::mutex>::scoped_lock(local_28, (mutex*)this);
        eastl::erase_if<
            render::VAOManager::Key, shared_ptr<render::VertexArrayObject>, eastl::less<render::VAOManager::Key>,
            eastl::fixed_node_allocator<248ul, 4096ul, 8ul, 0ul, true, eastl::allocator>,
            (std::function<bool(render::VAOManager::Key_const&, shared_ptr<render::VertexArrayObject> const&)> const&)
                ->GarbageCollect(std::function<void(render::VAOManager::Key_const&,
                                                    shared_ptr<render::VertexArrayObject> const&)> const&)::
                    _lambda(eastl::pair<render::VAOManager::Key_const, shared_ptr<render::VertexArrayObject>> const&)
                        _1_>((eastl*)(this + 64), param_1, param_2);
        std::scoped_lock<std::mutex>::~scoped_lock(local_28);
    }

    // 0x100bd1610, 48 bytes, base-object destructor, inline, placed by class name
    // ResourceList<render::VAOManager::Key, render::VertexArrayObject, eastl::fixed_map<render::VAOManager::Key, shared_ptr<render::VertexArrayObject>, 4096ul, true, eastl::less<render::VAOManager::Key>, eastl::allocator> >::~ResourceList()
    void jag::ResourceList<render::VAOManager::Key, render::VertexArrayObject,
                           eastl::fixed_map<render::VAOManager::Key, shared_ptr<render::VertexArrayObject>, 4096ul,
                                            true, eastl::less<render::VAOManager::Key>, eastl::allocator>>::
        ~ResourceList(
            ResourceList<render::VAOManager::Key, render::VertexArrayObject,
                         eastl::fixed_map<render::VAOManager::Key, shared_ptr<render::VertexArrayObject>, 4096ul, true,
                                          eastl::less<render::VAOManager::Key>, eastl::allocator>>* this) {
        ((this + 64))->~fixed_map();
        ~mutex();
    }

    // 0x100bd30c0, 64 bytes, base-object constructor, inline, placed by class name
    // ResourceList<render::VAOManager::Key, render::VertexArrayObject, eastl::fixed_map<render::VAOManager::Key, shared_ptr<render::VertexArrayObject>, 4096ul, true, eastl::less<render::VAOManager::Key>, eastl::allocator> >::ResourceList(unsigned int)
    void jag::ResourceList<render::VAOManager::Key, render::VertexArrayObject,
                           eastl::fixed_map<render::VAOManager::Key, shared_ptr<render::VertexArrayObject>, 4096ul,
                                            true, eastl::less<render::VAOManager::Key>, eastl::allocator>>::
        ResourceList(
            ResourceList<render::VAOManager::Key, render::VertexArrayObject,
                         eastl::fixed_map<render::VAOManager::Key, shared_ptr<render::VertexArrayObject>, 4096ul, true,
                                          eastl::less<render::VAOManager::Key>, eastl::allocator>>* this,
            uint param_1) {
        new (this) std::mutex();
        new ((this + 64)) eastl::fixed_map<render::VAOManager::Key, shared_ptr<render::VertexArrayObject>, 4096ul, true,
                                           eastl::less<render::VAOManager::Key>, eastl::allocator>();
        ~AutoSingleton(param_1);
    }

    // 0x100bd5e20, 128 bytes, inline, placed by class name
    // ResourceList<render::VAOManager::Key, render::VertexArrayObject, eastl::fixed_map<render::VAOManager::Key, shared_ptr<render::VertexArrayObject>, 4096ul, true, eastl::less<render::VAOManager::Key>, eastl::allocator> >::GarbageCollect(std::function<bool (render::VAOManager::Key const&, shared_ptr<render::VertexArrayObject> const&)> const&, std::function<void (render::VAOManager::Key const&, shared_ptr<render::VertexArrayObject> const&)> const&)::{lambda(eastl::pair<render::VAOManager::Key const, shared_ptr<render::VertexArrayObject> > const&)#1}::operator()(eastl::pair<render::VAOManager::Key const, shared_ptr<render::VertexArrayObject> > const&) const
    /* ResourceList<render::VAOManager::Key, render::VertexArrayObject,
   eastl::fixed_map<render::VAOManager::Key, shared_ptr<render::VertexArrayObject>,
   4096ul, true, eastl::less<render::VAOManager::Key>, eastl::allocator>
   >::GarbageCollect(std::function<bool (render::VAOManager::Key const&,
   shared_ptr<render::VertexArrayObject> const&)> const&, std::function<void
   (render::VAOManager::Key const&, shared_ptr<render::VertexArrayObject> const&)>
   const&)::{lambda(eastl::pair<render::VAOManager::Key const,
   shared_ptr<render::VertexArrayObject> >
   const&)#1}::TEMPNAMEPLACEHOLDERVALUE(eastl::pair<render::VAOManager::Key const,
   shared_ptr<render::VertexArrayObject> > const&) const */

    ulong jag::ResourceList<render::VAOManager::Key, render::VertexArrayObject,
                            eastl::fixed_map<render::VAOManager::Key, shared_ptr<render::VertexArrayObject>, 4096ul,
                                             true, eastl::less<render::VAOManager::Key>, eastl::allocator>>::
        GarbageCollect(
            std::function<bool(render::VAOManager::Key_const&, shared_ptr<render::VertexArrayObject> const&)> const&,
            std::function<void(render::VAOManager::Key_const&, shared_ptr<render::VertexArrayObject> const&)> const&)::{
        lambda(eastl::pair<render::VAOManager::Key_const, shared_ptr<render::VertexArrayObject>> const&) #1
    }
    ::operator()(
        _lambda_eastl__pair<render::VAOManager::Key_const, shared_ptr<render::VertexArrayObject>> const___1_* this,
        pair * param_1)

    {
        Key* pKVar1;
        bool bVar2;
        char cVar3;
        ulong uVar4;

        pKVar1 = *(Key**)this;
        bVar2 = pKVar1->operator_cast_to_bool();
        if (bVar2) {
            cVar3 = std::function<bool(render::VAOManager::Key_const&,
                                       shared_ptr<render::VertexArrayObject> const&)>::operator()(pKVar1,
                                                                                                  (shared_ptr*)param_1);
            if (cVar3 != '\0')
                goto LAB_100bd5e57;
        } else {
        LAB_100bd5e57:
            cVar3 = ((param_1 + 200))->unique();
            if (cVar3 != '\0') {
                pKVar1 = *(Key**)(this + 8);
                bVar2 = pKVar1->operator_cast_to_bool();
                uVar4 = CONCAT71((int7)((ulong)this >> 8), 1);
                if (bVar2) {
                    std::function<void(render::VAOManager::Key_const&,
                                       shared_ptr<render::VertexArrayObject> const&)>::operator()(pKVar1,
                                                                                                  (shared_ptr*)param_1);
                }
                goto LAB_100bd5e91;
            }
        }
        uVar4 = 0;
    LAB_100bd5e91:
        return uVar4 & 4294967295;
    }

    // 0x100beb560, 240 bytes, inline, placed by class name
    // ResourceList<unsigned long, render::ShaderProgram, eastl::vector_map<unsigned long, shared_ptr<render::ShaderProgram>, eastl::less<unsigned long>, eastl::allocator, eastl::vector<eastl::pair<unsigned long, shared_ptr<render::ShaderProgram> >, eastl::allocator> > >::AddResourceResult ResourceList<unsigned long, render::ShaderProgram, eastl::vector_map<unsigned long, shared_ptr<render::ShaderProgram>, eastl::less<unsigned long>, eastl::allocator, eastl::vector<eastl::pair<unsigned long, shared_ptr<render::ShaderProgram> >, eastl::allocator> > >::AddResource<>(unsigned long const&)
    ResourceList<unsigned long, render::ShaderProgram,
                 eastl::vector_map<
                     unsigned long, shared_ptr<render::ShaderProgram>, eastl::less<unsigned long>, eastl::allocator,
                     eastl::vector<eastl::pair<unsigned long, shared_ptr<render::ShaderProgram>>, eastl::allocator>>>*
    jag::ResourceList<
        unsigned long, render::ShaderProgram,
        eastl::vector_map<
            unsigned long, shared_ptr<render::ShaderProgram>, eastl::less<unsigned long>, eastl::allocator,
            eastl::vector<eastl::pair<unsigned long, shared_ptr<render::ShaderProgram>>, eastl::allocator>>>::
        AddResource<>(
            ResourceList<unsigned long, render::ShaderProgram,
                         eastl::vector_map<unsigned long, shared_ptr<render::ShaderProgram>, eastl::less<unsigned long>,
                                           eastl::allocator,
                                           eastl::vector<eastl::pair<unsigned long, shared_ptr<render::ShaderProgram>>,
                                                         eastl::allocator>>>* this,
            ulong* param_1) {
        long lVar1;
        long lVar2;
        shared_ptr* psVar3;
        shared_ptr<render::ShaderProgram>* this_00;
        ulonglong* in_RDX;
        vector_map<unsigned long long, shared_ptr<game::BuildModelMain>, eastl::less<unsigned long long>,
                   eastl::allocator,
                   eastl::vector<eastl::pair<unsigned long long, shared_ptr<game::BuildModelMain>>, eastl::allocator>>*
            this_01;
        shared_ptr local_48;
        scoped_lock<std::mutex> local_38[8];

        std::scoped_lock<std::mutex>::scoped_lock(local_38, (mutex*)param_1);
        new (this) ResourceList<unsigned long long, render::Texture,
                                eastl::map<unsigned long long, shared_ptr<render::Texture>,
                                           eastl::less<unsigned long long>, eastl::allocator>>::AddResourceResult();
        this_01 = (vector_map<unsigned long long, shared_ptr<game::BuildModelMain>, eastl::less<unsigned long long>,
                              eastl::allocator,
                              eastl::vector<eastl::pair<unsigned long long, shared_ptr<game::BuildModelMain>>,
                                            eastl::allocator>>*)(param_1 + 8);
        lVar1 = eastl::vector_map<unsigned long long, shared_ptr<game::BuildModelMain>, eastl::less<unsigned long long>,
                                  eastl::allocator,
                                  eastl::vector<eastl::pair<unsigned long long, shared_ptr<game::BuildModelMain>>,
                                                eastl::allocator>>::find(this_01, in_RDX);
        lVar2 = this_01->end();
        if (lVar1 == lVar2) {
            make_shared<render::ShaderProgram>((jag*)&local_48);
            psVar3 = (shared_ptr*)shared_ptr<render::ShaderProgram>::operator=(
                (shared_ptr<render::ShaderProgram>*)(this + 8), &local_48);
            this_00 = (shared_ptr<render::ShaderProgram>*)eastl::vector_map<
                unsigned long, shared_ptr<render::ShaderProgram>, eastl::less<unsigned long>, eastl::allocator,
                eastl::vector<eastl::pair<unsigned long, shared_ptr<render::ShaderProgram>>, eastl::allocator>>::
            operator[](
                (vector_map<
                    unsigned long, shared_ptr<render::ShaderProgram>, eastl::less<unsigned long>, eastl::allocator,
                    eastl::vector<eastl::pair<unsigned long, shared_ptr<render::ShaderProgram>>, eastl::allocator>>*)
                    this_01,
                in_RDX);
            shared_ptr<render::ShaderProgram>::operator=(this_00, psVar3);
            local_48.~shared_ptr();
        } else {
            shared_ptr<render::ShaderProgram>::operator=((shared_ptr<render::ShaderProgram>*)(this + 8),
                                                         (shared_ptr*)(lVar1 + 8));
        }
        *this =
            (ResourceList<unsigned long, render::ShaderProgram,
                          eastl::vector_map<unsigned long, shared_ptr<render::ShaderProgram>,
                                            eastl::less<unsigned long>, eastl::allocator,
                                            eastl::vector<eastl::pair<unsigned long, shared_ptr<render::ShaderProgram>>,
                                                          eastl::allocator>>>)(lVar1 == lVar2);
        std::scoped_lock<std::mutex>::~scoped_lock(local_38);
        return this;
    }

    // 0x100beb690, 96 bytes, inline, placed by class name
    // ResourceList<unsigned long, render::ShaderProgram, eastl::vector_map<unsigned long, shared_ptr<render::ShaderProgram>, eastl::less<unsigned long>, eastl::allocator, eastl::vector<eastl::pair<unsigned long, shared_ptr<render::ShaderProgram> >, eastl::allocator> > >::EraseResource(unsigned long const&)
    void jag::ResourceList<
        unsigned long, render::ShaderProgram,
        eastl::vector_map<
            unsigned long, shared_ptr<render::ShaderProgram>, eastl::less<unsigned long>, eastl::allocator,
            eastl::vector<eastl::pair<unsigned long, shared_ptr<render::ShaderProgram>>, eastl::allocator>>>::
        EraseResource(
            ResourceList<unsigned long, render::ShaderProgram,
                         eastl::vector_map<unsigned long, shared_ptr<render::ShaderProgram>, eastl::less<unsigned long>,
                                           eastl::allocator,
                                           eastl::vector<eastl::pair<unsigned long, shared_ptr<render::ShaderProgram>>,
                                                         eastl::allocator>>>* this,
            ulong* param_1) {
        scoped_lock<std::mutex> local_20[8];

        std::scoped_lock<std::mutex>::scoped_lock(local_20, (mutex*)this);
        ((this + 64))->erase(param_1);
        std::scoped_lock<std::mutex>::~scoped_lock(local_20);
    }

    // 0x100beba90, 240 bytes, inline, placed by class name
    // ResourceList<unsigned long, render::ShaderProgram, eastl::vector_map<unsigned long, shared_ptr<render::ShaderProgram>, eastl::less<unsigned long>, eastl::allocator, eastl::vector<eastl::pair<unsigned long, shared_ptr<render::ShaderProgram> >, eastl::allocator> > >::ReleaseResource(unsigned long const&, shared_ptr<render::ShaderProgram>&)
    void jag::ResourceList<
        unsigned long, render::ShaderProgram,
        eastl::vector_map<
            unsigned long, shared_ptr<render::ShaderProgram>, eastl::less<unsigned long>, eastl::allocator,
            eastl::vector<eastl::pair<unsigned long, shared_ptr<render::ShaderProgram>>, eastl::allocator>>>::
        ReleaseResource(
            ResourceList<unsigned long, render::ShaderProgram,
                         eastl::vector_map<unsigned long, shared_ptr<render::ShaderProgram>, eastl::less<unsigned long>,
                                           eastl::allocator,
                                           eastl::vector<eastl::pair<unsigned long, shared_ptr<render::ShaderProgram>>,
                                                         eastl::allocator>>>* this,
            ulong* param_1, shared_ptr* param_2) {
        bool bVar1;
        char cVar2;
        pair* ppVar3;
        undefined8 uVar4;
        vector_map<unsigned long long, shared_ptr<game::BuildModelMain>, eastl::less<unsigned long long>,
                   eastl::allocator,
                   eastl::vector<eastl::pair<unsigned long long, shared_ptr<game::BuildModelMain>>, eastl::allocator>>*
            this_00;
        undefined1 auVar5[16];
        scoped_lock<std::mutex> local_30[8];

        std::scoped_lock<std::mutex>::scoped_lock(local_30, (mutex*)this);
        this_00 = (vector_map<unsigned long long, shared_ptr<game::BuildModelMain>, eastl::less<unsigned long long>,
                              eastl::allocator,
                              eastl::vector<eastl::pair<unsigned long long, shared_ptr<game::BuildModelMain>>,
                                            eastl::allocator>>*)(this + 64);
        ppVar3 =
            (pair*)eastl::vector_map<unsigned long long, shared_ptr<game::BuildModelMain>,
                                     eastl::less<unsigned long long>, eastl::allocator,
                                     eastl::vector<eastl::pair<unsigned long long, shared_ptr<game::BuildModelMain>>,
                                                   eastl::allocator>>::find(this_00, param_1);
        auVar5 = this_00->end();
        if (ppVar3 == auVar5._0_8_) {
            uVar4 = logger::default_logger();
            logger::Logger::Log(
                uVar4, 0, 2, "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/ResourceList.h",
                131, "ResourceList::ReleaseResource: Unable to find resource");
        } else {
            bVar1 = operator==((jag*)(ppVar3 + 8), param_2, auVar5._8_8_);
            if (!bVar1) {
                /* WARNING: Subroutine does not return */
                LogAssert("cachedResource == resource",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/ResourceList.h",
                          121, (char*)0);
            }
            shared_ptr<render::ShaderProgram>::reset();
            cVar2 = ((ppVar3 + 8))->unique();
            if (cVar2 != '\0') {
                this_00->erase(ppVar3);
            }
        }
        std::scoped_lock<std::mutex>::~scoped_lock(local_30);
    }

    // 0x100bebc20, 144 bytes, inline, placed by class name
    // ResourceList<unsigned long, render::ShaderProgram, eastl::vector_map<unsigned long, shared_ptr<render::ShaderProgram>, eastl::less<unsigned long>, eastl::allocator, eastl::vector<eastl::pair<unsigned long, shared_ptr<render::ShaderProgram> >, eastl::allocator> > >::GarbageCollect(std::function<bool (unsigned long const&, shared_ptr<render::ShaderProgram> const&)> const&, std::function<void (unsigned long const&, shared_ptr<render::ShaderProgram> const&)> const&)
    /* ResourceList<unsigned long, render::ShaderProgram, eastl::vector_map<unsigned long,
   shared_ptr<render::ShaderProgram>, eastl::less<unsigned long>, eastl::allocator,
   eastl::vector<eastl::pair<unsigned long, shared_ptr<render::ShaderProgram> >,
   eastl::allocator> > >::GarbageCollect(std::function<bool (unsigned long const&,
   shared_ptr<render::ShaderProgram> const&)> const&, std::function<void (unsigned long
   const&, shared_ptr<render::ShaderProgram> const&)> const&) */

    void jag::ResourceList<
        unsigned long, render::ShaderProgram,
        eastl::vector_map<
            unsigned long, shared_ptr<render::ShaderProgram>, eastl::less<unsigned long>, eastl::allocator,
            eastl::vector<eastl::pair<unsigned long, shared_ptr<render::ShaderProgram>>, eastl::allocator>>>::
        GarbageCollect(
            ResourceList<unsigned long, render::ShaderProgram,
                         eastl::vector_map<unsigned long, shared_ptr<render::ShaderProgram>, eastl::less<unsigned long>,
                                           eastl::allocator,
                                           eastl::vector<eastl::pair<unsigned long, shared_ptr<render::ShaderProgram>>,
                                                         eastl::allocator>>>* this,
            function* param_1, function* param_2) {
        eastl* peVar1;
        undefined8 uVar2;
        pair* ppVar3;
        pair* ppVar4;
        Layout* this_00;
        scoped_lock<std::mutex> local_30[8];

        std::scoped_lock<std::mutex>::scoped_lock(local_30, (mutex*)this);
        this_00 = (Layout*)(this + 64);
        peVar1 = (eastl*)
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                    eastl::allocator>>::Layout::HeapBeginPtr(this_00);
        uVar2 = this_00->end();
        ppVar3 = eastl::remove_if<
            eastl::pair<unsigned long, shared_ptr<render::ShaderProgram>>*,
            (std::function<bool(unsigned long const&, shared_ptr<render::ShaderProgram> const&)> const&)
                ->GarbageCollect(
                    std::function<void(unsigned long const&, shared_ptr<render::ShaderProgram> const&)> const&)::
                    _lambda(eastl::pair<unsigned long, shared_ptr<render::ShaderProgram>> const&) _1_>(
            peVar1, uVar2, param_1, param_2);
        ppVar4 = (pair*)this_00->end();
        this_00->erase(ppVar3, ppVar4);
        std::scoped_lock<std::mutex>::~scoped_lock(local_30);
    }

    // 0x100bff2a0, 128 bytes, inline, placed by class name
    // ResourceList<unsigned long, render::ShaderProgram, eastl::vector_map<unsigned long, shared_ptr<render::ShaderProgram>, eastl::less<unsigned long>, eastl::allocator, eastl::vector<eastl::pair<unsigned long, shared_ptr<render::ShaderProgram> >, eastl::allocator> > >::GarbageCollect(std::function<bool (unsigned long const&, shared_ptr<render::ShaderProgram> const&)> const&, std::function<void (unsigned long const&, shared_ptr<render::ShaderProgram> const&)> const&)::{lambda(eastl::pair<unsigned long, shared_ptr<render::ShaderProgram> > const&)#1}::operator()(eastl::pair<unsigned long, shared_ptr<render::ShaderProgram> > const&) const
    /* ResourceList<unsigned long, render::ShaderProgram, eastl::vector_map<unsigned long,
   shared_ptr<render::ShaderProgram>, eastl::less<unsigned long>, eastl::allocator,
   eastl::vector<eastl::pair<unsigned long, shared_ptr<render::ShaderProgram> >,
   eastl::allocator> > >::GarbageCollect(std::function<bool (unsigned long const&,
   shared_ptr<render::ShaderProgram> const&)> const&, std::function<void (unsigned long
   const&, shared_ptr<render::ShaderProgram> const&)>
   const&)::{lambda(eastl::pair<unsigned long, shared_ptr<render::ShaderProgram> >
   const&)#1}::TEMPNAMEPLACEHOLDERVALUE(eastl::pair<unsigned long,
   shared_ptr<render::ShaderProgram> > const&) const */

    ulong jag::ResourceList<
        unsigned long, render::ShaderProgram,
        eastl::vector_map<
            unsigned long, shared_ptr<render::ShaderProgram>, eastl::less<unsigned long>, eastl::allocator,
            eastl::vector<eastl::pair<unsigned long, shared_ptr<render::ShaderProgram>>, eastl::allocator>>>::
        GarbageCollect(std::function<bool(unsigned long const&, shared_ptr<render::ShaderProgram> const&)> const&,
                       std::function<void(unsigned long const&, shared_ptr<render::ShaderProgram> const&)> const&)::{
        lambda(eastl::pair<unsigned long, shared_ptr<render::ShaderProgram>> const&) #1
    }
    ::operator()(_lambda_eastl__pair<unsigned long, shared_ptr<render::ShaderProgram>> const___1_* this,
                 pair * param_1) {
        function* pfVar1;
        bool bVar2;
        char cVar3;
        ulong uVar4;

        pfVar1 = *(function**)this;
        bVar2 = std::function::operator_cast_to_bool(pfVar1);
        if (bVar2) {
            cVar3 = std::function<bool(unsigned long const&, shared_ptr<render::ShaderProgram> const&)>::operator()(
                (ulong*)pfVar1, (shared_ptr*)param_1);
            if (cVar3 != '\0')
                goto LAB_100bff2d4;
        } else {
        LAB_100bff2d4:
            cVar3 = ((param_1 + 8))->unique();
            if (cVar3 != '\0') {
                pfVar1 = *(function**)(this + 8);
                bVar2 = std::function::operator_cast_to_bool(pfVar1);
                uVar4 = CONCAT71((int7)((ulong)this >> 8), 1);
                if (bVar2) {
                    std::function<void(unsigned long const&, shared_ptr<render::ShaderProgram> const&)>::operator()(
                        (ulong*)pfVar1, (shared_ptr*)param_1);
                }
                goto LAB_100bff30b;
            }
        }
        uVar4 = 0;
    LAB_100bff30b:
        return uVar4 & 4294967295;
    }

    // 0x100c03560, 240 bytes, inline, placed by class name
    // ResourceList<unsigned long, render::VertexShader, eastl::vector_map<unsigned long, shared_ptr<render::VertexShader>, eastl::less<unsigned long>, eastl::allocator, eastl::vector<eastl::pair<unsigned long, shared_ptr<render::VertexShader> >, eastl::allocator> > >::AddResourceResult ResourceList<unsigned long, render::VertexShader, eastl::vector_map<unsigned long, shared_ptr<render::VertexShader>, eastl::less<unsigned long>, eastl::allocator, eastl::vector<eastl::pair<unsigned long, shared_ptr<render::VertexShader> >, eastl::allocator> > >::AddResource<>(unsigned long const&)
    ResourceList<unsigned long, render::VertexShader,
                 eastl::vector_map<
                     unsigned long, shared_ptr<render::VertexShader>, eastl::less<unsigned long>, eastl::allocator,
                     eastl::vector<eastl::pair<unsigned long, shared_ptr<render::VertexShader>>, eastl::allocator>>>*
    jag::ResourceList<
        unsigned long, render::VertexShader,
        eastl::vector_map<
            unsigned long, shared_ptr<render::VertexShader>, eastl::less<unsigned long>, eastl::allocator,
            eastl::vector<eastl::pair<unsigned long, shared_ptr<render::VertexShader>>, eastl::allocator>>>::
        AddResource<>(
            ResourceList<unsigned long, render::VertexShader,
                         eastl::vector_map<unsigned long, shared_ptr<render::VertexShader>, eastl::less<unsigned long>,
                                           eastl::allocator,
                                           eastl::vector<eastl::pair<unsigned long, shared_ptr<render::VertexShader>>,
                                                         eastl::allocator>>>* this,
            ulong* param_1) {
        long lVar1;
        long lVar2;
        shared_ptr* psVar3;
        shared_ptr<render::VertexShader>* this_00;
        ulonglong* in_RDX;
        vector_map<unsigned long long, shared_ptr<game::BuildModelMain>, eastl::less<unsigned long long>,
                   eastl::allocator,
                   eastl::vector<eastl::pair<unsigned long long, shared_ptr<game::BuildModelMain>>, eastl::allocator>>*
            this_01;
        shared_ptr local_48;
        scoped_lock<std::mutex> local_38[8];

        std::scoped_lock<std::mutex>::scoped_lock(local_38, (mutex*)param_1);
        new (this) ResourceList<unsigned long long, render::Texture,
                                eastl::map<unsigned long long, shared_ptr<render::Texture>,
                                           eastl::less<unsigned long long>, eastl::allocator>>::AddResourceResult();
        this_01 = (vector_map<unsigned long long, shared_ptr<game::BuildModelMain>, eastl::less<unsigned long long>,
                              eastl::allocator,
                              eastl::vector<eastl::pair<unsigned long long, shared_ptr<game::BuildModelMain>>,
                                            eastl::allocator>>*)(param_1 + 8);
        lVar1 = eastl::vector_map<unsigned long long, shared_ptr<game::BuildModelMain>, eastl::less<unsigned long long>,
                                  eastl::allocator,
                                  eastl::vector<eastl::pair<unsigned long long, shared_ptr<game::BuildModelMain>>,
                                                eastl::allocator>>::find(this_01, in_RDX);
        lVar2 = this_01->end();
        if (lVar1 == lVar2) {
            make_shared<render::VertexShader>((jag*)&local_48);
            psVar3 = (shared_ptr*)shared_ptr<render::VertexShader>::operator=(
                (shared_ptr<render::VertexShader>*)(this + 8), &local_48);
            this_00 = (shared_ptr<render::VertexShader>*)eastl::vector_map<
                unsigned long, shared_ptr<render::VertexShader>, eastl::less<unsigned long>, eastl::allocator,
                eastl::vector<eastl::pair<unsigned long, shared_ptr<render::VertexShader>>, eastl::allocator>>::
            operator[](
                (vector_map<
                    unsigned long, shared_ptr<render::VertexShader>, eastl::less<unsigned long>, eastl::allocator,
                    eastl::vector<eastl::pair<unsigned long, shared_ptr<render::VertexShader>>, eastl::allocator>>*)
                    this_01,
                in_RDX);
            shared_ptr<render::VertexShader>::operator=(this_00, psVar3);
            local_48.~shared_ptr();
        } else {
            shared_ptr<render::VertexShader>::operator=((shared_ptr<render::VertexShader>*)(this + 8),
                                                        (shared_ptr*)(lVar1 + 8));
        }
        *this =
            (ResourceList<unsigned long, render::VertexShader,
                          eastl::vector_map<unsigned long, shared_ptr<render::VertexShader>, eastl::less<unsigned long>,
                                            eastl::allocator,
                                            eastl::vector<eastl::pair<unsigned long, shared_ptr<render::VertexShader>>,
                                                          eastl::allocator>>>)(lVar1 == lVar2);
        std::scoped_lock<std::mutex>::~scoped_lock(local_38);
        return this;
    }

    // 0x100c03670, 96 bytes, inline, placed by class name
    // ResourceList<unsigned long, render::VertexShader, eastl::vector_map<unsigned long, shared_ptr<render::VertexShader>, eastl::less<unsigned long>, eastl::allocator, eastl::vector<eastl::pair<unsigned long, shared_ptr<render::VertexShader> >, eastl::allocator> > >::EraseResource(unsigned long const&)
    void jag::ResourceList<
        unsigned long, render::VertexShader,
        eastl::vector_map<
            unsigned long, shared_ptr<render::VertexShader>, eastl::less<unsigned long>, eastl::allocator,
            eastl::vector<eastl::pair<unsigned long, shared_ptr<render::VertexShader>>, eastl::allocator>>>::
        EraseResource(
            ResourceList<unsigned long, render::VertexShader,
                         eastl::vector_map<unsigned long, shared_ptr<render::VertexShader>, eastl::less<unsigned long>,
                                           eastl::allocator,
                                           eastl::vector<eastl::pair<unsigned long, shared_ptr<render::VertexShader>>,
                                                         eastl::allocator>>>* this,
            ulong* param_1) {
        scoped_lock<std::mutex> local_20[8];

        std::scoped_lock<std::mutex>::scoped_lock(local_20, (mutex*)this);
        ((this + 64))->erase(param_1);
        std::scoped_lock<std::mutex>::~scoped_lock(local_20);
    }

    // 0x100c041c0, 240 bytes, inline, placed by class name
    // ResourceList<unsigned long, render::PixelShader, eastl::vector_map<unsigned long, shared_ptr<render::PixelShader>, eastl::less<unsigned long>, eastl::allocator, eastl::vector<eastl::pair<unsigned long, shared_ptr<render::PixelShader> >, eastl::allocator> > >::AddResourceResult ResourceList<unsigned long, render::PixelShader, eastl::vector_map<unsigned long, shared_ptr<render::PixelShader>, eastl::less<unsigned long>, eastl::allocator, eastl::vector<eastl::pair<unsigned long, shared_ptr<render::PixelShader> >, eastl::allocator> > >::AddResource<>(unsigned long const&)
    ResourceList<unsigned long, render::PixelShader,
                 eastl::vector_map<
                     unsigned long, shared_ptr<render::PixelShader>, eastl::less<unsigned long>, eastl::allocator,
                     eastl::vector<eastl::pair<unsigned long, shared_ptr<render::PixelShader>>, eastl::allocator>>>*
    jag::ResourceList<
        unsigned long, render::PixelShader,
        eastl::vector_map<
            unsigned long, shared_ptr<render::PixelShader>, eastl::less<unsigned long>, eastl::allocator,
            eastl::vector<eastl::pair<unsigned long, shared_ptr<render::PixelShader>>, eastl::allocator>>>::
        AddResource<>(
            ResourceList<unsigned long, render::PixelShader,
                         eastl::vector_map<unsigned long, shared_ptr<render::PixelShader>, eastl::less<unsigned long>,
                                           eastl::allocator,
                                           eastl::vector<eastl::pair<unsigned long, shared_ptr<render::PixelShader>>,
                                                         eastl::allocator>>>* this,
            ulong* param_1) {
        long lVar1;
        long lVar2;
        shared_ptr* psVar3;
        shared_ptr<render::PixelShader>* this_00;
        ulonglong* in_RDX;
        vector_map<unsigned long long, shared_ptr<game::BuildModelMain>, eastl::less<unsigned long long>,
                   eastl::allocator,
                   eastl::vector<eastl::pair<unsigned long long, shared_ptr<game::BuildModelMain>>, eastl::allocator>>*
            this_01;
        shared_ptr local_48;
        scoped_lock<std::mutex> local_38[8];

        std::scoped_lock<std::mutex>::scoped_lock(local_38, (mutex*)param_1);
        new (this) ResourceList<unsigned long long, render::Texture,
                                eastl::map<unsigned long long, shared_ptr<render::Texture>,
                                           eastl::less<unsigned long long>, eastl::allocator>>::AddResourceResult();
        this_01 = (vector_map<unsigned long long, shared_ptr<game::BuildModelMain>, eastl::less<unsigned long long>,
                              eastl::allocator,
                              eastl::vector<eastl::pair<unsigned long long, shared_ptr<game::BuildModelMain>>,
                                            eastl::allocator>>*)(param_1 + 8);
        lVar1 = eastl::vector_map<unsigned long long, shared_ptr<game::BuildModelMain>, eastl::less<unsigned long long>,
                                  eastl::allocator,
                                  eastl::vector<eastl::pair<unsigned long long, shared_ptr<game::BuildModelMain>>,
                                                eastl::allocator>>::find(this_01, in_RDX);
        lVar2 = this_01->end();
        if (lVar1 == lVar2) {
            make_shared<render::PixelShader>((jag*)&local_48);
            psVar3 = (shared_ptr*)shared_ptr<render::PixelShader>::operator=(
                (shared_ptr<render::PixelShader>*)(this + 8), &local_48);
            this_00 = (shared_ptr<render::PixelShader>*)eastl::vector_map<
                unsigned long, shared_ptr<render::PixelShader>, eastl::less<unsigned long>, eastl::allocator,
                eastl::vector<eastl::pair<unsigned long, shared_ptr<render::PixelShader>>, eastl::allocator>>::
            operator[](
                (vector_map<
                    unsigned long, shared_ptr<render::PixelShader>, eastl::less<unsigned long>, eastl::allocator,
                    eastl::vector<eastl::pair<unsigned long, shared_ptr<render::PixelShader>>, eastl::allocator>>*)
                    this_01,
                in_RDX);
            shared_ptr<render::PixelShader>::operator=(this_00, psVar3);
            local_48.~shared_ptr();
        } else {
            shared_ptr<render::PixelShader>::operator=((shared_ptr<render::PixelShader>*)(this + 8),
                                                       (shared_ptr*)(lVar1 + 8));
        }
        *this =
            (ResourceList<unsigned long, render::PixelShader,
                          eastl::vector_map<unsigned long, shared_ptr<render::PixelShader>, eastl::less<unsigned long>,
                                            eastl::allocator,
                                            eastl::vector<eastl::pair<unsigned long, shared_ptr<render::PixelShader>>,
                                                          eastl::allocator>>>)(lVar1 == lVar2);
        std::scoped_lock<std::mutex>::~scoped_lock(local_38);
        return this;
    }

    // 0x100c042d0, 96 bytes, inline, placed by class name
    // ResourceList<unsigned long, render::PixelShader, eastl::vector_map<unsigned long, shared_ptr<render::PixelShader>, eastl::less<unsigned long>, eastl::allocator, eastl::vector<eastl::pair<unsigned long, shared_ptr<render::PixelShader> >, eastl::allocator> > >::EraseResource(unsigned long const&)
    void jag::ResourceList<
        unsigned long, render::PixelShader,
        eastl::vector_map<
            unsigned long, shared_ptr<render::PixelShader>, eastl::less<unsigned long>, eastl::allocator,
            eastl::vector<eastl::pair<unsigned long, shared_ptr<render::PixelShader>>, eastl::allocator>>>::
        EraseResource(
            ResourceList<unsigned long, render::PixelShader,
                         eastl::vector_map<unsigned long, shared_ptr<render::PixelShader>, eastl::less<unsigned long>,
                                           eastl::allocator,
                                           eastl::vector<eastl::pair<unsigned long, shared_ptr<render::PixelShader>>,
                                                         eastl::allocator>>>* this,
            ulong* param_1) {
        scoped_lock<std::mutex> local_20[8];

        std::scoped_lock<std::mutex>::scoped_lock(local_20, (mutex*)this);
        ((this + 64))->erase(param_1);
        std::scoped_lock<std::mutex>::~scoped_lock(local_20);
    }

    // 0x100c04dc0, 240 bytes, inline, placed by class name
    // ResourceList<unsigned long, render::ComputeShader, eastl::vector_map<unsigned long, shared_ptr<render::ComputeShader>, eastl::less<unsigned long>, eastl::allocator, eastl::vector<eastl::pair<unsigned long, shared_ptr<render::ComputeShader> >, eastl::allocator> > >::AddResourceResult ResourceList<unsigned long, render::ComputeShader, eastl::vector_map<unsigned long, shared_ptr<render::ComputeShader>, eastl::less<unsigned long>, eastl::allocator, eastl::vector<eastl::pair<unsigned long, shared_ptr<render::ComputeShader> >, eastl::allocator> > >::AddResource<>(unsigned long const&)
    ResourceList<unsigned long, render::ComputeShader,
                 eastl::vector_map<
                     unsigned long, shared_ptr<render::ComputeShader>, eastl::less<unsigned long>, eastl::allocator,
                     eastl::vector<eastl::pair<unsigned long, shared_ptr<render::ComputeShader>>, eastl::allocator>>>*
    jag::ResourceList<
        unsigned long, render::ComputeShader,
        eastl::vector_map<
            unsigned long, shared_ptr<render::ComputeShader>, eastl::less<unsigned long>, eastl::allocator,
            eastl::vector<eastl::pair<unsigned long, shared_ptr<render::ComputeShader>>, eastl::allocator>>>::
        AddResource<>(
            ResourceList<unsigned long, render::ComputeShader,
                         eastl::vector_map<unsigned long, shared_ptr<render::ComputeShader>, eastl::less<unsigned long>,
                                           eastl::allocator,
                                           eastl::vector<eastl::pair<unsigned long, shared_ptr<render::ComputeShader>>,
                                                         eastl::allocator>>>* this,
            ulong* param_1) {
        long lVar1;
        long lVar2;
        shared_ptr* psVar3;
        shared_ptr<render::ComputeShader>* this_00;
        ulonglong* in_RDX;
        vector_map<unsigned long long, shared_ptr<game::BuildModelMain>, eastl::less<unsigned long long>,
                   eastl::allocator,
                   eastl::vector<eastl::pair<unsigned long long, shared_ptr<game::BuildModelMain>>, eastl::allocator>>*
            this_01;
        shared_ptr local_48;
        scoped_lock<std::mutex> local_38[8];

        std::scoped_lock<std::mutex>::scoped_lock(local_38, (mutex*)param_1);
        new (this) ResourceList<unsigned long long, render::Texture,
                                eastl::map<unsigned long long, shared_ptr<render::Texture>,
                                           eastl::less<unsigned long long>, eastl::allocator>>::AddResourceResult();
        this_01 = (vector_map<unsigned long long, shared_ptr<game::BuildModelMain>, eastl::less<unsigned long long>,
                              eastl::allocator,
                              eastl::vector<eastl::pair<unsigned long long, shared_ptr<game::BuildModelMain>>,
                                            eastl::allocator>>*)(param_1 + 8);
        lVar1 = eastl::vector_map<unsigned long long, shared_ptr<game::BuildModelMain>, eastl::less<unsigned long long>,
                                  eastl::allocator,
                                  eastl::vector<eastl::pair<unsigned long long, shared_ptr<game::BuildModelMain>>,
                                                eastl::allocator>>::find(this_01, in_RDX);
        lVar2 = this_01->end();
        if (lVar1 == lVar2) {
            make_shared<render::ComputeShader>((jag*)&local_48);
            psVar3 = (shared_ptr*)shared_ptr<render::ComputeShader>::operator=(
                (shared_ptr<render::ComputeShader>*)(this + 8), &local_48);
            this_00 = (shared_ptr<render::ComputeShader>*)eastl::vector_map<
                unsigned long, shared_ptr<render::ComputeShader>, eastl::less<unsigned long>, eastl::allocator,
                eastl::vector<eastl::pair<unsigned long, shared_ptr<render::ComputeShader>>, eastl::allocator>>::
            operator[](
                (vector_map<
                    unsigned long, shared_ptr<render::ComputeShader>, eastl::less<unsigned long>, eastl::allocator,
                    eastl::vector<eastl::pair<unsigned long, shared_ptr<render::ComputeShader>>, eastl::allocator>>*)
                    this_01,
                in_RDX);
            shared_ptr<render::ComputeShader>::operator=(this_00, psVar3);
            local_48.~shared_ptr();
        } else {
            shared_ptr<render::ComputeShader>::operator=((shared_ptr<render::ComputeShader>*)(this + 8),
                                                         (shared_ptr*)(lVar1 + 8));
        }
        *this =
            (ResourceList<unsigned long, render::ComputeShader,
                          eastl::vector_map<unsigned long, shared_ptr<render::ComputeShader>,
                                            eastl::less<unsigned long>, eastl::allocator,
                                            eastl::vector<eastl::pair<unsigned long, shared_ptr<render::ComputeShader>>,
                                                          eastl::allocator>>>)(lVar1 == lVar2);
        std::scoped_lock<std::mutex>::~scoped_lock(local_38);
        return this;
    }

    // 0x100c04ed0, 96 bytes, inline, placed by class name
    // ResourceList<unsigned long, render::ComputeShader, eastl::vector_map<unsigned long, shared_ptr<render::ComputeShader>, eastl::less<unsigned long>, eastl::allocator, eastl::vector<eastl::pair<unsigned long, shared_ptr<render::ComputeShader> >, eastl::allocator> > >::EraseResource(unsigned long const&)
    void jag::ResourceList<
        unsigned long, render::ComputeShader,
        eastl::vector_map<
            unsigned long, shared_ptr<render::ComputeShader>, eastl::less<unsigned long>, eastl::allocator,
            eastl::vector<eastl::pair<unsigned long, shared_ptr<render::ComputeShader>>, eastl::allocator>>>::
        EraseResource(
            ResourceList<unsigned long, render::ComputeShader,
                         eastl::vector_map<unsigned long, shared_ptr<render::ComputeShader>, eastl::less<unsigned long>,
                                           eastl::allocator,
                                           eastl::vector<eastl::pair<unsigned long, shared_ptr<render::ComputeShader>>,
                                                         eastl::allocator>>>* this,
            ulong* param_1) {
        scoped_lock<std::mutex> local_20[8];

        std::scoped_lock<std::mutex>::scoped_lock(local_20, (mutex*)this);
        ((this + 64))->erase(param_1);
        std::scoped_lock<std::mutex>::~scoped_lock(local_20);
    }

    // 0x100c05bf0, 240 bytes, inline, placed by class name
    // ResourceList<unsigned long, render::ComputeShader, eastl::vector_map<unsigned long, shared_ptr<render::ComputeShader>, eastl::less<unsigned long>, eastl::allocator, eastl::vector<eastl::pair<unsigned long, shared_ptr<render::ComputeShader> >, eastl::allocator> > >::ReleaseResource(unsigned long const&, shared_ptr<render::ComputeShader>&)
    void jag::ResourceList<
        unsigned long, render::ComputeShader,
        eastl::vector_map<
            unsigned long, shared_ptr<render::ComputeShader>, eastl::less<unsigned long>, eastl::allocator,
            eastl::vector<eastl::pair<unsigned long, shared_ptr<render::ComputeShader>>, eastl::allocator>>>::
        ReleaseResource(
            ResourceList<unsigned long, render::ComputeShader,
                         eastl::vector_map<unsigned long, shared_ptr<render::ComputeShader>, eastl::less<unsigned long>,
                                           eastl::allocator,
                                           eastl::vector<eastl::pair<unsigned long, shared_ptr<render::ComputeShader>>,
                                                         eastl::allocator>>>* this,
            ulong* param_1, shared_ptr* param_2) {
        bool bVar1;
        char cVar2;
        pair* ppVar3;
        undefined8 uVar4;
        vector_map<unsigned long long, shared_ptr<game::BuildModelMain>, eastl::less<unsigned long long>,
                   eastl::allocator,
                   eastl::vector<eastl::pair<unsigned long long, shared_ptr<game::BuildModelMain>>, eastl::allocator>>*
            this_00;
        undefined1 auVar5[16];
        scoped_lock<std::mutex> local_30[8];

        std::scoped_lock<std::mutex>::scoped_lock(local_30, (mutex*)this);
        this_00 = (vector_map<unsigned long long, shared_ptr<game::BuildModelMain>, eastl::less<unsigned long long>,
                              eastl::allocator,
                              eastl::vector<eastl::pair<unsigned long long, shared_ptr<game::BuildModelMain>>,
                                            eastl::allocator>>*)(this + 64);
        ppVar3 =
            (pair*)eastl::vector_map<unsigned long long, shared_ptr<game::BuildModelMain>,
                                     eastl::less<unsigned long long>, eastl::allocator,
                                     eastl::vector<eastl::pair<unsigned long long, shared_ptr<game::BuildModelMain>>,
                                                   eastl::allocator>>::find(this_00, param_1);
        auVar5 = this_00->end();
        if (ppVar3 == auVar5._0_8_) {
            uVar4 = logger::default_logger();
            logger::Logger::Log(
                uVar4, 0, 2, "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/ResourceList.h",
                131, "ResourceList::ReleaseResource: Unable to find resource");
        } else {
            bVar1 = operator==((jag*)(ppVar3 + 8), param_2, auVar5._8_8_);
            if (!bVar1) {
                /* WARNING: Subroutine does not return */
                LogAssert("cachedResource == resource",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/ResourceList.h",
                          121, (char*)0);
            }
            shared_ptr<render::ComputeShader>::reset();
            cVar2 = ((ppVar3 + 8))->unique();
            if (cVar2 != '\0') {
                this_00->erase(ppVar3);
            }
        }
        std::scoped_lock<std::mutex>::~scoped_lock(local_30);
    }

    // 0x100c05d30, 240 bytes, inline, placed by class name
    // ResourceList<unsigned long, render::PixelShader, eastl::vector_map<unsigned long, shared_ptr<render::PixelShader>, eastl::less<unsigned long>, eastl::allocator, eastl::vector<eastl::pair<unsigned long, shared_ptr<render::PixelShader> >, eastl::allocator> > >::ReleaseResource(unsigned long const&, shared_ptr<render::PixelShader>&)
    void jag::ResourceList<
        unsigned long, render::PixelShader,
        eastl::vector_map<
            unsigned long, shared_ptr<render::PixelShader>, eastl::less<unsigned long>, eastl::allocator,
            eastl::vector<eastl::pair<unsigned long, shared_ptr<render::PixelShader>>, eastl::allocator>>>::
        ReleaseResource(
            ResourceList<unsigned long, render::PixelShader,
                         eastl::vector_map<unsigned long, shared_ptr<render::PixelShader>, eastl::less<unsigned long>,
                                           eastl::allocator,
                                           eastl::vector<eastl::pair<unsigned long, shared_ptr<render::PixelShader>>,
                                                         eastl::allocator>>>* this,
            ulong* param_1, shared_ptr* param_2) {
        bool bVar1;
        char cVar2;
        pair* ppVar3;
        undefined8 uVar4;
        vector_map<unsigned long long, shared_ptr<game::BuildModelMain>, eastl::less<unsigned long long>,
                   eastl::allocator,
                   eastl::vector<eastl::pair<unsigned long long, shared_ptr<game::BuildModelMain>>, eastl::allocator>>*
            this_00;
        undefined1 auVar5[16];
        scoped_lock<std::mutex> local_30[8];

        std::scoped_lock<std::mutex>::scoped_lock(local_30, (mutex*)this);
        this_00 = (vector_map<unsigned long long, shared_ptr<game::BuildModelMain>, eastl::less<unsigned long long>,
                              eastl::allocator,
                              eastl::vector<eastl::pair<unsigned long long, shared_ptr<game::BuildModelMain>>,
                                            eastl::allocator>>*)(this + 64);
        ppVar3 =
            (pair*)eastl::vector_map<unsigned long long, shared_ptr<game::BuildModelMain>,
                                     eastl::less<unsigned long long>, eastl::allocator,
                                     eastl::vector<eastl::pair<unsigned long long, shared_ptr<game::BuildModelMain>>,
                                                   eastl::allocator>>::find(this_00, param_1);
        auVar5 = this_00->end();
        if (ppVar3 == auVar5._0_8_) {
            uVar4 = logger::default_logger();
            logger::Logger::Log(
                uVar4, 0, 2, "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/ResourceList.h",
                131, "ResourceList::ReleaseResource: Unable to find resource");
        } else {
            bVar1 = operator==((jag*)(ppVar3 + 8), param_2, auVar5._8_8_);
            if (!bVar1) {
                /* WARNING: Subroutine does not return */
                LogAssert("cachedResource == resource",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/ResourceList.h",
                          121, (char*)0);
            }
            shared_ptr<render::PixelShader>::reset();
            cVar2 = ((ppVar3 + 8))->unique();
            if (cVar2 != '\0') {
                this_00->erase(ppVar3);
            }
        }
        std::scoped_lock<std::mutex>::~scoped_lock(local_30);
    }

    // 0x100c05e70, 240 bytes, inline, placed by class name
    // ResourceList<unsigned long, render::VertexShader, eastl::vector_map<unsigned long, shared_ptr<render::VertexShader>, eastl::less<unsigned long>, eastl::allocator, eastl::vector<eastl::pair<unsigned long, shared_ptr<render::VertexShader> >, eastl::allocator> > >::ReleaseResource(unsigned long const&, shared_ptr<render::VertexShader>&)
    void jag::ResourceList<
        unsigned long, render::VertexShader,
        eastl::vector_map<
            unsigned long, shared_ptr<render::VertexShader>, eastl::less<unsigned long>, eastl::allocator,
            eastl::vector<eastl::pair<unsigned long, shared_ptr<render::VertexShader>>, eastl::allocator>>>::
        ReleaseResource(
            ResourceList<unsigned long, render::VertexShader,
                         eastl::vector_map<unsigned long, shared_ptr<render::VertexShader>, eastl::less<unsigned long>,
                                           eastl::allocator,
                                           eastl::vector<eastl::pair<unsigned long, shared_ptr<render::VertexShader>>,
                                                         eastl::allocator>>>* this,
            ulong* param_1, shared_ptr* param_2) {
        bool bVar1;
        char cVar2;
        pair* ppVar3;
        undefined8 uVar4;
        vector_map<unsigned long long, shared_ptr<game::BuildModelMain>, eastl::less<unsigned long long>,
                   eastl::allocator,
                   eastl::vector<eastl::pair<unsigned long long, shared_ptr<game::BuildModelMain>>, eastl::allocator>>*
            this_00;
        undefined1 auVar5[16];
        scoped_lock<std::mutex> local_30[8];

        std::scoped_lock<std::mutex>::scoped_lock(local_30, (mutex*)this);
        this_00 = (vector_map<unsigned long long, shared_ptr<game::BuildModelMain>, eastl::less<unsigned long long>,
                              eastl::allocator,
                              eastl::vector<eastl::pair<unsigned long long, shared_ptr<game::BuildModelMain>>,
                                            eastl::allocator>>*)(this + 64);
        ppVar3 =
            (pair*)eastl::vector_map<unsigned long long, shared_ptr<game::BuildModelMain>,
                                     eastl::less<unsigned long long>, eastl::allocator,
                                     eastl::vector<eastl::pair<unsigned long long, shared_ptr<game::BuildModelMain>>,
                                                   eastl::allocator>>::find(this_00, param_1);
        auVar5 = this_00->end();
        if (ppVar3 == auVar5._0_8_) {
            uVar4 = logger::default_logger();
            logger::Logger::Log(
                uVar4, 0, 2, "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/ResourceList.h",
                131, "ResourceList::ReleaseResource: Unable to find resource");
        } else {
            bVar1 = operator==((jag*)(ppVar3 + 8), param_2, auVar5._8_8_);
            if (!bVar1) {
                /* WARNING: Subroutine does not return */
                LogAssert("cachedResource == resource",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/ResourceList.h",
                          121, (char*)0);
            }
            shared_ptr<render::VertexShader>::reset();
            cVar2 = ((ppVar3 + 8))->unique();
            if (cVar2 != '\0') {
                this_00->erase(ppVar3);
            }
        }
        std::scoped_lock<std::mutex>::~scoped_lock(local_30);
    }

    // 0x100c37e60, 16 bytes, complete-object constructor, inline, placed by class name
    // ResourceList<unsigned long, render::VertexShader, eastl::vector_map<unsigned long, shared_ptr<render::VertexShader>, eastl::less<unsigned long>, eastl::allocator, eastl::vector<eastl::pair<unsigned long, shared_ptr<render::VertexShader> >, eastl::allocator> > >::ResourceList(unsigned int): jumps straight to the base-object constructor

    // 0x100c37f40, 16 bytes, complete-object destructor, inline, placed by class name
    // ResourceList<unsigned long, render::VertexShader, eastl::vector_map<unsigned long, shared_ptr<render::VertexShader>, eastl::less<unsigned long>, eastl::allocator, eastl::vector<eastl::pair<unsigned long, shared_ptr<render::VertexShader> >, eastl::allocator> > >::~ResourceList(): jumps straight to the base-object destructor

    // 0x100c37f50, 48 bytes, base-object destructor, inline, placed by class name
    // ResourceList<unsigned long, render::VertexShader, eastl::vector_map<unsigned long, shared_ptr<render::VertexShader>, eastl::less<unsigned long>, eastl::allocator, eastl::vector<eastl::pair<unsigned long, shared_ptr<render::VertexShader> >, eastl::allocator> > >::~ResourceList()
    void jag::ResourceList<
        unsigned long, render::VertexShader,
        eastl::vector_map<
            unsigned long, shared_ptr<render::VertexShader>, eastl::less<unsigned long>, eastl::allocator,
            eastl::vector<eastl::pair<unsigned long, shared_ptr<render::VertexShader>>, eastl::allocator>>>::
        ~ResourceList(
            ResourceList<unsigned long, render::VertexShader,
                         eastl::vector_map<unsigned long, shared_ptr<render::VertexShader>, eastl::less<unsigned long>,
                                           eastl::allocator,
                                           eastl::vector<eastl::pair<unsigned long, shared_ptr<render::VertexShader>>,
                                                         eastl::allocator>>>* this) {
        ((this + 64))->~vector_map();
        ~mutex();
    }

    // 0x100c37fe0, 96 bytes, base-object constructor, inline, placed by class name
    // ResourceList<unsigned long, render::VertexShader, eastl::vector_map<unsigned long, shared_ptr<render::VertexShader>, eastl::less<unsigned long>, eastl::allocator, eastl::vector<eastl::pair<unsigned long, shared_ptr<render::VertexShader> >, eastl::allocator> > >::ResourceList(unsigned int)
    void jag::ResourceList<
        unsigned long, render::VertexShader,
        eastl::vector_map<
            unsigned long, shared_ptr<render::VertexShader>, eastl::less<unsigned long>, eastl::allocator,
            eastl::vector<eastl::pair<unsigned long, shared_ptr<render::VertexShader>>, eastl::allocator>>>::
        ResourceList(
            ResourceList<unsigned long, render::VertexShader,
                         eastl::vector_map<unsigned long, shared_ptr<render::VertexShader>, eastl::less<unsigned long>,
                                           eastl::allocator,
                                           eastl::vector<eastl::pair<unsigned long, shared_ptr<render::VertexShader>>,
                                                         eastl::allocator>>>* this,
            uint param_1) {
        new (this) std::mutex();
        new ((this + 64)) eastl::vector_map<
            unsigned long, shared_ptr<render::VertexShader>, eastl::less<unsigned long>, eastl::allocator,
            eastl::vector<eastl::pair<unsigned long, shared_ptr<render::VertexShader>>, eastl::allocator>>();
        SetCapacity(this, param_1);
    }

    // 0x100c38050, 96 bytes, inline, placed by class name
    // ResourceList<unsigned long, render::VertexShader, eastl::vector_map<unsigned long, shared_ptr<render::VertexShader>, eastl::less<unsigned long>, eastl::allocator, eastl::vector<eastl::pair<unsigned long, shared_ptr<render::VertexShader> >, eastl::allocator> > >::SetCapacity(unsigned int)
    void jag::ResourceList<
        unsigned long, render::VertexShader,
        eastl::vector_map<
            unsigned long, shared_ptr<render::VertexShader>, eastl::less<unsigned long>, eastl::allocator,
            eastl::vector<eastl::pair<unsigned long, shared_ptr<render::VertexShader>>, eastl::allocator>>>::
        SetCapacity(
            ResourceList<unsigned long, render::VertexShader,
                         eastl::vector_map<unsigned long, shared_ptr<render::VertexShader>, eastl::less<unsigned long>,
                                           eastl::allocator,
                                           eastl::vector<eastl::pair<unsigned long, shared_ptr<render::VertexShader>>,
                                                         eastl::allocator>>>* this,
            uint param_1) {
        scoped_lock<std::mutex> local_20[8];

        std::scoped_lock<std::mutex>::scoped_lock(local_20, (mutex*)this);
        ((this + 64))->reserve((ulong)param_1);
        std::scoped_lock<std::mutex>::~scoped_lock(local_20);
    }

    // 0x100c38390, 16 bytes, complete-object constructor, inline, placed by class name
    // ResourceList<unsigned long, render::PixelShader, eastl::vector_map<unsigned long, shared_ptr<render::PixelShader>, eastl::less<unsigned long>, eastl::allocator, eastl::vector<eastl::pair<unsigned long, shared_ptr<render::PixelShader> >, eastl::allocator> > >::ResourceList(unsigned int): jumps straight to the base-object constructor

    // 0x100c38470, 16 bytes, complete-object destructor, inline, placed by class name
    // ResourceList<unsigned long, render::PixelShader, eastl::vector_map<unsigned long, shared_ptr<render::PixelShader>, eastl::less<unsigned long>, eastl::allocator, eastl::vector<eastl::pair<unsigned long, shared_ptr<render::PixelShader> >, eastl::allocator> > >::~ResourceList(): jumps straight to the base-object destructor

    // 0x100c38480, 48 bytes, base-object destructor, inline, placed by class name
    // ResourceList<unsigned long, render::PixelShader, eastl::vector_map<unsigned long, shared_ptr<render::PixelShader>, eastl::less<unsigned long>, eastl::allocator, eastl::vector<eastl::pair<unsigned long, shared_ptr<render::PixelShader> >, eastl::allocator> > >::~ResourceList()
    void jag::ResourceList<
        unsigned long, render::PixelShader,
        eastl::vector_map<
            unsigned long, shared_ptr<render::PixelShader>, eastl::less<unsigned long>, eastl::allocator,
            eastl::vector<eastl::pair<unsigned long, shared_ptr<render::PixelShader>>, eastl::allocator>>>::
        ~ResourceList(
            ResourceList<unsigned long, render::PixelShader,
                         eastl::vector_map<unsigned long, shared_ptr<render::PixelShader>, eastl::less<unsigned long>,
                                           eastl::allocator,
                                           eastl::vector<eastl::pair<unsigned long, shared_ptr<render::PixelShader>>,
                                                         eastl::allocator>>>* this) {
        ((this + 64))->~vector_map();
        ~mutex();
    }

    // 0x100c38510, 96 bytes, base-object constructor, inline, placed by class name
    // ResourceList<unsigned long, render::PixelShader, eastl::vector_map<unsigned long, shared_ptr<render::PixelShader>, eastl::less<unsigned long>, eastl::allocator, eastl::vector<eastl::pair<unsigned long, shared_ptr<render::PixelShader> >, eastl::allocator> > >::ResourceList(unsigned int)
    void jag::ResourceList<
        unsigned long, render::PixelShader,
        eastl::vector_map<
            unsigned long, shared_ptr<render::PixelShader>, eastl::less<unsigned long>, eastl::allocator,
            eastl::vector<eastl::pair<unsigned long, shared_ptr<render::PixelShader>>, eastl::allocator>>>::
        ResourceList(
            ResourceList<unsigned long, render::PixelShader,
                         eastl::vector_map<unsigned long, shared_ptr<render::PixelShader>, eastl::less<unsigned long>,
                                           eastl::allocator,
                                           eastl::vector<eastl::pair<unsigned long, shared_ptr<render::PixelShader>>,
                                                         eastl::allocator>>>* this,
            uint param_1) {
        new (this) std::mutex();
        new ((this + 64)) eastl::vector_map<
            unsigned long, shared_ptr<render::PixelShader>, eastl::less<unsigned long>, eastl::allocator,
            eastl::vector<eastl::pair<unsigned long, shared_ptr<render::PixelShader>>, eastl::allocator>>();
        SetCapacity(this, param_1);
    }

    // 0x100c38580, 96 bytes, inline, placed by class name
    // ResourceList<unsigned long, render::PixelShader, eastl::vector_map<unsigned long, shared_ptr<render::PixelShader>, eastl::less<unsigned long>, eastl::allocator, eastl::vector<eastl::pair<unsigned long, shared_ptr<render::PixelShader> >, eastl::allocator> > >::SetCapacity(unsigned int)
    void jag::ResourceList<
        unsigned long, render::PixelShader,
        eastl::vector_map<
            unsigned long, shared_ptr<render::PixelShader>, eastl::less<unsigned long>, eastl::allocator,
            eastl::vector<eastl::pair<unsigned long, shared_ptr<render::PixelShader>>, eastl::allocator>>>::
        SetCapacity(
            ResourceList<unsigned long, render::PixelShader,
                         eastl::vector_map<unsigned long, shared_ptr<render::PixelShader>, eastl::less<unsigned long>,
                                           eastl::allocator,
                                           eastl::vector<eastl::pair<unsigned long, shared_ptr<render::PixelShader>>,
                                                         eastl::allocator>>>* this,
            uint param_1) {
        scoped_lock<std::mutex> local_20[8];

        std::scoped_lock<std::mutex>::scoped_lock(local_20, (mutex*)this);
        ((this + 64))->reserve((ulong)param_1);
        std::scoped_lock<std::mutex>::~scoped_lock(local_20);
    }

    // 0x100c388c0, 16 bytes, complete-object constructor, inline, placed by class name
    // ResourceList<unsigned long, render::ComputeShader, eastl::vector_map<unsigned long, shared_ptr<render::ComputeShader>, eastl::less<unsigned long>, eastl::allocator, eastl::vector<eastl::pair<unsigned long, shared_ptr<render::ComputeShader> >, eastl::allocator> > >::ResourceList(unsigned int): jumps straight to the base-object constructor

    // 0x100c389a0, 16 bytes, complete-object destructor, inline, placed by class name
    // ResourceList<unsigned long, render::ComputeShader, eastl::vector_map<unsigned long, shared_ptr<render::ComputeShader>, eastl::less<unsigned long>, eastl::allocator, eastl::vector<eastl::pair<unsigned long, shared_ptr<render::ComputeShader> >, eastl::allocator> > >::~ResourceList(): jumps straight to the base-object destructor

    // 0x100c389b0, 48 bytes, base-object destructor, inline, placed by class name
    // ResourceList<unsigned long, render::ComputeShader, eastl::vector_map<unsigned long, shared_ptr<render::ComputeShader>, eastl::less<unsigned long>, eastl::allocator, eastl::vector<eastl::pair<unsigned long, shared_ptr<render::ComputeShader> >, eastl::allocator> > >::~ResourceList()
    void jag::ResourceList<
        unsigned long, render::ComputeShader,
        eastl::vector_map<
            unsigned long, shared_ptr<render::ComputeShader>, eastl::less<unsigned long>, eastl::allocator,
            eastl::vector<eastl::pair<unsigned long, shared_ptr<render::ComputeShader>>, eastl::allocator>>>::
        ~ResourceList(
            ResourceList<unsigned long, render::ComputeShader,
                         eastl::vector_map<unsigned long, shared_ptr<render::ComputeShader>, eastl::less<unsigned long>,
                                           eastl::allocator,
                                           eastl::vector<eastl::pair<unsigned long, shared_ptr<render::ComputeShader>>,
                                                         eastl::allocator>>>* this) {
        ((this + 64))->~vector_map();
        ~mutex();
    }

    // 0x100c38a40, 96 bytes, base-object constructor, inline, placed by class name
    // ResourceList<unsigned long, render::ComputeShader, eastl::vector_map<unsigned long, shared_ptr<render::ComputeShader>, eastl::less<unsigned long>, eastl::allocator, eastl::vector<eastl::pair<unsigned long, shared_ptr<render::ComputeShader> >, eastl::allocator> > >::ResourceList(unsigned int)
    void jag::ResourceList<
        unsigned long, render::ComputeShader,
        eastl::vector_map<
            unsigned long, shared_ptr<render::ComputeShader>, eastl::less<unsigned long>, eastl::allocator,
            eastl::vector<eastl::pair<unsigned long, shared_ptr<render::ComputeShader>>, eastl::allocator>>>::
        ResourceList(
            ResourceList<unsigned long, render::ComputeShader,
                         eastl::vector_map<unsigned long, shared_ptr<render::ComputeShader>, eastl::less<unsigned long>,
                                           eastl::allocator,
                                           eastl::vector<eastl::pair<unsigned long, shared_ptr<render::ComputeShader>>,
                                                         eastl::allocator>>>* this,
            uint param_1) {
        new (this) std::mutex();
        new ((this + 64)) eastl::vector_map<
            unsigned long, shared_ptr<render::ComputeShader>, eastl::less<unsigned long>, eastl::allocator,
            eastl::vector<eastl::pair<unsigned long, shared_ptr<render::ComputeShader>>, eastl::allocator>>();
        SetCapacity(this, param_1);
    }

    // 0x100c38ab0, 96 bytes, inline, placed by class name
    // ResourceList<unsigned long, render::ComputeShader, eastl::vector_map<unsigned long, shared_ptr<render::ComputeShader>, eastl::less<unsigned long>, eastl::allocator, eastl::vector<eastl::pair<unsigned long, shared_ptr<render::ComputeShader> >, eastl::allocator> > >::SetCapacity(unsigned int)
    void jag::ResourceList<
        unsigned long, render::ComputeShader,
        eastl::vector_map<
            unsigned long, shared_ptr<render::ComputeShader>, eastl::less<unsigned long>, eastl::allocator,
            eastl::vector<eastl::pair<unsigned long, shared_ptr<render::ComputeShader>>, eastl::allocator>>>::
        SetCapacity(
            ResourceList<unsigned long, render::ComputeShader,
                         eastl::vector_map<unsigned long, shared_ptr<render::ComputeShader>, eastl::less<unsigned long>,
                                           eastl::allocator,
                                           eastl::vector<eastl::pair<unsigned long, shared_ptr<render::ComputeShader>>,
                                                         eastl::allocator>>>* this,
            uint param_1) {
        scoped_lock<std::mutex> local_20[8];

        std::scoped_lock<std::mutex>::scoped_lock(local_20, (mutex*)this);
        ((this + 64))->reserve((ulong)param_1);
        std::scoped_lock<std::mutex>::~scoped_lock(local_20);
    }

    // 0x100c38e00, 16 bytes, complete-object constructor, inline, placed by class name
    // ResourceList<unsigned long, render::ShaderProgram, eastl::vector_map<unsigned long, shared_ptr<render::ShaderProgram>, eastl::less<unsigned long>, eastl::allocator, eastl::vector<eastl::pair<unsigned long, shared_ptr<render::ShaderProgram> >, eastl::allocator> > >::ResourceList(unsigned int): jumps straight to the base-object constructor

    // 0x100c38e60, 96 bytes, base-object constructor, inline, placed by class name
    // ResourceList<unsigned long, render::ShaderProgram, eastl::vector_map<unsigned long, shared_ptr<render::ShaderProgram>, eastl::less<unsigned long>, eastl::allocator, eastl::vector<eastl::pair<unsigned long, shared_ptr<render::ShaderProgram> >, eastl::allocator> > >::ResourceList(unsigned int)
    void jag::ResourceList<
        unsigned long, render::ShaderProgram,
        eastl::vector_map<
            unsigned long, shared_ptr<render::ShaderProgram>, eastl::less<unsigned long>, eastl::allocator,
            eastl::vector<eastl::pair<unsigned long, shared_ptr<render::ShaderProgram>>, eastl::allocator>>>::
        ResourceList(
            ResourceList<unsigned long, render::ShaderProgram,
                         eastl::vector_map<unsigned long, shared_ptr<render::ShaderProgram>, eastl::less<unsigned long>,
                                           eastl::allocator,
                                           eastl::vector<eastl::pair<unsigned long, shared_ptr<render::ShaderProgram>>,
                                                         eastl::allocator>>>* this,
            uint param_1) {
        new (this) std::mutex();
        new ((this + 64)) eastl::vector_map<
            unsigned long, shared_ptr<render::ShaderProgram>, eastl::less<unsigned long>, eastl::allocator,
            eastl::vector<eastl::pair<unsigned long, shared_ptr<render::ShaderProgram>>, eastl::allocator>>();
        SetCapacity(this, param_1);
    }

    // 0x100c38ed0, 96 bytes, inline, placed by class name
    // ResourceList<unsigned long, render::ShaderProgram, eastl::vector_map<unsigned long, shared_ptr<render::ShaderProgram>, eastl::less<unsigned long>, eastl::allocator, eastl::vector<eastl::pair<unsigned long, shared_ptr<render::ShaderProgram> >, eastl::allocator> > >::SetCapacity(unsigned int)
    void jag::ResourceList<
        unsigned long, render::ShaderProgram,
        eastl::vector_map<
            unsigned long, shared_ptr<render::ShaderProgram>, eastl::less<unsigned long>, eastl::allocator,
            eastl::vector<eastl::pair<unsigned long, shared_ptr<render::ShaderProgram>>, eastl::allocator>>>::
        SetCapacity(
            ResourceList<unsigned long, render::ShaderProgram,
                         eastl::vector_map<unsigned long, shared_ptr<render::ShaderProgram>, eastl::less<unsigned long>,
                                           eastl::allocator,
                                           eastl::vector<eastl::pair<unsigned long, shared_ptr<render::ShaderProgram>>,
                                                         eastl::allocator>>>* this,
            uint param_1) {
        scoped_lock<std::mutex> local_20[8];

        std::scoped_lock<std::mutex>::scoped_lock(local_20, (mutex*)this);
        ((this + 64))->reserve((ulong)param_1);
        std::scoped_lock<std::mutex>::~scoped_lock(local_20);
    }

    // 0x100c391d0, 16 bytes, complete-object destructor, inline, placed by class name
    // ResourceList<unsigned long, render::ShaderProgram, eastl::vector_map<unsigned long, shared_ptr<render::ShaderProgram>, eastl::less<unsigned long>, eastl::allocator, eastl::vector<eastl::pair<unsigned long, shared_ptr<render::ShaderProgram> >, eastl::allocator> > >::~ResourceList(): jumps straight to the base-object destructor

    // 0x100c391e0, 48 bytes, base-object destructor, inline, placed by class name
    // ResourceList<unsigned long, render::ShaderProgram, eastl::vector_map<unsigned long, shared_ptr<render::ShaderProgram>, eastl::less<unsigned long>, eastl::allocator, eastl::vector<eastl::pair<unsigned long, shared_ptr<render::ShaderProgram> >, eastl::allocator> > >::~ResourceList()
    void jag::ResourceList<
        unsigned long, render::ShaderProgram,
        eastl::vector_map<
            unsigned long, shared_ptr<render::ShaderProgram>, eastl::less<unsigned long>, eastl::allocator,
            eastl::vector<eastl::pair<unsigned long, shared_ptr<render::ShaderProgram>>, eastl::allocator>>>::
        ~ResourceList(
            ResourceList<unsigned long, render::ShaderProgram,
                         eastl::vector_map<unsigned long, shared_ptr<render::ShaderProgram>, eastl::less<unsigned long>,
                                           eastl::allocator,
                                           eastl::vector<eastl::pair<unsigned long, shared_ptr<render::ShaderProgram>>,
                                                         eastl::allocator>>>* this) {
        ((this + 64))->~vector_map();
        ~mutex();
    }

} // namespace jag

namespace jag::math {
    // 0x1001dacb0, 304 bytes, inline, placed by debug map only (low confidence)
    // Matrix33T<float> Matrix33RotationYawPitchRoll<float>(float, float, float)
    math* Matrix33RotationYawPitchRoll<float>(float param_1, float param_2, float param_3) {
        float fVar1;
        float fVar2;
        float fVar3;
        float fVar4;
        float fVar5;
        float fVar6;

        fVar1 = (float)::sin(param_3);
        fVar2 = (float)::cos(param_3);
        fVar3 = (float)::sin(param_2);
        fVar4 = (float)::cos(param_2);
        fVar5 = (float)::sin(param_1);
        fVar6 = (float)::cos(param_1);
        new (this) Matrix33T<float>(fVar6 * fVar2 + fVar5 * fVar3 * fVar1, fVar4 * fVar1,
                                    fVar3 * fVar1 * fVar6 - fVar5 * fVar2, fVar5 * fVar3 * fVar2 - fVar6 * fVar1,
                                    fVar2 * fVar4, fVar1 * fVar5 + fVar3 * fVar2 * fVar6, fVar5 * fVar4, -fVar3,
                                    fVar6 * fVar4);
        return this;
    }

    // 0x1001dade0, 128 bytes, inline, placed by debug map only (low confidence)
    // Matrix44T<float>& Matrix44View<float>(Matrix44T<float>&, Matrix33T<float> const&, Vector3T<float> const&)
    Matrix44T* Matrix44View<float>(Matrix44T* param_1, Matrix33T* param_2, Vector3T* param_3) {
        Matrix33T<float>* pMVar1;
        Matrix33T<float> local_70[40];
        undefined8 local_48[2];
        undefined8 local_38[2];

        Matrix33T<float>::Matrix33T(local_70);
        Matrix33Transpose<float>(local_70, param_2);
        pMVar1 = local_70;
        local_70->Orthonormalise(local_70);
        local_38[0] = operator-((math*)param_3, (Vector3T*)pMVar1);
        local_48[0] = operator*((Vector3T*)local_38, local_70);
        param_1->Set(local_70, local_48);
        return param_1;
    }

    // 0x1001dae80, 320 bytes, inline, placed by debug map only (low confidence)
    // Matrix33T<float>& Matrix33Transpose<float>(Matrix33T<float>&, Matrix33T<float> const&)
    Matrix33T* Matrix33Transpose<float>(Matrix33T* param_1, Matrix33T* param_2) {
        float fVar1;
        float fVar2;
        Vector3T<float>* pVVar3;
        float* pfVar4;
        long lVar5;

        pVVar3 = (Vector3T<float>*)Matrix33T<float>::operator[]((Matrix33T<float>*)param_1, 0);
        pfVar4 = (float*)Matrix33T<float>::operator[]((Matrix33T<float>*)param_2, 0);
        fVar1 = *pfVar4;
        pfVar4 = (float*)Matrix33T<float>::operator[]((Matrix33T<float>*)param_2, 1);
        fVar2 = *pfVar4;
        pfVar4 = (float*)Matrix33T<float>::operator[]((Matrix33T<float>*)param_2, 2);
        pVVar3->Set(fVar1, fVar2, *pfVar4);
        pVVar3 = (Vector3T<float>*)Matrix33T<float>::operator[]((Matrix33T<float>*)param_1, 1);
        lVar5 = Matrix33T<float>::operator[]((Matrix33T<float>*)param_2, 0);
        fVar1 = *(float*)(lVar5 + 4);
        lVar5 = Matrix33T<float>::operator[]((Matrix33T<float>*)param_2, 1);
        fVar2 = *(float*)(lVar5 + 4);
        lVar5 = Matrix33T<float>::operator[]((Matrix33T<float>*)param_2, 2);
        pVVar3->Set(fVar1, fVar2, *(float*)(lVar5 + 4));
        pVVar3 = (Vector3T<float>*)Matrix33T<float>::operator[]((Matrix33T<float>*)param_1, 2);
        lVar5 = Matrix33T<float>::operator[]((Matrix33T<float>*)param_2, 0);
        fVar1 = *(float*)(lVar5 + 8);
        lVar5 = Matrix33T<float>::operator[]((Matrix33T<float>*)param_2, 1);
        fVar2 = *(float*)(lVar5 + 8);
        lVar5 = Matrix33T<float>::operator[]((Matrix33T<float>*)param_2, 2);
        pVVar3->Set(fVar1, fVar2, *(float*)(lVar5 + 8));
        return param_1;
    }

    // 0x1001dafc0, 272 bytes, inline, placed by debug map only (low confidence)
    // Matrix33T<float>::Orthonormalise(Matrix33T<float> const&)
    Matrix33T<float>* Matrix33T<float>::Orthonormalise(Matrix33T* param_1) {
        Vector3T* pVVar2;
        Vector4T<float>* pVVar3;
        Vector3T<float>* pVVar4;
        Vector3T* pVVar5;
        vector* pvVar6;
        undefined8 local_30[2];

        pVVar2 = (Vector3T*)param_1->qw();
        pVVar3 = (Vector4T<float>*)qw();
        Vector4T<float>::SetXYZ(pVVar3, pVVar2);
        pVVar4 = (Vector3T<float>*)qw();
        pVVar4->Normalize();
        pVVar2 = (Vector3T*)qw();
        pVVar5 = (Vector3T*)param_1->second();
        local_30[0] = Vector3Cross<float>(pVVar2, pVVar5);
        pVVar2 = (Vector3T*)local_30->Normalize();
        pvVar6 = SSOBeginPtr(pVVar5);
        pvVar6->SetXYZ(pVVar2);
        pvVar6 = SSOBeginPtr(pVVar2);
        pVVar2 = (Vector3T*)qw();
        local_30[0] = Vector3Cross<float>((Vector3T*)pvVar6, pVVar2);
        pVVar3 = (Vector4T<float>*)second();
        Vector4T<float>::SetXYZ(pVVar3, (Vector3T*)local_30);
        pVVar4 = (Vector3T<float>*)second();
        if (pVVar4->IsNormal(1e-06) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("Look().IsNormal()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/matrix/Matrix33.inl",
                      249, (char*)0);
        }
        return this;
    }

    // 0x1001db0d0, 64 bytes, inline, placed by debug map only (low confidence)
    // Matrix33T<float>::operator[](unsigned int)
    Matrix33T<float>* Matrix33T<float>::operator[](uint param_1) {
        if (3 < param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("iRow <= M",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/matrix/Matrix33.inl",
                      281, (char*)0);
        }
        return this + (ulong)param_1 * 12;
    }

    // 0x1001db110, 16 bytes, inline, placed by debug map only (low confidence)
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // Matrix33T<float>::Up()
    /* QuaternionT<float>::qw() */

    QuaternionT<float>* QuaternionT<float>::qw() {
        return this + 12;
    }

    // 0x1001db120, 48 bytes, inline, placed by debug map only (low confidence)
    // Vector3T<float>::IsNormal(float) const
    bool Vector3T<float>::IsNormal(float param_1) {
        float fVar1;

        fVar1 = (float)LengthSq(this);
        fVar1 = (float)::abs(fVar1 + -1.0);
        return fVar1 < param_1;
    }

    // 0x1001db1c0, 240 bytes, inline, placed by debug map only (low confidence)
    // Matrix44T<float>& Matrix44PerspectiveFovLH<float>(Matrix44T<float>&, float, float, float, float, MATRIX_PROJECTION_RANGE)
    Matrix44T* Matrix44PerspectiveFovLH<float>(float param_2, float param_3, float param_4, float param_5,
                                               Matrix44T* param_1, int param_6) {
        float fVar1;
        float fVar2;
        float fVar3;
        float fVar4;

        fVar1 = (float)tan(param_2 * 0.5);
        fVar3 = 1.0;
        fVar2 = param_5 / (param_5 - param_4);
        fVar4 = fVar2;
        if (param_6 != 0) {
            fVar4 = (param_5 + param_4) / (param_5 - param_4);
            fVar3 = 2.0;
        }
        param_1->Set((1.0 / fVar1) / param_3, 0.0, 0.0, 0.0, 0.0, 1.0 / fVar1, 0.0, 0.0, 0.0, 0.0, fVar4, 1.0, 0.0, 0.0,
                     fVar2 * -param_4 * fVar3, 0.0);
        return param_1;
    }

} // namespace jag::math

// 0x1001dae60, 16 bytes, placed by debug map only (low confidence)
// sin(float)
void sin(float param_1) {
    _sinf();
}

// 0x1001dae70, 16 bytes, placed by debug map only (low confidence)
// cos(float)
void cos(float param_1) {
    _cosf();
}

// 0x1001db2b0, 64 bytes, placed by debug map only (low confidence)
// sqrt(float)
undefined8 sqrt(float param_1) {
    uint in_XMM0_Db;
    undefined4 in_XMM0_Dc;
    undefined4 in_XMM0_Dd;
    undefined1 in_XMM1[16];
    undefined1 auVar1[16];
    float fVar2;

    auVar1._4_4_ = in_XMM0_Db;
    auVar1._0_4_ = param_1;
    auVar1._8_4_ = in_XMM0_Dc;
    auVar1._12_4_ = in_XMM0_Dd;
    auVar1 = rsqrtss(in_XMM1, auVar1);
    fVar2 = param_1 * auVar1._0_4_;
    return CONCAT44(~(in_XMM0_Db & 2147483647) & in_XMM0_Db,
                    ~-(uint)(ABS(param_1) < 1.1754944e-38) & (uint)((fVar2 * auVar1._0_4_ + -3.0) * fVar2 * -0.5));
}

// 0x1001db2f0, 16 bytes, placed by debug map only (low confidence)
// tan(float)
void tan(float param_1) {
    _tanf();
}
