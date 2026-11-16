// libs/hal/render/shaders/ShaderManager.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::render {
    template <typename...> // 3 instantiations, e.g. <ComputeShader>, <PixelShader>, <VertexShader>
    class ShaderManager {
    public:
        void GetShaderCount();
        ShaderManager<VertexShader>* RegisterFromSourceString(unsigned long, char const*, unsigned char);
        ShaderManager<PixelShader>* RegisterFromSourceString(unsigned long, char const*, unsigned char);
        ShaderManager<ComputeShader>* RegisterFromSourceString(unsigned long, char const*, unsigned char);
        ShaderManager<VertexShader>* RegisterFromBinary(ShaderSource const&, unsigned long);
        ShaderManager<PixelShader>* RegisterFromBinary(ShaderSource const&, unsigned long);
        void Unregister(unsigned long, shared_ptr<ComputeShader>&);
        void Unregister(unsigned long, shared_ptr<PixelShader>&);
        void Unregister(unsigned long, shared_ptr<VertexShader>&);
        ShaderManager(unsigned int);
        ~ShaderManager();
    };

    // 0x1008a9190, 16 bytes, inline, placed by class name and debug map
    // ShaderManager<VertexShader>::GetShaderCount()
    /* ShaderManager<PixelShader>::GetShaderCount() */

    void ShaderManager<PixelShader>::GetShaderCount() {
        size();
    }

    // 0x100bef500, 256 bytes, inline, placed by class name and debug map
    // ShaderManager<VertexShader>::RegisterFromSourceString(unsigned long, char const*, unsigned char)
    ShaderManager<VertexShader>* ShaderManager<VertexShader>::RegisterFromSourceString(ulong param_1, char* param_2,
                                                                                       uchar param_3) {
        char cVar1;
        VertexShader* pVVar2;
        undefined8 uVar3;
        undefined7 in_register_00000009;
        uchar in_R8B;
        ResourceList<
            unsigned long, VertexShader,
            eastl::vector_map<unsigned long, shared_ptr<VertexShader>, eastl::less<unsigned long>, eastl::allocator,
                              eastl::vector<eastl::pair<unsigned long, shared_ptr<VertexShader>>, eastl::allocator>>>
            local_50[8];
        shared_ptr local_48;
        char* local_38;

        local_38 = param_2;
        ResourceList<
            unsigned long, VertexShader,
            eastl::vector_map<unsigned long, shared_ptr<VertexShader>, eastl::less<unsigned long>, eastl::allocator,
                              eastl::vector<eastl::pair<unsigned long, shared_ptr<VertexShader>>, eastl::allocator>>>::
            AddResource<>(local_50, (ulong*)param_1);
        if (local_50[0] ==
            (ResourceList<
                unsigned long, VertexShader,
                eastl::vector_map<
                    unsigned long, shared_ptr<VertexShader>, eastl::less<unsigned long>, eastl::allocator,
                    eastl::vector<eastl::pair<unsigned long, shared_ptr<VertexShader>>, eastl::allocator>>>)0) {
            pVVar2 = (VertexShader*)shared_ptr<VertexShader>::operator->((shared_ptr<VertexShader>*)&local_48);
            cVar1 = pVVar2->PrepareForReuse((char*)CONCAT71(in_register_00000009, param_3), in_R8B);
            if (cVar1 == '\0') {
                uVar3 = logger::default_logger();
                logger::Logger::Log(uVar3, 0, 2,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                    "shaders/ShaderManager.h",
                                    49, "Failed to prepare shader for sharing/re-use");
                /* WARNING: Subroutine does not return */
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                "shaders/ShaderManager.h",
                                50, (char*)0);
            }
        } else {
            pVVar2 = (VertexShader*)shared_ptr<VertexShader>::operator->((shared_ptr<VertexShader>*)&local_48);
            cVar1 = pVVar2->CreateFromSourceString((char*)CONCAT71(in_register_00000009, param_3), in_R8B);
            if (cVar1 == '\0') {
                param_1->EraseResource((ulong*)&local_38);
            }
        }
        new (this) shared_ptr<oldscape::dash3d::Decor>(&local_48);
        local_50->~pair();
        return this;
    }

    // 0x100bef6c0, 256 bytes, inline, placed by class name and debug map
    // ShaderManager<PixelShader>::RegisterFromSourceString(unsigned long, char const*, unsigned char)
    ShaderManager<PixelShader>* ShaderManager<PixelShader>::RegisterFromSourceString(ulong param_1, char* param_2,
                                                                                     uchar param_3) {
        char cVar1;
        PixelShader* pPVar2;
        undefined8 uVar3;
        undefined7 in_register_00000009;
        uchar in_R8B;
        ResourceList<
            unsigned long, PixelShader,
            eastl::vector_map<unsigned long, shared_ptr<PixelShader>, eastl::less<unsigned long>, eastl::allocator,
                              eastl::vector<eastl::pair<unsigned long, shared_ptr<PixelShader>>, eastl::allocator>>>
            local_50[8];
        shared_ptr local_48;
        char* local_38;

        local_38 = param_2;
        ResourceList<
            unsigned long, PixelShader,
            eastl::vector_map<unsigned long, shared_ptr<PixelShader>, eastl::less<unsigned long>, eastl::allocator,
                              eastl::vector<eastl::pair<unsigned long, shared_ptr<PixelShader>>, eastl::allocator>>>::
            AddResource<>(local_50, (ulong*)param_1);
        if (local_50[0] ==
            (ResourceList<
                unsigned long, PixelShader,
                eastl::vector_map<
                    unsigned long, shared_ptr<PixelShader>, eastl::less<unsigned long>, eastl::allocator,
                    eastl::vector<eastl::pair<unsigned long, shared_ptr<PixelShader>>, eastl::allocator>>>)0) {
            pPVar2 = (PixelShader*)shared_ptr<PixelShader>::operator->((shared_ptr<PixelShader>*)&local_48);
            cVar1 = pPVar2->PrepareForReuse((char*)CONCAT71(in_register_00000009, param_3), in_R8B);
            if (cVar1 == '\0') {
                uVar3 = logger::default_logger();
                logger::Logger::Log(uVar3, 0, 2,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                    "shaders/ShaderManager.h",
                                    49, "Failed to prepare shader for sharing/re-use");
                /* WARNING: Subroutine does not return */
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                "shaders/ShaderManager.h",
                                50, (char*)0);
            }
        } else {
            pPVar2 = (PixelShader*)shared_ptr<PixelShader>::operator->((shared_ptr<PixelShader>*)&local_48);
            cVar1 = pPVar2->CreateFromSourceString((char*)CONCAT71(in_register_00000009, param_3), in_R8B);
            if (cVar1 == '\0') {
                param_1->EraseResource((ulong*)&local_38);
            }
        }
        new (this) shared_ptr<oldscape::dash3d::Decor>(&local_48);
        local_50->~pair();
        return this;
    }

    // 0x100bef880, 256 bytes, inline, placed by class name and debug map
    // ShaderManager<ComputeShader>::RegisterFromSourceString(unsigned long, char const*, unsigned char)
    ShaderManager<ComputeShader>* ShaderManager<ComputeShader>::RegisterFromSourceString(ulong param_1, char* param_2,
                                                                                         uchar param_3) {
        char cVar1;
        ComputeShader* pCVar2;
        undefined8 uVar3;
        undefined7 in_register_00000009;
        uchar in_R8B;
        ResourceList<
            unsigned long, ComputeShader,
            eastl::vector_map<unsigned long, shared_ptr<ComputeShader>, eastl::less<unsigned long>, eastl::allocator,
                              eastl::vector<eastl::pair<unsigned long, shared_ptr<ComputeShader>>, eastl::allocator>>>
            local_50[8];
        shared_ptr local_48;
        char* local_38;

        local_38 = param_2;
        ResourceList<
            unsigned long, ComputeShader,
            eastl::vector_map<unsigned long, shared_ptr<ComputeShader>, eastl::less<unsigned long>, eastl::allocator,
                              eastl::vector<eastl::pair<unsigned long, shared_ptr<ComputeShader>>, eastl::allocator>>>::
            AddResource<>(local_50, (ulong*)param_1);
        if (local_50[0] ==
            (ResourceList<
                unsigned long, ComputeShader,
                eastl::vector_map<
                    unsigned long, shared_ptr<ComputeShader>, eastl::less<unsigned long>, eastl::allocator,
                    eastl::vector<eastl::pair<unsigned long, shared_ptr<ComputeShader>>, eastl::allocator>>>)0) {
            pCVar2 = (ComputeShader*)shared_ptr<ComputeShader>::operator->((shared_ptr<ComputeShader>*)&local_48);
            cVar1 = pCVar2->PrepareForReuse((char*)CONCAT71(in_register_00000009, param_3), in_R8B);
            if (cVar1 == '\0') {
                uVar3 = logger::default_logger();
                logger::Logger::Log(uVar3, 0, 2,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                    "shaders/ShaderManager.h",
                                    49, "Failed to prepare shader for sharing/re-use");
                /* WARNING: Subroutine does not return */
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                "shaders/ShaderManager.h",
                                50, (char*)0);
            }
        } else {
            pCVar2 = (ComputeShader*)shared_ptr<ComputeShader>::operator->((shared_ptr<ComputeShader>*)&local_48);
            cVar1 = pCVar2->CreateFromSourceString((char*)CONCAT71(in_register_00000009, param_3), in_R8B);
            if (cVar1 == '\0') {
                param_1->EraseResource((ulong*)&local_38);
            }
        }
        new (this) shared_ptr<oldscape::dash3d::Decor>(&local_48);
        local_50->~pair();
        return this;
    }

    // 0x100bf0130, 208 bytes, inline, placed by class name and debug map
    // ShaderManager<VertexShader>::RegisterFromBinary(ShaderSource const&, unsigned long)
    ShaderManager<VertexShader>* ShaderManager<VertexShader>::RegisterFromBinary(ShaderSource* param_1, ulong param_2) {
        char cVar1;
        VertexShader* this_00;
        Shader* this_01;
        ulong in_RCX;
        ResourceList<
            unsigned long, VertexShader,
            eastl::vector_map<unsigned long, shared_ptr<VertexShader>, eastl::less<unsigned long>, eastl::allocator,
                              eastl::vector<eastl::pair<unsigned long, shared_ptr<VertexShader>>, eastl::allocator>>>
            local_50[8];
        shared_ptr local_48;
        ulong local_38;

        local_38 = param_2->capacity();
        ResourceList<
            unsigned long, VertexShader,
            eastl::vector_map<unsigned long, shared_ptr<VertexShader>, eastl::less<unsigned long>, eastl::allocator,
                              eastl::vector<eastl::pair<unsigned long, shared_ptr<VertexShader>>, eastl::allocator>>>::
            AddResource<>(local_50, (ulong*)param_1);
        if (local_50[0] ==
            (ResourceList<
                unsigned long, VertexShader,
                eastl::vector_map<
                    unsigned long, shared_ptr<VertexShader>, eastl::less<unsigned long>, eastl::allocator,
                    eastl::vector<eastl::pair<unsigned long, shared_ptr<VertexShader>>, eastl::allocator>>>)0) {
            this_01 = (Shader*)shared_ptr<VertexShader>::operator->((shared_ptr<VertexShader>*)&local_48);
            this_01->WaitForAsyncCompile();
        } else {
            this_00 = (VertexShader*)shared_ptr<VertexShader>::operator->((shared_ptr<VertexShader>*)&local_48);
            cVar1 = this_00->CreateFromBinary(in_RCX);
            if (cVar1 == '\0') {
                local_38 = param_2->capacity();
                param_1->EraseResource(&local_38);
            }
        }
        new (this) shared_ptr<oldscape::dash3d::Decor>(&local_48);
        local_50->~pair();
        return this;
    }

    // 0x100bf0200, 208 bytes, inline, placed by class name and debug map
    // ShaderManager<PixelShader>::RegisterFromBinary(ShaderSource const&, unsigned long)
    ShaderManager<PixelShader>* ShaderManager<PixelShader>::RegisterFromBinary(ShaderSource* param_1, ulong param_2) {
        char cVar1;
        PixelShader* this_00;
        Shader* this_01;
        ulong in_RCX;
        ResourceList<
            unsigned long, PixelShader,
            eastl::vector_map<unsigned long, shared_ptr<PixelShader>, eastl::less<unsigned long>, eastl::allocator,
                              eastl::vector<eastl::pair<unsigned long, shared_ptr<PixelShader>>, eastl::allocator>>>
            local_50[8];
        shared_ptr local_48;
        ulong local_38;

        local_38 = param_2->capacity();
        ResourceList<
            unsigned long, PixelShader,
            eastl::vector_map<unsigned long, shared_ptr<PixelShader>, eastl::less<unsigned long>, eastl::allocator,
                              eastl::vector<eastl::pair<unsigned long, shared_ptr<PixelShader>>, eastl::allocator>>>::
            AddResource<>(local_50, (ulong*)param_1);
        if (local_50[0] ==
            (ResourceList<
                unsigned long, PixelShader,
                eastl::vector_map<
                    unsigned long, shared_ptr<PixelShader>, eastl::less<unsigned long>, eastl::allocator,
                    eastl::vector<eastl::pair<unsigned long, shared_ptr<PixelShader>>, eastl::allocator>>>)0) {
            this_01 = (Shader*)shared_ptr<PixelShader>::operator->((shared_ptr<PixelShader>*)&local_48);
            this_01->WaitForAsyncCompile();
        } else {
            this_00 = (PixelShader*)shared_ptr<PixelShader>::operator->((shared_ptr<PixelShader>*)&local_48);
            cVar1 = this_00->CreateFromBinary(in_RCX);
            if (cVar1 == '\0') {
                local_38 = param_2->capacity();
                param_1->EraseResource(&local_38);
            }
        }
        new (this) shared_ptr<oldscape::dash3d::Decor>(&local_48);
        local_50->~pair();
        return this;
    }

    // 0x100bf1030, 64 bytes, inline, placed by class name and debug map
    // ShaderManager<ComputeShader>::Unregister(unsigned long, shared_ptr<ComputeShader>&)
    void ShaderManager<ComputeShader>::Unregister(ulong param_1, shared_ptr* param_2) {
        ulong local_20;

        local_20 = param_1;
        if (shared_ptr::operator_cast_to_bool(param_2)) {
            ReleaseResource(&local_20, param_2);
        }
    }

    // 0x100bf1070, 64 bytes, inline, placed by class name and debug map
    // ShaderManager<PixelShader>::Unregister(unsigned long, shared_ptr<PixelShader>&)
    void ShaderManager<PixelShader>::Unregister(ulong param_1, shared_ptr* param_2) {
        ulong local_20;

        local_20 = param_1;
        if (shared_ptr::operator_cast_to_bool(param_2)) {
            ReleaseResource(&local_20, param_2);
        }
    }

    // 0x100bf10b0, 64 bytes, inline, placed by class name and debug map
    // ShaderManager<VertexShader>::Unregister(unsigned long, shared_ptr<VertexShader>&)
    void ShaderManager<VertexShader>::Unregister(ulong param_1, shared_ptr* param_2) {
        ulong local_20;

        local_20 = param_1;
        if (shared_ptr::operator_cast_to_bool(param_2)) {
            ReleaseResource(&local_20, param_2);
        }
    }

    // 0x100c37db0, 16 bytes, complete-object constructor, inline, placed by class name
    // ShaderManager<VertexShader>::ShaderManager(unsigned int): jumps straight to the base-object constructor

    // 0x100c37dd0, 64 bytes, base-object constructor, inline, placed by class name
    // ShaderManager<VertexShader>::ShaderManager(unsigned int)
    void ShaderManager<VertexShader>::ShaderManager(uint param_1) {
        new (this) Singleton<ShaderManager<VertexShader>>();
        new (this) ResourceList<
            unsigned long, VertexShader,
            eastl::vector_map<unsigned long, shared_ptr<VertexShader>, eastl::less<unsigned long>, eastl::allocator,
                              eastl::vector<eastl::pair<unsigned long, shared_ptr<VertexShader>>, eastl::allocator>>>(
            param_1);
    }

    // 0x100c37f10, 16 bytes, complete-object destructor, inline, placed by class name
    // ShaderManager<VertexShader>::~ShaderManager(): jumps straight to the base-object destructor

    // 0x100c37f20, 32 bytes, base-object destructor, inline, placed by class name
    // ShaderManager<VertexShader>::~ShaderManager()
    void ShaderManager<VertexShader>::~ShaderManager() {
        ~ResourceList();
        ~AutoSingleton();
    }

    // 0x100c382e0, 16 bytes, complete-object constructor, inline, placed by class name
    // ShaderManager<PixelShader>::ShaderManager(unsigned int): jumps straight to the base-object constructor

    // 0x100c38300, 64 bytes, base-object constructor, inline, placed by class name
    // ShaderManager<PixelShader>::ShaderManager(unsigned int)
    void ShaderManager<PixelShader>::ShaderManager(uint param_1) {
        new (this) Singleton<ShaderManager<PixelShader>>();
        new (this) ResourceList<
            unsigned long, PixelShader,
            eastl::vector_map<unsigned long, shared_ptr<PixelShader>, eastl::less<unsigned long>, eastl::allocator,
                              eastl::vector<eastl::pair<unsigned long, shared_ptr<PixelShader>>, eastl::allocator>>>(
            param_1);
    }

    // 0x100c38440, 16 bytes, complete-object destructor, inline, placed by class name
    // ShaderManager<PixelShader>::~ShaderManager(): jumps straight to the base-object destructor

    // 0x100c38450, 32 bytes, base-object destructor, inline, placed by class name
    // ShaderManager<PixelShader>::~ShaderManager()
    void ShaderManager<PixelShader>::~ShaderManager() {
        ~ResourceList();
        ~AutoSingleton();
    }

    // 0x100c38810, 16 bytes, complete-object constructor, inline, placed by class name
    // ShaderManager<ComputeShader>::ShaderManager(unsigned int): jumps straight to the base-object constructor

    // 0x100c38830, 64 bytes, base-object constructor, inline, placed by class name
    // ShaderManager<ComputeShader>::ShaderManager(unsigned int)
    void ShaderManager<ComputeShader>::ShaderManager(uint param_1) {
        new (this) Singleton<ShaderManager<ComputeShader>>();
        new (this) ResourceList<
            unsigned long, ComputeShader,
            eastl::vector_map<unsigned long, shared_ptr<ComputeShader>, eastl::less<unsigned long>, eastl::allocator,
                              eastl::vector<eastl::pair<unsigned long, shared_ptr<ComputeShader>>, eastl::allocator>>>(
            param_1);
    }

    // 0x100c38970, 16 bytes, complete-object destructor, inline, placed by class name
    // ShaderManager<ComputeShader>::~ShaderManager(): jumps straight to the base-object destructor

    // 0x100c38980, 32 bytes, base-object destructor, inline, placed by class name
    // ShaderManager<ComputeShader>::~ShaderManager()
    void ShaderManager<ComputeShader>::~ShaderManager() {
        ~ResourceList();
        ~AutoSingleton();
    }

} // namespace jag::render
