// libs/graphics/runetek7/materials/shaders/ShaderManager.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "ShaderManager.h"

namespace jag::graphics {
    // 0x10016b4a0: the linker folded this into oldscape::rs2lib::worldmap::WorldmapAreaMetadata::GetAdvisedZoom() const, which has identical code
    ShaderManager::UniqueShaderCount() const;

    // 0x1008908a0, 272 bytes, base-object constructor, placed by class name
    // ShaderManager::ShaderManager(unsigned long)
    void ShaderManager::ShaderManager(ulong param_1) {
        char* pcVar1;
        allocator local_40[8];
        vector<shared_ptr<Shader>, eastl::allocator>* local_38;

        new (this)
            eastl::vector_map<unsigned long long, shared_ptr<Shader>, eastl::less<unsigned long long>, eastl::allocator,
                              eastl::vector<eastl::pair<unsigned long long, shared_ptr<Shader>>, eastl::allocator>>();
        local_38 = (vector<shared_ptr<Shader>, eastl::allocator>*)&field_40;
        eastl::vector<shared_ptr<Shader>, eastl::allocator>::vector(local_38);
        field_76 = 0;
        field_80 = 0;
        new (&field_88) eastl::vector<ShaderPermutation, eastl::allocator>();
        field_120 = 0;
        eastl::allocator::allocator(local_40, "EASTL basic_string");
        pcVar1 = "PgEAAAAAXZ3bawAAAUgFgADwCAaEKAQFABAAzBL7EgUAAIAA*"
                 "BsGriAEBQIQAIrylkIKAACAAPAKBq4qBAUAEACK8pZCBgAAgAD4GgbuIAQFAhAAivKWQgAAAIAA*"
                 "BsG7qoFBQIQAIrylkIAAACAAPgKBq6oBQUCEACK8pZCtgAAgAD4Ggbu6AUFAhAAivKWQj4AAIAA*"
                 "AoG6iAEhQIQAIrylkIEAACAAPgbBq7oFQUCEACK8pZCRAAAgAD4CwauqBUFAhAAivKWQiAAAIAA8AoGrioUBQAQAIrylkIGAACAAP"
                 "gbBu6gBQUCEACK8pZCAAAAgAD4GwauIBQFAhAAivKWQgcAAIAA*"
                 "AoGruAUBQIQAIrylkIxAACAAPgaBq5oBQUCEACK8pZCtgAAgAD4GgbuoAQFAhAAivKWQjAAAIAA*"
                 "AsGruAVBQIQAIrylkIgAACAAPgbBq6gBQUCEACK8pZCDQAAgAD4CgbuqgUFAhAAivKWQgAABAAABAgAhAAAAQAAADGldNYvAACAAP"
                 "gbBq6qBQUCEACK8pZCCAAAgAD4GgauoAQFAhAAivKWQj4AAIAA8AoG7iAFBQAQAIrylkIGAACAAPAKBu4qBAUAEACK8pZCBQAAgAD"
                 "wCwauIBUFABAAivKWQiYAAIAA*"
                 "BoG7igFBQIQAIrylkIvAACAAPAKBq4gBQUAEACK8pZCTgAAgAD4Ggbu6AQFAhAAivKWQj4AAIAA*"
                 "AoGriAVBQIQAIrylkIWAACAAPgaBq4oBAUCEACK8pZCTAAAgAD4GwbuIAQFAhAAivKWQgMAAIAA*"
                 "AsGrqAFBQIQAIrylkIeAACAAPgKBqoqBIUCEACK8pZCAAAAgADwCgauIAQFABAAivKWQjcAAAAA8AoAAKAADQAAAIrylkIDAACAAP"
                 "gbBq6gFAUCEACK8pZCBgAAgADwCwbuoAUFABAAivKWQgUAAIAA*"
                 "AsGrqAUBQIQAIrylkIpAACAAPgKBqoqFIUCEACK8pZCAAAAgAD4CgbuoAQFAhAAivKWQi8AAIAA*"
                 "AoG6qoFhQIQAIrylkIAAACAAPgLBu6gFQUCEACK8pZCAAAAgAD4Ggbu4AQFAhAAivKWQjAAAIAA8AoGriAUBQAQAIrylkK2AACAAP"
                 "gaBu6oBAUCEACK8pZCMAAAgAD4CgaqIBWFAhAAivKWQhMACYAAQBgGhAAEAcJ2AL-"
                 "7ZmoNAACAAPgLBu4oBAUCEACK8pZCEwAAgADwCwauIBQFABAAivKWQkMAAIAA*"
                 "BoGriAEBQIQAIrylkIfAACAAPALBu4qBAUAEACK8pZCBQADAAAAAAAAAhABAAAAivKWQgAAAIAA*"
                 "AsGrugEBQIQAIrylkJMAACAAPgKBu5gBAUCEACK8pZCMQAAgADwCgbu4AQFABAAivKWQi8AAIAA*"
                 "AoG6qAEhQIQAIrylkIHAACAAPgKBqqqBYUCEACK8pZCBAAAgAD4CwauoBUFAhAAivKWQgAAAIAA*"
                 "BoGriAVBQIQAIrylkIYAACAAPgKBurgBYUCEACK8pZCHwAAgAD4Cgaq4FWFAhAAivKWQkkAAIAA*"
                 "AoG7ioFBQIQAIrylkIGAACAAPgKBuroBIUCEACK8pZCFgAAgADwCwauoBUFABAAivKWQgYABYAA*BgGhGgEBQIQAMwS*"
                 "xIAAAqAAAAIAoRAAAECWABbPrREAAAAgAD4Cwbu6AQFAhAAivKWQkoAAIAA*"
                 "AoGrqAVBQIQAIrylkIAAACAAPALBq4qBAUAEACK8pZCBgAAgADwCwbu4AUFABAAivKWQh8AAIAA*"
                 "BoG7iAFBQIQAIrylkIBAACAAPgLBq7gFAUCEACK8pZCKQAAgAD4Cgbq6AWFAhAAivKWQj4AAIAA*"
                 "AsGriAVBQIQAIrylkIjAACAAPgKBq6oFAUCEACK8pZCRQAAgADwCgbuIBQFABAAivKWQi8AAIAA*"
                 "AoG7qAVBQIQAIrylkIxAACAAPgKBq6oBAUCEACK8pZCPgAAgAD4CwbuqAQFAhAAivKWQhMAAIAA*AsGrqgFBQIQAIrylkJIAACA.."
                 "." /* TRUNCATED STRING LITERAL */
            ;
        new (
            &field_128,
            "PgEAAAAAXZ3bawAAAUgFgADwCAaEKAQFABAAzBL7EgUAAIAA*"
            "BsGriAEBQIQAIrylkIKAACAAPAKBq4qBAUAEACK8pZCBgAAgAD4GgbuIAQFAhAAivKWQgAAAIAA*"
            "BsG7qoFBQIQAIrylkIAAACAAPgKBq6oBQUCEACK8pZCtgAAgAD4Ggbu6AUFAhAAivKWQj4AAIAA*"
            "AoG6iAEhQIQAIrylkIEAACAAPgbBq7oFQUCEACK8pZCRAAAgAD4CwauqBUFAhAAivKWQiAAAIAA8AoGrioUBQAQAIrylkIGAACAAPgbBu6"
            "gBQUCEACK8pZCAAAAgAD4GwauIBQFAhAAivKWQgcAAIAA*"
            "AoGruAUBQIQAIrylkIxAACAAPgaBq5oBQUCEACK8pZCtgAAgAD4GgbuoAQFAhAAivKWQjAAAIAA*"
            "AsGruAVBQIQAIrylkIgAACAAPgbBq6gBQUCEACK8pZCDQAAgAD4CgbuqgUFAhAAivKWQgAABAAABAgAhAAAAQAAADGldNYvAACAAPgbBq6"
            "qBQUCEACK8pZCCAAAgAD4GgauoAQFAhAAivKWQj4AAIAA8AoG7iAFBQAQAIrylkIGAACAAPAKBu4qBAUAEACK8pZCBQAAgADwCwauIBUFA"
            "BAAivKWQiYAAIAA*BoG7igFBQIQAIrylkIvAACAAPAKBq4gBQUAEACK8pZCTgAAgAD4Ggbu6AQFAhAAivKWQj4AAIAA*"
            "AoGriAVBQIQAIrylkIWAACAAPgaBq4oBAUCEACK8pZCTAAAgAD4GwbuIAQFAhAAivKWQgMAAIAA*"
            "AsGrqAFBQIQAIrylkIeAACAAPgKBqoqBIUCEACK8pZCAAAAgADwCgauIAQFABAAivKWQjcAAAAA8AoAAKAADQAAAIrylkIDAACAAPgbBq6"
            "gFAUCEACK8pZCBgAAgADwCwbuoAUFABAAivKWQgUAAIAA*"
            "AsGrqAUBQIQAIrylkIpAACAAPgKBqoqFIUCEACK8pZCAAAAgAD4CgbuoAQFAhAAivKWQi8AAIAA*"
            "AoG6qoFhQIQAIrylkIAAACAAPgLBu6gFQUCEACK8pZCAAAAgAD4Ggbu4AQFAhAAivKWQjAAAIAA8AoGriAUBQAQAIrylkK2AACAAPgaBu6"
            "oBAUCEACK8pZCMAAAgAD4CgaqIBWFAhAAivKWQhMACYAAQBgGhAAEAcJ2AL-"
            "7ZmoNAACAAPgLBu4oBAUCEACK8pZCEwAAgADwCwauIBQFABAAivKWQkMAAIAA*"
            "BoGriAEBQIQAIrylkIfAACAAPALBu4qBAUAEACK8pZCBQADAAAAAAAAAhABAAAAivKWQgAAAIAA*"
            "AsGrugEBQIQAIrylkJMAACAAPgKBu5gBAUCEACK8pZCMQAAgADwCgbu4AQFABAAivKWQi8AAIAA*"
            "AoG6qAEhQIQAIrylkIHAACAAPgKBqqqBYUCEACK8pZCBAAAgAD4CwauoBUFAhAAivKWQgAAAIAA*"
            "BoGriAVBQIQAIrylkIYAACAAPgKBurgBYUCEACK8pZCHwAAgAD4Cgaq4FWFAhAAivKWQkkAAIAA*"
            "AoG7ioFBQIQAIrylkIGAACAAPgKBuroBIUCEACK8pZCFgAAgADwCwauoBUFABAAivKWQgYABYAA*BgGhGgEBQIQAMwS*"
            "xIAAAqAAAAIAoRAAAECWABbPrREAAAAgAD4Cwbu6AQFAhAAivKWQkoAAIAA*"
            "AoGrqAVBQIQAIrylkIAAACAAPALBq4qBAUAEACK8pZCBgAAgADwCwbu4AUFABAAivKWQh8AAIAA*"
            "BoG7iAFBQIQAIrylkIBAACAAPgLBq7gFAUCEACK8pZCKQAAgAD4Cgbq6AWFAhAAivKWQj4AAIAA*"
            "AsGriAVBQIQAIrylkIjAACAAPgKBq6oFAUCEACK8pZCRQAAgADwCgbuIBQFABAAivKWQi8AAIAA*"
            "AoG7qAVBQIQAIrylkIxAACAAPgKBq6oBAUCEACK8pZCPgAAgAD4CwbuqAQFAhAAivKWQhMAAIAA*AsGrqgFBQIQAIrylkJIAACA..." /* TRUNCATED STRING LITERAL */
            ,
            local_40) eastl::string();
        new (field_160, (_func_decltype_nullptr*)pcVar1) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        field_176 = (EffectManager*)0;
        reserve(param_1);
        eastl::vector<shared_ptr<Shader>, eastl::allocator>::reserve(local_38, param_1);
        (&field_88, param_1)->reserve();
    }

    // 0x100890aa0, 16 bytes, complete-object constructor, placed by class name
    // ShaderManager::ShaderManager(unsigned long): jumps straight to the base-object constructor

    // 0x100890ab0, 16 bytes, placed by class name
    // ShaderManager::Initialise(EffectManager const*)
    void ShaderManager::Initialise(EffectManager* param_1) {
        field_176 = param_1;
    }

    // 0x100890ac0, 224 bytes, placed by class name
    // ShaderManager::InitialisePreloadFromDisk(SystemSettings*)
    void ShaderManager::InitialisePreloadFromDisk(SystemSettings* param_1) {
        long lVar1;
        shared_ptr local_168;
        Filename local_158[19];
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        Filename::Filename(local_158, "ShaderManager");
        lVar1 = param_1->GetSpritesArchive();
        local_168.NewFileSystem(local_158, 0, *(undefined8*)(lVar1 + 16), 0);
        shared_ptr<FileSystem>::operator=((shared_ptr<FileSystem>*)field_160, &local_168);
        local_168.~shared_ptr();
        local_158->~pair();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100890ba0, 400 bytes, placed by class name
    // ShaderManager::Destroy()
    void ShaderManager::Destroy() {
        char cVar2;
        FileSystem* this_00;
        Array* pAVar3;
        PacketT<Array<unsigned char, BucketAllocatorEASTL>> local_1e8[32];
        function local_1c8[48];
        function local_198[48];
        Filename local_168[19];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if (field_160->operator_cast_to_bool()) {
            cVar2 = empty();
            if (cVar2 == '\0') {
                PacketT<Array<unsigned char, BucketAllocatorEASTL>>::PacketT(local_1e8);
                SerialisePermutations(this, (PacketT*)local_1e8);
                this_00 = (FileSystem*)shared_ptr<FileSystem>::operator->((shared_ptr<FileSystem>*)field_160);
                Filename::Filename(local_168, "PreloadList");
                pAVar3 = (Array*)local_1e8->GetDataArrayPtr();
                std::function<void(Filename_const&)>::function<ShaderManager::Destroy()::__0, void>(local_198);
                std::function<void(Filename_const&, int, eastl::stringconst&)>::function<ShaderManager::Destroy()::__1,
                                                                                         void>(local_1c8);
                this_00->WriteFile(local_168, pAVar3, false, local_198, local_1c8);
                std::function<void(Filename_const&, int, eastl::stringconst&)>::~function(
                    (function<void(Filename_const&, int, eastl::stringconst&)>*)local_1c8);
                std::function<void(Filename_const&)>::~function((function<void(Filename_const&)>*)local_198);
                local_168->~pair();
                local_1e8->~PacketT();
            }
        }
        DestroyRenderingResources(this);
        Clear(this);
        shared_ptr<FileSystem>::reset();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100890d30, 640 bytes, placed by class name
    // ShaderManager::SerialisePermutations(PacketT<Array<unsigned char, BucketAllocatorEASTL> >&) const
    void ShaderManager::SerialisePermutations(PacketT* param_1) {
        shared_ptr<Shader>* this_00;
        undefined8 uVar1;
        PacketT* this_01;
        undefined1 uVar2;
        bool bVar3;
        uint uVar4;
        int iVar5;
        ulong uVar6;
        long lVar7;
        long lVar8;
        GeometryBatchInstance* pGVar9;
        compressed_pair_imp<eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                                    eastl::allocator>>::Layout,
                            eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>* this_02;
        WorldmapAreaMetadata* this_03;
        VertexDeclarationManager* this_04;
        long lVar10;
        ShaderProgram* this_05;
        undefined1* puVar11;
        CoordMapSquare* this_06;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                            0>* this_07;
        Layout* this_08;
        vector* pvVar12;
        longlong lVar13;
        ShaderPermutation* pSVar14;
        ShaderPermutation* pSVar15;
        type* ptVar16;
        float fVar17;
        PacketT<Array<unsigned char, BucketAllocatorEASTL>> local_78[32];
        PacketT* local_58;
        vector<ShaderPermutation, BucketAllocatorEASTL> local_50[24];
        float local_38;
        float local_34;

        local_58 = param_1;
        eastl::vector<ShaderPermutation, BucketAllocatorEASTL>::vector();
        uVar6 = size();
        eastl::vector<ShaderPermutation, BucketAllocatorEASTL>::reserve(local_50, uVar6);
        local_38 = (float)FrameTime::GetSecondsSinceProgramStart();
        lVar7 = HeapBeginPtr();
        lVar8 = end();
        do {
            if (lVar7 == lVar8) {
                lVar7 = local_50->size();
                PacketT<Array<unsigned char, BucketAllocatorEASTL>>::PacketT(local_78, lVar7 * 23 + 14);
                this_01 = local_58;
                PacketT<Array<unsigned char, BucketAllocatorEASTL>>::operator=(
                    (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)local_58, (PacketT*)local_78);
                local_78->~PacketT();
                PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<oldscape::shared::LoginProt::ID>(
                    (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this_01, 64);
                PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<oldscape::shared::LoginProt::ID>(
                    (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this_01, 3);
                lVar13 = datetools::GetCompilationDate();
                PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p8<long long>(
                    (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this_01, lVar13);
                iVar5 = local_50->size();
                PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p4<int>(
                    (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this_01, iVar5);
                bVar3 = (bool)IsBigEndian();
                new (local_78) DataSerialise<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>(this_01, bVar3);
                pSVar14 = (ShaderPermutation*)local_50->HeapBeginPtr();
                pSVar15 = (ShaderPermutation*)local_50->end();
                if (pSVar14 != pSVar15) {
                    do {
                        operator<<((DataSerialise*)local_78, pSVar14);
                        pSVar14 = pSVar14 + 2;
                    } while (pSVar14 != pSVar15);
                }
                eastl::vector<ShaderPermutation, BucketAllocatorEASTL>::~vector(local_50);
                return;
            }
            this_00 = (shared_ptr<Shader>*)(lVar7 + 8);
            pGVar9 = (GeometryBatchInstance*)shared_ptr<Shader>::operator->(this_00);
            this_02 =
                (compressed_pair_imp<eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                                             eastl::allocator>>::Layout,
                                     eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>*)
                    pGVar9->GetMaterial();
            this_03 = (WorldmapAreaMetadata*)eastl::compressed_pair_imp<
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::Layout,
                eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>::second(this_02);
            uVar4 = this_03->GetMinMapX();
            ptVar16 = (type*)(ulong)uVar4;
            this_04 = (VertexDeclarationManager*)this_03->Instance();
            lVar10 = this_04->GetVertexDeclaration(uVar4);
            if (lVar10 != 0) {
                pGVar9 = (GeometryBatchInstance*)shared_ptr<Shader>::operator->(this_00);
                this_05 = (ShaderProgram*)pGVar9->GetMaterial();
                fVar17 = (float)this_05->GetLastUsedTimeSeconds();
                fVar17 = local_38 - fVar17;
                if (fVar17 <= 43200.0) {
                    local_34 = fVar17;
                    if (fVar17 < 0.0) {
                        /* WARNING: Subroutine does not return */
                        LogAssert("secondsSinceLastUsed >= 0.0f",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                  "runetek7/materials/shaders/ShaderManager.cpp",
                                  612, "We shouldn\'t have any shaders that have last been used in the future...");
                    }
                    puVar11 = (undefined1*)eastl::vector<ShaderPermutation, BucketAllocatorEASTL>::push_back(local_50);
                    this_06 = (CoordMapSquare*)shared_ptr<Shader>::operator->(this_00);
                    uVar2 = this_06->GetX();
                    *puVar11 = uVar2;
                    this_07 =
                        (compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                             eastl::allocator, 0>*)shared_ptr<Shader>::operator->(this_00);
                    this_08 = (Layout*)eastl::compressed_pair_imp<
                        std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                        0>::second(this_07);
                    pvVar12 = eastl::string::Layout::SSOBeginPtr(this_08, ptVar16);
                    uVar1 = *(undefined8*)(pvVar12 + 8);
                    *(undefined8*)(puVar11 + 8) = *(undefined8*)pvVar12;
                    *(undefined8*)(puVar11 + 16) = uVar1;
                    *(uint*)(puVar11 + 24) = uVar4;
                    *(short*)(puVar11 + 28) = (short)(int)local_34;
                }
            }
            lVar7 = lVar7 + 24;
        } while (true);
    }

    // 0x100890fd0, 112 bytes, placed by class name
    // ShaderManager::DestroyRenderingResources()
    void ShaderManager::DestroyRenderingResources() {
        long lVar1;
        long lVar2;
        Shader* this_00;

        lVar1 = HeapBeginPtr();
        lVar2 = end();
        for (; lVar1 != lVar2; lVar1 = lVar1 + 24) {
            this_00 = (Shader*)shared_ptr<Shader>::operator->((shared_ptr<Shader>*)(lVar1 + 8));
            this_00->DestroyProgram();
        }
        (&field_40)->clear();
        field_76 = 0;
    }

    // 0x100891040, 144 bytes, placed by class name
    // ShaderManager::Clear()
    void ShaderManager::Clear() {
        char cVar1;
        long lVar2;
        long lVar3;

        clear();
        (&field_40)->clear();
        field_76 = 0;
        lVar2 = HeapBeginPtr();
        lVar3 = end();
        while (true) {
            if (lVar2 == lVar3) {
                return;
            }
            cVar1 = ((lVar2 + 8))->unique();
            if (cVar1 == '\0')
                break;
            lVar2 = lVar2 + 24;
        }
        /* WARNING: Subroutine does not return */
        LogAssert("shader.second.unique()",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/materials/"
                  "shaders/ShaderManager.cpp",
                  74, (char*)0);
    }

    // 0x1008910d0, 224 bytes, placed by class name
    // ShaderManager::GetShader(ShaderType, EffectManager const&, EffectList const&, render::VertexDeclaration const&, unsigned char, RenderPassType)
    void ShaderManager::GetShader(uint param_2, undefined8 param_3, EffectList* param_4, WorldmapAreaMetadata* param_5,
                                  undefined1 param_6, undefined4 param_7) {
        undefined4 uVar2;
        ulong uVar3;
        shared_ptr* this_00;
        ulong local_40;
        ulong local_38;

        local_40 = 0;
        uVar3 = param_4->GetEffectListHash();
        hash_combine(&local_40, uVar3);
        hash_combine(&local_40, (ulong)param_2);
        uVar2 = param_5->GetMinMapX();
        local_38 = CONCAT44(local_38._4_4_, uVar2);
        hash_combine<unsigned int>(&local_40, (uint*)&local_38);
        local_38 = local_40;
        this_00 = (shared_ptr*)
            eastl::vector_map<unsigned long long, shared_ptr<Shader>, eastl::less<unsigned long long>, eastl::allocator,
                              eastl::vector<eastl::pair<unsigned long long, shared_ptr<Shader>>, eastl::allocator>>::
            operator[](
                (vector_map<unsigned long long, shared_ptr<Shader>, eastl::less<unsigned long long>, eastl::allocator,
                            eastl::vector<eastl::pair<unsigned long long, shared_ptr<Shader>>, eastl::allocator>>*)this,
                &local_38);
        if (shared_ptr::operator_cast_to_bool(this_00)) {
            local_38 = local_40;
            eastl::vector_map<unsigned long long, shared_ptr<Shader>, eastl::less<unsigned long long>, eastl::allocator,
                              eastl::vector<eastl::pair<unsigned long long, shared_ptr<Shader>>, eastl::allocator>>::
            operator[](
                (vector_map<unsigned long long, shared_ptr<Shader>, eastl::less<unsigned long long>, eastl::allocator,
                            eastl::vector<eastl::pair<unsigned long long, shared_ptr<Shader>>, eastl::allocator>>*)this,
                &local_38);
        } else {
            LoadShader(this, param_2, param_3, param_4, param_5, local_40, param_6, param_7);
        }
    }

    // 0x100891280, 688 bytes, placed by class name
    // ShaderManager::LoadShader(ShaderType, EffectManager const&, EffectList const&, render::VertexDeclaration const&, unsigned long long, unsigned char, RenderPassType)
    shared_ptr* ShaderManager::LoadShader(graphics* param_2, EffectManager* param_3, EffectList* param_4,
                                          VertexDeclaration* param_5, ulonglong param_6, uchar param_7,
                                          RenderPassType param_8) {
        bool bVar1;
        ShaderManager* this_00;
        bool bVar2;
        char cVar3;
        unique_ptr<ShaderSource, std::default_delete<ShaderSource>>* this_01;
        long* plVar4;
        long lVar5;
        char* pcVar6;
        ulong uVar7;
        long lVar8;
        FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 16192>::RefCounterAndData,
                 unsigned long>* this_02;
        shared_ptr<Shader>* psVar9;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                            0>* this_03;
        EffectList* this_04;
        Shader* this_05;
        ShaderProgram* pSVar10;
        shared_ptr* psVar11;
        basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>> local_b0[24];
        basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>> local_98[24];
        VertexDeclaration* local_80;
        shared_ptr* local_78;
        EffectManager* local_70;
        ulonglong local_68;
        HashedString local_60;
        EffectList* local_50;
        ulong local_48;
        ShaderManager* local_40;
        undefined4 local_34;

        local_68 = param_6;
        local_40 = this;
        local_34 = param_2._0_4_;
        this_01 = (unique_ptr<ShaderSource, std::default_delete<ShaderSource>>*)graphics::operator*(param_2._0_4_);
        plVar4 = (long*)std::unique_ptr<ShaderSource, std::default_delete<ShaderSource>>::operator*(this_01);
        (**(code**)(*plVar4 + 16))(local_b0, plVar4, param_3, param_4);
        lVar5 = graphics::operator*(local_34);
        plVar4 = (long*)std::unique_ptr<ShaderSource, std::default_delete<ShaderSource>>::operator*(
            (unique_ptr<ShaderSource, std::default_delete<ShaderSource>>*)(lVar5 + 8));
        local_70 = param_3;
        local_50 = param_4;
        (**(code**)(*plVar4 + 16))(local_98, plVar4, param_3, param_4);
        local_48 = 0;
        pcVar6 = (char*)std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>::c_str(local_b0);
        new (&local_60) HashedString(pcVar6);
        local_80 = param_5;
        uVar7 = local_60.end();
        hash_combine(&local_48, uVar7);
        pcVar6 = (char*)std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>::c_str(local_98);
        new (&local_60) HashedString(pcVar6);
        uVar7 = local_60.end();
        hash_combine(&local_48, uVar7);
        this_00 = local_40;
        lVar5 = local_40->HeapBeginPtr();
        lVar8 = this_00->end();
        for (; lVar5 != lVar8; lVar5 = lVar5 + 24) {
            psVar11 = (shared_ptr*)(lVar5 + 8);
            bVar2 = shared_ptr::operator_cast_to_bool(psVar11);
            bVar1 = true;
            if (bVar2) {
                this_02 =
                    (FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 16192>::RefCounterAndData,
                              unsigned long>*)shared_ptr<Shader>::operator->((shared_ptr<Shader>*)psVar11);
                uVar7 =
                    FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 16192>::RefCounterAndData,
                             unsigned long>::capacity(this_02);
                if (uVar7 == local_48) {
                    psVar9 = (shared_ptr<Shader>*)eastl::vector_map<
                        unsigned long long, shared_ptr<Shader>, eastl::less<unsigned long long>, eastl::allocator,
                        eastl::vector<eastl::pair<unsigned long long, shared_ptr<Shader>>, eastl::allocator>>::
                    operator[](
                        (vector_map<
                            unsigned long long, shared_ptr<Shader>, eastl::less<unsigned long long>, eastl::allocator,
                            eastl::vector<eastl::pair<unsigned long long, shared_ptr<Shader>>, eastl::allocator>>*)
                            local_40,
                        &local_68);
                    shared_ptr<Shader>::operator=(psVar9, psVar11);
                    this_03 =
                        (compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                             eastl::allocator, 0>*)
                            shared_ptr<Shader>::operator->((shared_ptr<Shader>*)psVar11);
                    this_04 = (EffectList*)eastl::compressed_pair_imp<
                        std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                        0>::second(this_03);
                    cVar3 = EffectList::operator!=(this_04, local_50);
                    if (cVar3 != '\0') {
                        this_05 = (Shader*)shared_ptr<Shader>::operator->((shared_ptr<Shader>*)psVar11);
                        pSVar10 = (ShaderProgram*)this_05->GetProgram();
                        local_70->BindConstBufferToShader(pSVar10, local_50);
                    }
                    bVar1 = false;
                    local_78 = psVar11;
                }
            }
            if (!bVar1)
                break;
        }
        psVar11 = local_78;
        if (lVar5 == lVar8) {
            make_shared<Shader, ShaderType&,
                        std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>> const&,
                        std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>> const&,
                        unsigned long&, EffectList_const&, render::VertexDeclaration_const&, EffectManager_const&,
                        unsigned char&, RenderPassType&>((jag*)&local_60, (ShaderType*)&local_34,
                                                         (basic_string*)local_b0, (basic_string*)local_98, &local_48,
                                                         local_50, local_80, local_70, &param_7, &param_8);
            psVar9 = (shared_ptr<Shader>*)eastl::vector_map<
                unsigned long long, shared_ptr<Shader>, eastl::less<unsigned long long>, eastl::allocator,
                eastl::vector<eastl::pair<unsigned long long, shared_ptr<Shader>>, eastl::allocator>>::
            operator[](
                (vector_map<unsigned long long, shared_ptr<Shader>, eastl::less<unsigned long long>, eastl::allocator,
                            eastl::vector<eastl::pair<unsigned long long, shared_ptr<Shader>>, eastl::allocator>>*)
                    local_40,
                &local_68);
            shared_ptr<Shader>::operator=(psVar9, (shared_ptr*)&local_60);
            local_40->field_76 = local_40->field_76 + 1;
            psVar11 = (shared_ptr*)eastl::vector_map<
                unsigned long long, shared_ptr<Shader>, eastl::less<unsigned long long>, eastl::allocator,
                eastl::vector<eastl::pair<unsigned long long, shared_ptr<Shader>>, eastl::allocator>>::
            operator[](
                (vector_map<unsigned long long, shared_ptr<Shader>, eastl::less<unsigned long long>, eastl::allocator,
                            eastl::vector<eastl::pair<unsigned long long, shared_ptr<Shader>>, eastl::allocator>>*)
                    local_40,
                &local_68);
            local_60.~shared_ptr();
        }
        std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>::~basic_string(local_98);
        std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>::~basic_string(local_b0);
        return psVar11;
    }

    // 0x1008916d0, 96 bytes, placed by class name
    // ShaderManager::CreateRenderingResources()
    void ShaderManager::CreateRenderingResources() {
        long lVar1;
        long lVar2;
        Shader* this_00;

        lVar1 = HeapBeginPtr();
        lVar2 = end();
        for (; lVar1 != lVar2; lVar1 = lVar1 + 24) {
            this_00 = (Shader*)shared_ptr<Shader>::operator->((shared_ptr<Shader>*)(lVar1 + 8));
            this_00->RebuildProgramFromInternalSource(field_176);
        }
    }

    // 0x100891730, 224 bytes, placed by class name
    // ShaderManager::ReloadShadersFromSource(ShaderReloadMode)
    void ShaderManager::ReloadShadersFromSource(int param_2) {
        undefined1* this_00;
        EffectManager* pEVar1;
        long lVar2;
        long lVar3;
        ulong uVar4;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_01;
        Shader* pSVar5;
        uint uVar6;

        shadersourceprovider::ClearResourceCache();
        this_00 = &field_40;
        this_00->clear();
        field_72 = 0;
        lVar2 = HeapBeginPtr();
        lVar3 = end();
        for (; lVar2 != lVar3; lVar2 = lVar2 + 24) {
            this_00->push_back((shared_ptr*)(lVar2 + 8));
        }
        if (param_2 != 0) {
            pEVar1 = field_176;
            uVar6 = field_72;
            while (uVar4 = this_00->size(), uVar6 < uVar4) {
                this_01 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                    eastl::vector<shared_ptr<Shader>, eastl::allocator>::operator[](
                        (vector<shared_ptr<Shader>, eastl::allocator>*)this_00, (ulong)field_72);
                pSVar5 = (Shader*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_01);
                pSVar5->ReloadProgramFromSource(pEVar1, param_2);
                uVar6 = field_72 + 1;
                field_72 = uVar6;
            }
            this_00->clear();
            field_72 = 0;
        }
    }

    // 0x1008918a0, 128 bytes, placed by class name
    // ShaderManager::MainLogic()
    void ShaderManager::MainLogic() {
        undefined1* this_00;
        EffectManager* pEVar1;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_01;
        Shader* pSVar2;
        ulong uVar3;
        char cVar4;
        uint uVar5;

        this_00 = &field_40;
        cVar4 = this_00->empty();
        if (cVar4 == '\0') {
            pEVar1 = field_176;
            this_01 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                eastl::vector<shared_ptr<Shader>, eastl::allocator>::operator[](
                    (vector<shared_ptr<Shader>, eastl::allocator>*)this_00, (ulong)field_72);
            pSVar2 = (Shader*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_01);
            pSVar2->ReloadProgramFromSource(pEVar1, 0);
            uVar5 = field_72 + 1;
            field_72 = uVar5;
            uVar3 = this_00->size();
            if (uVar3 <= uVar5) {
                this_00->clear();
                field_72 = 0;
            }
        }
    }

    // 0x100891920, 320 bytes, placed by class name
    // ShaderManager::StartShaderPreload()
    void ShaderManager::StartShaderPreload() {
        undefined8 uVar2;
        FileSystem* this_00;
        function local_1c8[48];
        function local_198[48];
        Filename local_168[19];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        uVar2 = logger::default_logger();
        logger::Logger::Log(uVar2, 0, 8,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                            "materials/shaders/ShaderManager.cpp",
                            226, "Starting Shader Pre-load");
        if (field_160->operator_cast_to_bool()) {
            this_00 = (FileSystem*)shared_ptr<FileSystem>::operator->((shared_ptr<FileSystem>*)field_160);
            Filename::Filename(local_168, "PreloadList");
            std::function<void(Filename_const&, Array<unsigned char, eastl::allocator> const&)>::function<
                ShaderManager::StartShaderPreload()::__2, void>(local_198, this);
            std::function<void(Filename_const&, int, eastl::stringconst&)>::function<
                ShaderManager::StartShaderPreload()::__3, void>(local_1c8, this);
            this_00->ReadFile(local_168, local_198, local_1c8);
            std::function<void(Filename_const&, int, eastl::stringconst&)>::~function(
                (function<void(Filename_const&, int, eastl::stringconst&)>*)local_1c8);
            std::function<void(Filename_const&, Array<unsigned char, eastl::allocator> const&)>::~function(
                (function<void(Filename_const&, Array<unsigned char, eastl::allocator> const&)>*)local_198);
            local_168->~pair();
        } else {
            UseDefaultPermutations(this);
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100891a80, 128 bytes, placed by class name
    // ShaderManager::UseDefaultPermutations()
    void ShaderManager::UseDefaultPermutations() {
        bool bVar1;
        ShaderManager* this_00;
        vector* pvVar3;
        PacketT<Array<unsigned char, BucketAllocatorEASTL>> local_38[32];

        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::PacketT(local_38, 0);
        this_00 = (ShaderManager*)Base64::Instance();
        pvVar3 = local_38->SSOBeginPtr(0);
        bVar1 = Base64::DecodeString<Array<unsigned char, BucketAllocatorEASTL>, eastl::string>(
            (Base64*)this_00, (Array*)pvVar3, (basic_string*)&field_128);
        if (bVar1) {
            if (DeserialisePermutations(this_00, (vector*)&field_88, (PacketT*)local_38) != '\0') {
                field_80 = 1;
            }
        }
        local_38->~PacketT();
    }

    // 0x100891b90, 480 bytes, placed by class name
    // ShaderManager::DeserialisePermutations(eastl::vector<ShaderPermutation, eastl::allocator>&, PacketT<Array<unsigned char, BucketAllocatorEASTL> >&) const
    ulong ShaderManager::DeserialisePermutations(vector* param_1, PacketT* param_2) {
        char cVar1;
        bool bVar2;
        uint uVar3;
        long lVar4;
        long lVar5;
        ShaderPermutation* pSVar6;
        undefined8 uVar7;
        undefined8 uVar8;
        char* pcVar9;
        uint uVar10;
        ulong uVar11;
        DataSerialise<PacketT<Array<unsigned char, BucketAllocatorEASTL>>> local_48[16];
        long local_38;

        cVar1 = param_2->g1();
        if (cVar1 == '@') {
            cVar1 = param_2->g1();
            if (cVar1 == '\x03') {
                lVar4 = param_2->g8();
                lVar5 = datetools::GetCompilationDate();
                if (lVar4 != lVar5) {
                    uVar7 = logger::default_logger();
                    uVar11 = 0;
                    logger::Logger::Log(uVar7, 0, 8,
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                        "graphics/runetek7/materials/shaders/ShaderManager.cpp",
                                        652,
                                        "Not preloading shaders because DeserialisePermutations is being given "
                                        "different C++ compilation date");
                    goto LAB_100891cf0;
                }
                uVar3 = param_2->g4();
                if (uVar3 != 0) {
                    param_1->reserve((ulong)uVar3);
                    bVar2 = (bool)IsBigEndian();
                    DataSerialise<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::DataSerialise(local_48, param_2,
                                                                                                      bVar2);
                    local_38 = param_2->size();
                    uVar10 = uVar3;
                    do {
                        pSVar6 = (ShaderPermutation*)param_1->push_back();
                        operator>>((DataSerialise*)local_48, pSVar6);
                        uVar10 = uVar10 - 1;
                    } while (uVar10 != 0);
                    lVar4 = param_2->size();
                    bVar2 = lVar4 - local_38 == (ulong)(uVar3 * 23);
                    uVar11 = CONCAT71((int7)((ulong)param_2 >> 8), bVar2);
                    if (!bVar2) {
                        /* WARNING: Subroutine does not return */
                        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                        "graphics/runetek7/materials/shaders/ShaderManager.cpp",
                                        673, "Decoded data different than expected");
                    }
                    goto LAB_100891cf0;
                }
                uVar7 = logger::default_logger();
                pcVar9 = "Not preloading shaders because DeserialisePermutations is being given %u elements!";
                uVar8 = 659;
                cVar1 = '\0';
            } else {
                uVar7 = logger::default_logger();
                pcVar9 = "Not preloading shaders because DeserialisePermutations is being given binary type %d instead "
                         "of %d";
                uVar8 = 645;
            }
        } else {
            uVar7 = logger::default_logger();
            pcVar9 = "Not preloading shaders because DeserialisePermutations is being given version %d instead of %d";
            uVar8 = 638;
        }
        uVar11 = 0;
        logger::Logger::Log(uVar7, 0, 8,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                            "materials/shaders/ShaderManager.cpp",
                            uVar8, pcVar9, cVar1);
    LAB_100891cf0:
        return uVar11 & 4294967295;
    }

    // 0x100891d70, 272 bytes, placed by class name
    // ShaderManager::PreloadShaders()
    void ShaderManager::PreloadShaders() {
        byte bVar1;
        byte* pbVar3;
        VertexDeclarationManager* this_00;
        long lVar4;
        shared_ptr<Shader>* this_01;
        GeometryBatchInstance* this_02;
        ShaderProgram* this_03;
        ImColor* this_04;
        ImColor local_38[20];
        float local_24;

        if (IsPreloadingShaders(this) != '\0') {
            local_24 = (float)FrameTime::GetSecondsSinceProgramStart();
            pbVar3 = (byte*)eastl::vector<ShaderPermutation, eastl::allocator>::operator[](
                (vector<ShaderPermutation, eastl::allocator>*)&field_88, (long)field_120);
            bVar1 = *pbVar3;
            if (27 < bVar1) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                "runetek7/materials/shaders/ShaderManager.cpp",
                                279, "PreloadShaders is expecting a shader type of %d to exist!  Skipping load.",
                                (ulong)bVar1);
            }
            this_04 = local_38;
            ImColor::ImColor(this_04, (ImVec4*)(pbVar3 + 8));
            this_00 = (VertexDeclarationManager*)this_04->Instance();
            lVar4 = this_00->GetVertexDeclaration(*(uint*)(pbVar3 + 24));
            if (lVar4 == 0) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                "runetek7/materials/shaders/ShaderManager.cpp",
                                290,
                                "ShaderManager couldn\'t get a vertex declaration from the stored hash, so we "
                                "shouldn\'t try and preload this shader.");
            }
            this_01 = (shared_ptr<Shader>*)GetShader(this, bVar1, field_176, local_38, lVar4, 1, 4294967295);
            this_02 = (GeometryBatchInstance*)shared_ptr<Shader>::operator->(this_01);
            this_03 = (ShaderProgram*)this_02->GetMaterial();
            this_03->SetLastUsedTimeSeconds(local_24 - (float)*(ushort*)(pbVar3 + 28));
            field_120 = field_120 + 1;
        }
    }

    // 0x100891ef0, 144 bytes, placed by class name
    // ShaderManager::GetUniqueShaders() const
    ShaderManager* ShaderManager::GetUniqueShaders() {
        long lVar1;
        long lVar2;
        Layout* in_RSI;
        allocator local_28[8];

        eastl::allocator::allocator(local_28, "EASTL set");
        eastl::map<eastl::string, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                   eastl::less<eastl::string>, eastl::allocator>::map((allocator*)this);
        lVar1 = eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
            Layout::HeapBeginPtr(in_RSI);
        lVar2 = in_RSI->end();
        for (; lVar1 != lVar2; lVar1 = lVar1 + 24) {
            eastl::rbtree<shared_ptr<Shader>, shared_ptr<Shader>, eastl::less<shared_ptr<Shader>>, eastl::allocator,
                          eastl::use_self<shared_ptr<Shader>>, false, true>::insert((shared_ptr*)this);
        }
        return this;
    }

    // 0x100891f90, 144 bytes, placed by class name
    // ShaderManager::CountShadersOfType(ShaderType) const
    int ShaderManager::CountShadersOfType(int param_2) {
        int iVar2;
        long lVar3;
        long lVar4;
        CoordMapSquare* this_00;
        int iVar5;

        lVar3 = HeapBeginPtr();
        lVar4 = end();
        if (lVar3 == lVar4) {
            iVar5 = 0;
        } else {
            iVar5 = 0;
            do {
                if (((lVar3 + 8))->operator_cast_to_bool()) {
                    this_00 = (CoordMapSquare*)shared_ptr<Shader>::operator->((shared_ptr<Shader>*)(lVar3 + 8));
                    iVar2 = this_00->GetX();
                    iVar5 = iVar5 + (uint)(iVar2 == param_2);
                }
                lVar3 = lVar3 + 24;
            } while (lVar3 != lVar4);
        }
        return iVar5;
    }

    // 0x100892020, 176 bytes, placed by class name
    // ShaderManager::CountShadersOfTypeUsingEffect(ShaderType, EffectType) const
    int ShaderManager::CountShadersOfTypeUsingEffect(int param_2, undefined1 param_3) {
        shared_ptr* this_00;
        bool bVar1;
        byte bVar2;
        int iVar3;
        long lVar4;
        long lVar5;
        CoordMapSquare* this_01;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                            0>* this_02;
        EffectList* pEVar6;
        int iVar7;

        lVar4 = HeapBeginPtr();
        lVar5 = end();
        if (lVar4 == lVar5) {
            iVar7 = 0;
        } else {
            iVar7 = 0;
            do {
                this_00 = (shared_ptr*)(lVar4 + 8);
                bVar1 = shared_ptr::operator_cast_to_bool(this_00);
                if (bVar1) {
                    this_01 = (CoordMapSquare*)shared_ptr<Shader>::operator->((shared_ptr<Shader>*)this_00);
                    iVar3 = this_01->GetX();
                    if (iVar3 == param_2) {
                        this_02 = (compressed_pair_imp<
                                   std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                   eastl::allocator, 0>*)shared_ptr<Shader>::operator->((shared_ptr<Shader>*)this_00);
                        pEVar6 = (EffectList*)eastl::compressed_pair_imp<
                            std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                            0>::second(this_02);
                        bVar2 = pEVar6->Contains(param_3);
                        iVar7 = iVar7 + (uint)bVar2;
                    }
                }
                lVar4 = lVar4 + 24;
            } while (lVar4 != lVar5);
        }
        return iVar7;
    }

    // 0x1008920d0, 656 bytes, placed by class name
    // ShaderManager::AppendPermutationHTML(std::basic_stringstream<char, std::char_traits<char>, std::allocator<char> >&, ShaderType, eastl::bitset<121ul, unsigned long long> const&, bool) const
    /* ShaderManager::AppendPermutationHTML(std::stringstream&,
   ShaderType, eastl::bitset<121ul, unsigned long long> const&, bool) const */

    void ShaderManager::AppendPermutationHTML(long param_1, graphics* param_3,
                                              bitset<121ul, unsigned long long>* param_4, char param_5) {
        char cVar1;
        int iVar2;
        int iVar3;
        unique_ptr<ShaderSource, std::default_delete<ShaderSource>>* this_00;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                            0>* this_01;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                            0>* this_02;
        long lVar4;
        ulong uVar5;
        EffectList* pEVar6;
        char* pcVar7;
        bool bVar8;
        ulong uVar9;
        ostream* this_03;
        float fVar10;

        this_00 = (unique_ptr<ShaderSource, std::default_delete<ShaderSource>>*)graphics::operator*(param_3._0_4_);
        this_01 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                       eastl::allocator, 0>*)
            std::unique_ptr<ShaderSource, std::default_delete<ShaderSource>>::operator*(this_00);
        this_02 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                       eastl::allocator, 0>*)
            std::unique_ptr<ShaderSource, std::default_delete<ShaderSource>>::operator*(this_00 + 8);
        lVar4 = eastl::bitset<121ul, unsigned long long>::size();
        if (lVar4 != 0) {
            this_03 = (ostream*)(param_1 + 16);
            uVar9 = 0;
            bVar8 = true;
            do {
                cVar1 = eastl::bitset<121ul, unsigned long long>::test(param_4, uVar9);
                if (cVar1 != '\0') {
                    if (bVar8) {
                        bVar8 = false;
                    } else {
                        std::operator<<(this_03, " ");
                    }
                    iVar2 = CountShadersOfTypeUsingEffect(this, (undefined4)param_3._0_4_, uVar9 & 255);
                    iVar3 = CountShadersOfType(this, (undefined4)param_3._0_4_);
                    fVar10 = (float)iVar2 / (float)iVar3;
                    fVar10 =
                        (float)(~-(uint)(0.5 < fVar10) & (uint)fVar10 | (uint)(1.0 - fVar10) & -(uint)(0.5 < fVar10));
                    pcVar7 = "<font color=\"red\" title=\"";
                    if ((((0.4 < fVar10) || (pcVar7 = "<font color=\"orange\" title=\"", 0.2 < fVar10)) ||
                         (pcVar7 = "<font color=\"green\" title=\"", 0.001 < fVar10)) ||
                        (pcVar7 = "<font color=\"black\" title=\"", param_5 == '\0')) {
                        std::operator<<(this_03, pcVar7);
                        iVar2 = CountShadersOfTypeUsingEffect(this, (undefined4)param_3._0_4_, uVar9 & 255);
                        std::ostream::operator<<(this_03, iVar2);
                        std::operator<<(this_03, " / ");
                        iVar2 = CountShadersOfType(this, (undefined4)param_3._0_4_);
                        std::ostream::operator<<(this_03, iVar2);
                        std::operator<<(this_03, "\">");
                        std::operator<<(this_03, (&EffectTypeStrings)[uVar9]);
                        pEVar6 = (EffectList*)eastl::compressed_pair_imp<
                            std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                            0>::second(this_02);
                        cVar1 = pEVar6->Contains(uVar9 & 255);
                        if (cVar1 == '\0') {
                            pEVar6 = (EffectList*)this_02->second();
                            cVar1 = pEVar6->Contains(uVar9 & 255);
                            if (cVar1 != '\0')
                                goto LAB_1008922cc;
                        } else {
                        LAB_1008922cc:
                            std::operator<<(this_03, " (F)");
                        }
                        pEVar6 = (EffectList*)eastl::compressed_pair_imp<
                            std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                            0>::second(this_01);
                        cVar1 = pEVar6->Contains(uVar9 & 255);
                        if (cVar1 == '\0') {
                            pEVar6 = (EffectList*)this_01->second();
                            cVar1 = pEVar6->Contains(uVar9 & 255);
                            if (cVar1 != '\0')
                                goto LAB_100892140;
                        } else {
                        LAB_100892140:
                            std::operator<<(this_03, " (V)");
                        }
                        std::operator<<(this_03, "</font>");
                    }
                }
                uVar9 = (ulong)((int)uVar9 + 1);
                uVar5 = eastl::bitset<121ul, unsigned long long>::size();
            } while (uVar9 < uVar5);
        }
    }

    // 0x100892360, 176 bytes, placed by class name
    // ShaderManager::AppendPermutationStr(eastl::fixed_string<char, 260, true, eastl::allocator>&, eastl::bitset<121ul, unsigned long long> const&, bool, ShaderSource const&) const
    void ShaderManager::AppendPermutationStr(fixed_string* param_1, bitset* param_2, bool param_3,
                                             ShaderSource* param_4) {
        EffectList* pEVar2;
        ulong uVar3;
        char cVar4;
        ulong uVar5;

        if (eastl::bitset<121ul, unsigned long long>::size() != 0) {
            uVar5 = 0;
            do {
                cVar4 = param_2->test(uVar5);
                if (cVar4 != '\0') {
                    pEVar2 = (EffectList*)param_4->second();
                    cVar4 = pEVar2->Contains(uVar5 & 255);
                    if (cVar4 == '\0') {
                        pEVar2 = (EffectList*)param_4->second();
                        cVar4 = pEVar2->Contains(uVar5 & 255);
                        if (cVar4 == '\0')
                            goto LAB_1008923ac;
                    }
                    eastl::basic_string<char,
                                        eastl::fixed_vector_allocator<1ul, 4096ul, 1ul, 0ul, true, eastl::allocator>>::
                    operator+=(
                        (basic_string<char,
                                      eastl::fixed_vector_allocator<1ul, 4096ul, 1ul, 0ul, true, eastl::allocator>>*)
                            param_1,
                        "_");
                    eastl::basic_string<char,
                                        eastl::fixed_vector_allocator<1ul, 4096ul, 1ul, 0ul, true, eastl::allocator>>::
                    operator+=(
                        (basic_string<char,
                                      eastl::fixed_vector_allocator<1ul, 4096ul, 1ul, 0ul, true, eastl::allocator>>*)
                            param_1,
                        (&EffectTypeStrings)[uVar5]);
                }
            LAB_1008923ac:
                uVar5 = (ulong)((int)uVar5 + 1);
                uVar3 = eastl::bitset<121ul, unsigned long long>::size();
            } while (uVar5 < uVar3);
        }
    }

    // 0x100892410, 192 bytes, placed by class name
    // ShaderManager::SerialisePermutationsToString(std::basic_stringstream<char, std::char_traits<char>, std::allocator<char> >&) const
    /* ShaderManager::SerialisePermutationsToString(std::stringstream&) const */

    void ShaderManager::SerialisePermutationsToString(stringstream* param_1) {
        Base64* this_00;
        uchar* puVar1;
        ulong uVar2;
        char* pcVar3;
        undefined1 local_60[64];

        new (local_60) PacketT<Array<unsigned char, BucketAllocatorEASTL>>();
        SerialisePermutations(this, (PacketT*)local_60);
        new ((local_60 + 32)) eastl::string();
        this_00 = (Base64*)Base64::Instance();
        puVar1 = (uchar*)local_60->GetDataPtr();
        uVar2 = local_60->GetTextureAtlas();
        this_00->EncodeAlt((basic_string*)(local_60 + 32), puVar1, uVar2);
        pcVar3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        std::operator<<((ostream*)(param_1 + 16), pcVar3);
        ((local_60 + 32))->~basic_string();
        local_60->~PacketT();
    }

    // 0x10089b190, 80 bytes, placed by class name
    // ShaderManager::Destroy()::$_0::operator()(Filename const&) const
    /* ShaderManager::Destroy()::$_0::TEMPNAMEPLACEHOLDERVALUE(Filename const&)
   const */

    void ShaderManager::Destroy()::$_0::operator()(Filename* param_1) {
        undefined8 uVar1;
        undefined8 uVar2;

        uVar1 = logger::default_logger();
        uVar2 = GetName();
        logger::Logger::Log(uVar1, 0, 8,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                            "materials/shaders/ShaderManager.cpp",
                            52, "Shader preload list saved to %s", uVar2);
    }

} // namespace jag::graphics
