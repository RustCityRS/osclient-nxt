// libs/graphics/runetek7/animation/asm/BlendTreeNodeDescriptor.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "BlendTreeNodeDescriptor.h"

namespace jag::graphics {
    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    BlendTreeNodeDescriptor::~BlendTreeNodeDescriptor();

    // 0x100954ec0: the linker folded this into BlendTreeNodeDescriptor::BlendTreeNodeDescriptor(), which has identical code
    BlendTreeNodeDescriptor::BlendTreeNodeDescriptor(BlendTreeNodeDescriptor const&);

    // 0x100955340, 2416 bytes, placed by class name and debug map
    // BlendTreeNodeDescriptor::FromJSON(Json::Value const&)
    unique_ptr<BlendTreeNodeDescriptor, std::default_delete<BlendTreeNodeDescriptor>>*
    BlendTreeNodeDescriptor::FromJSON(Value* param_1) {
        bool bVar1;
        char cVar2;
        Value* pVVar3;
        char* pcVar4;
        Value* pVVar5;
        undefined8 uVar6;
        undefined1 extraout_DL;
        undefined1 extraout_DL_00;
        undefined1 extraout_DL_01;
        undefined1 extraout_DL_02;
        undefined1 extraout_DL_03;
        undefined1 extraout_DL_04;
        char* extraout_RDX;
        char* extraout_RDX_00;
        char* extraout_RDX_01;
        char* extraout_RDX_02;
        unique_ptr<BlendTreeNodeDescriptor, std::default_delete<BlendTreeNodeDescriptor>>* puVar7;
        undefined4 uVar8;
        eastl::string local_108[32];
        undefined8 local_e8;
        undefined1 local_e0;
        BlendTreeNodeDescriptor local_c8;
        undefined1 local_c0;
        undefined8 local_a8;
        undefined1 local_a0;
        BlendTreeNodeDescriptor local_98[4];
        allocator local_78[40];
        undefined8 local_50;
        undefined1 local_48;
        unique_ptr<BlendTreeNodeDescriptor, std::default_delete<BlendTreeNodeDescriptor>>* local_40;
        float local_38;
        float local_34;

        local_40 = (unique_ptr<BlendTreeNodeDescriptor, std::default_delete<BlendTreeNodeDescriptor>>*)this;
        pVVar3 = (Value*)Json::Value::operator[](param_1, "NodeType");
        pcVar4 = (char*)Json::Value::asCString(pVVar3);
        eastl::allocator::allocator(local_78, "EASTL basic_string");
        eastl::string::basic_string(local_108, pcVar4, local_78);
        bVar1 = eastl::operator==((eastl*)local_108, (basic_string*)"Animation", extraout_RDX);
        if (bVar1) {
            std::make_unique<AnimationNodeDescriptor, Json::Value_const&>((Value*)local_78);
            puVar7 = local_40;
            std::unique_ptr<BlendTreeNodeDescriptor, std::default_delete<BlendTreeNodeDescriptor>>::unique_ptr<
                AnimationNodeDescriptor, std::default_delete<AnimationNodeDescriptor>, void, void>(
                local_40, (unique_ptr*)local_78);
            local_78->~unique_ptr();
        } else {
            bVar1 = eastl::operator==((eastl*)local_108, (basic_string*)"TwoNode", extraout_RDX_00);
            if (bVar1) {
                pVVar3 = (Value*)Json::Value::operator[](param_1, "Type");
                new (local_78) Json::Value("float");
                cVar2 = Json::Value::operator==(pVVar3, (Value*)local_78);
                local_78->~Value();
                if (cVar2 == '\0') {
                    pVVar3 = (Value*)Json::Value::operator[](param_1, "Type");
                    uVar6 = Json::Value::asCString(pVVar3);
                    /* WARNING: Subroutine does not return */
                    LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                    "runetek7/animation/asm/BlendTreeNodeDescriptor.cpp",
                                    51, "Unknown data type for node %s", uVar6);
                }
                pVVar3 = (Value*)Json::Value::operator[](param_1, "Min");
                uVar8 = Json::Value::asFloat(pVVar3);
                local_50 = CONCAT44(local_50._4_4_, uVar8);
                pVVar3 = (Value*)Json::Value::operator[](param_1, "Max");
                uVar8 = Json::Value::asFloat(pVVar3);
                local_a8 = CONCAT44(local_a8._4_4_, uVar8);
                pVVar3 = (Value*)Json::Value::operator[](param_1, "Variable");
                pcVar4 = (char*)Json::Value::asCString(pVVar3);
                new (local_98) eastl::allocator("EASTL basic_string");
                new (local_78) eastl::string(pcVar4, local_98);
                pVVar3 = (Value*)Json::Value::operator[](param_1, "LeftNode");
                FromJSON(local_98, pVVar3);
                pVVar3 = (Value*)Json::Value::operator[](param_1, "RightNode");
                FromJSON(&local_c8, pVVar3);
                std::make_unique<TwoNodeBlendDescriptor<float>,
                                 std::unique_ptr<BlendTreeNodeDescriptor, std::default_delete<BlendTreeNodeDescriptor>>,
                                 std::unique_ptr<BlendTreeNodeDescriptor, std::default_delete<BlendTreeNodeDescriptor>>,
                                 float&, float&, eastl::string&>((unique_ptr*)&local_e8, (unique_ptr*)local_98,
                                                                 (float*)&local_c8, (float*)&local_50,
                                                                 (basic_string*)&local_a8);
                puVar7 = local_40;
                std::unique_ptr<BlendTreeNodeDescriptor, std::default_delete<BlendTreeNodeDescriptor>>::unique_ptr<
                    TwoNodeBlendDescriptor<float>, std::default_delete<TwoNodeBlendDescriptor<float>>, void, void>(
                    local_40, (unique_ptr*)&local_e8);
                local_e8.~unique_ptr();
                local_c8.~unique_ptr();
                local_98->~unique_ptr();
            } else {
                bVar1 = eastl::operator==((eastl*)local_108, (basic_string*)"BlendSpace1D", extraout_RDX_01);
                if (bVar1) {
                    pVVar3 = (Value*)Json::Value::operator[](param_1, "Type");
                    new (local_78) Json::Value("float");
                    cVar2 = Json::Value::operator==(pVVar3, (Value*)local_78);
                    local_78->~Value();
                    if (cVar2 == '\0') {
                        pVVar3 = (Value*)Json::Value::operator[](param_1, "Type");
                        uVar6 = Json::Value::asCString(pVVar3);
                        /* WARNING: Subroutine does not return */
                        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                        "graphics/runetek7/animation/asm/BlendTreeNodeDescriptor.cpp",
                                        81, "Unknown data type for node %s", uVar6);
                    }
                    pVVar3 = (Value*)Json::Value::operator[](param_1, "Min");
                    uVar8 = Json::Value::asFloat(pVVar3);
                    local_a8 = CONCAT44(local_a8._4_4_, uVar8);
                    pVVar3 = (Value*)Json::Value::operator[](param_1, "Max");
                    local_34 = (float)Json::Value::asFloat(pVVar3);
                    pVVar3 = (Value*)Json::Value::operator[](param_1, "Variable");
                    pcVar4 = (char*)Json::Value::asCString(pVVar3);
                    new (local_98) eastl::allocator("EASTL basic_string");
                    new (local_78) eastl::string(pcVar4, local_98);
                    pVVar3 = (Value*)Json::Value::operator[](param_1, "Nodes");
                    new (local_98) eastl::vector<BlendSpace1DDescriptor::LocationInfo, eastl::allocator>();
                    local_c8.field_0 = (undefined*)Json::Value::begin(pVVar3);
                    local_c0 = extraout_DL;
                    local_e8 = Json::Value::end(pVVar3);
                    local_e0 = extraout_DL_00;
                    while (true) {
                        cVar2 = Json::ValueIteratorBase::operator!=((ValueIteratorBase*)&local_c8,
                                                                    (ValueIteratorBase*)&local_e8);
                        if (cVar2 == '\0')
                            break;
                        pVVar3 = (Value*)Json::ValueConstIterator::operator*((ValueConstIterator*)&local_c8);
                        pVVar5 = (Value*)Json::Value::operator[](pVVar3, "Position");
                        local_38 = (float)Json::Value::asFloat(pVVar5);
                        pVVar3 = (Value*)Json::Value::operator[](pVVar3, "BlendTree");
                        FromJSON((BlendTreeNodeDescriptor*)&local_50, pVVar3);
                        eastl::vector<BlendSpace1DDescriptor::LocationInfo, eastl::allocator>::emplace_back<
                            std::unique_ptr<BlendTreeNodeDescriptor, std::default_delete<BlendTreeNodeDescriptor>>,
                            float&>((vector<BlendSpace1DDescriptor::LocationInfo, eastl::allocator>*)local_98,
                                    (unique_ptr*)&local_50, &local_38);
                        local_50.~unique_ptr();
                        Json::ValueConstIterator::operator++((ValueConstIterator*)&local_c8);
                    }
                    std::make_unique<BlendSpace1DDescriptor,
                                     eastl::vector<BlendSpace1DDescriptor::LocationInfo, eastl::allocator>,
                                     eastl::string&, float&, float&>((vector*)&local_c8, (basic_string*)local_98,
                                                                     (float*)local_78, (float*)&local_a8);
                    puVar7 = local_40;
                    std::unique_ptr<BlendTreeNodeDescriptor, std::default_delete<BlendTreeNodeDescriptor>>::unique_ptr<
                        BlendSpace1DDescriptor, std::default_delete<BlendSpace1DDescriptor>, void, void>(
                        local_40, (unique_ptr*)&local_c8);
                    local_c8.~unique_ptr();
                    local_98->~vector();
                } else {
                    bVar1 = eastl::operator==((eastl*)local_108, (basic_string*)"BlendSpace2D", extraout_RDX_02);
                    if (!bVar1) {
                        uVar6 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        /* WARNING: Subroutine does not return */
                        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                        "graphics/runetek7/animation/asm/BlendTreeNodeDescriptor.cpp",
                                        125, "Unknown blend tree node type: %s", uVar6);
                    }
                    pVVar3 = (Value*)Json::Value::operator[](param_1, "Type");
                    new (local_78) Json::Value("float");
                    cVar2 = Json::Value::operator==(pVVar3, (Value*)local_78);
                    local_78->~Value();
                    if (cVar2 == '\0') {
                        pVVar3 = (Value*)Json::Value::operator[](param_1, "Type");
                        uVar6 = Json::Value::asCString(pVVar3);
                        /* WARNING: Subroutine does not return */
                        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                        "graphics/runetek7/animation/asm/BlendTreeNodeDescriptor.cpp",
                                        120, "Unknown data type for node %s", uVar6);
                    }
                    pVVar3 = (Value*)Json::Value::operator[](param_1, "VariableX");
                    pcVar4 = (char*)Json::Value::asCString(pVVar3);
                    new (local_98) eastl::allocator("EASTL basic_string");
                    new (local_78) eastl::string(pcVar4, local_98);
                    pVVar3 = (Value*)Json::Value::operator[](param_1, "VariableY");
                    pcVar4 = (char*)Json::Value::asCString(pVVar3);
                    new (&local_c8) eastl::allocator("EASTL basic_string");
                    new (local_98) eastl::string(pcVar4, (allocator*)&local_c8);
                    pVVar3 = (Value*)Json::Value::operator[](param_1, "Nodes");
                    new (&local_c8) eastl::vector<BlendSpace2DDescriptor::LocationInfo, eastl::allocator>();
                    local_e8 = Json::Value::begin(pVVar3);
                    local_e0 = extraout_DL_01;
                    local_50 = Json::Value::end(pVVar3);
                    local_48 = extraout_DL_02;
                    while (true) {
                        cVar2 = Json::ValueIteratorBase::operator!=((ValueIteratorBase*)&local_e8,
                                                                    (ValueIteratorBase*)&local_50);
                        if (cVar2 == '\0')
                            break;
                        pVVar3 = (Value*)Json::ValueConstIterator::operator*((ValueConstIterator*)&local_e8);
                        pVVar5 = (Value*)Json::Value::operator[](pVVar3, "PositionX");
                        local_34 = (float)Json::Value::asFloat(pVVar5);
                        pVVar5 = (Value*)Json::Value::operator[](pVVar3, "PositionY");
                        local_38 = (float)Json::Value::asFloat(pVVar5);
                        pVVar3 = (Value*)Json::Value::operator[](pVVar3, "BlendTree");
                        FromJSON((BlendTreeNodeDescriptor*)&local_a8, pVVar3);
                        eastl::vector<BlendSpace2DDescriptor::LocationInfo, eastl::allocator>::emplace_back<
                            std::unique_ptr<BlendTreeNodeDescriptor, std::default_delete<BlendTreeNodeDescriptor>>,
                            float&, float&>((vector<BlendSpace2DDescriptor::LocationInfo, eastl::allocator>*)&local_c8,
                                            (unique_ptr*)&local_a8, &local_34, &local_38);
                        local_a8.~unique_ptr();
                        Json::ValueConstIterator::operator++((ValueConstIterator*)&local_e8);
                    }
                    pVVar3 = (Value*)Json::Value::operator[](param_1, "TriangleIndices");
                    new (&local_e8) eastl::vector<int, eastl::allocator>();
                    local_50 = Json::Value::begin(pVVar3);
                    local_48 = extraout_DL_03;
                    local_a8 = Json::Value::end(pVVar3);
                    local_a0 = extraout_DL_04;
                    while (true) {
                        cVar2 = Json::ValueIteratorBase::operator!=((ValueIteratorBase*)&local_50,
                                                                    (ValueIteratorBase*)&local_a8);
                        if (cVar2 == '\0')
                            break;
                        Json::ValueConstIterator::operator*((ValueConstIterator*)&local_50);
                        local_34 = (float)Json::Value::asInt();
                        local_e8.push_back((int*)&local_34);
                        Json::ValueConstIterator::operator++((ValueConstIterator*)&local_50);
                    }
                    std::make_unique<BlendSpace2DDescriptor,
                                     eastl::vector<BlendSpace2DDescriptor::LocationInfo, eastl::allocator>,
                                     eastl::string&, eastl::string&>((vector*)&local_50, (basic_string*)&local_c8,
                                                                     (basic_string*)local_78);
                    puVar7 = local_40;
                    std::unique_ptr<BlendTreeNodeDescriptor, std::default_delete<BlendTreeNodeDescriptor>>::unique_ptr<
                        BlendSpace2DDescriptor, std::default_delete<BlendSpace2DDescriptor>, void, void>(
                        local_40, (unique_ptr*)&local_50);
                    local_50.~unique_ptr();
                    local_e8.~vector();
                    local_c8.~vector();
                    local_98->~basic_string();
                }
            }
            local_78->~basic_string();
        }
        eastl::string::~basic_string(local_108);
        return puVar7;
    }

    // 0x100955e80, 272 bytes, placed by class name and debug map
    // BlendTreeNodeDescriptor::FromPacket(PacketT<Array<unsigned char, eastl::allocator> >&)
    BlendTreeNodeDescriptor* BlendTreeNodeDescriptor::FromPacket(PacketT* param_1) {
        undefined4 uVar1;
        PacketT local_28[8];

        uVar1 = param_1->g4();
        switch (uVar1) {
        case 0:
            std::make_unique<AnimationNodeDescriptor, PacketT<Array<unsigned char, eastl::allocator>>&>(local_28);
            std::unique_ptr<BlendTreeNodeDescriptor, std::default_delete<BlendTreeNodeDescriptor>>::unique_ptr<
                AnimationNodeDescriptor, std::default_delete<AnimationNodeDescriptor>, void, void>(
                (unique_ptr<BlendTreeNodeDescriptor, std::default_delete<BlendTreeNodeDescriptor>>*)this,
                (unique_ptr*)local_28);
            local_28->~unique_ptr();
            break;
        case 1:
            std::make_unique<TwoNodeBlendDescriptor<float>, PacketT<Array<unsigned char, eastl::allocator>>&>(local_28);
            std::unique_ptr<BlendTreeNodeDescriptor, std::default_delete<BlendTreeNodeDescriptor>>::unique_ptr<
                TwoNodeBlendDescriptor<float>, std::default_delete<TwoNodeBlendDescriptor<float>>, void, void>(
                (unique_ptr<BlendTreeNodeDescriptor, std::default_delete<BlendTreeNodeDescriptor>>*)this,
                (unique_ptr*)local_28);
            local_28->~unique_ptr();
            break;
        case 2:
            std::make_unique<BlendSpace1DDescriptor, PacketT<Array<unsigned char, eastl::allocator>>&>(local_28);
            std::unique_ptr<BlendTreeNodeDescriptor, std::default_delete<BlendTreeNodeDescriptor>>::unique_ptr<
                BlendSpace1DDescriptor, std::default_delete<BlendSpace1DDescriptor>, void, void>(
                (unique_ptr<BlendTreeNodeDescriptor, std::default_delete<BlendTreeNodeDescriptor>>*)this,
                (unique_ptr*)local_28);
            local_28->~unique_ptr();
            break;
        case 3:
            std::make_unique<BlendSpace2DDescriptor, PacketT<Array<unsigned char, eastl::allocator>>&>(local_28);
            std::unique_ptr<BlendTreeNodeDescriptor, std::default_delete<BlendTreeNodeDescriptor>>::unique_ptr<
                BlendSpace2DDescriptor, std::default_delete<BlendSpace2DDescriptor>, void, void>(
                (unique_ptr<BlendTreeNodeDescriptor, std::default_delete<BlendTreeNodeDescriptor>>*)this,
                (unique_ptr*)local_28);
            local_28->~unique_ptr();
            break;
        default:
            /* WARNING: Subroutine does not return */
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                            "animation/asm/BlendTreeNodeDescriptor.cpp",
                            155, "Unknown blend tree node type");
        }
        return this;
    }

    // 0x100c92b50: the linker folded this into InlineFatalBreak(), which has identical code
    BlendTreeNodeDescriptor::~BlendTreeNodeDescriptor();

    // 0x100c92b50: the linker folded this into InlineFatalBreak(), which has identical code
    BlendTreeNodeDescriptor::~BlendTreeNodeDescriptor();

} // namespace jag::graphics
