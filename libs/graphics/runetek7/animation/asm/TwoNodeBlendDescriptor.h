// libs/graphics/runetek7/animation/asm/TwoNodeBlendDescriptor.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    template <typename...> // 2 instantiations, e.g. <float>, <unsigned long long>
    class SimpleTwoNodeBlendTreeNode {
    public:
        // virtual methods in vtable order
        virtual char* GetTypeString() const;
        virtual SimpleTwoNodeBlendTreeNode<float>* GetTreeAsString() const;
        SetRightNode(BlendTreeNode*);
        void SetLeftNode(BlendTreeNode*);
        SimpleTwoNodeBlendTreeNode(SimpleTwoNodeBlendTreeNode<unsigned long long>&&);
        SimpleTwoNodeBlendTreeNode(float, float, float*, TwoNodeBlendTreeNodeBlendType);
        SimpleTwoNodeBlendTreeNode();
        void SetBlendInfo(unsigned long long, unsigned long long, unsigned long long*);
        SimpleTwoNodeBlendTreeNode<unsigned long long>* GetTreeAsString() const;
    };

    template <typename...> // 2 instantiations, e.g. <float>, <unsigned long long>
    class TwoNodeBaseBlendTreeNode {
    public:
        // virtual methods in vtable order
        virtual void GetPose(WrapArray<JointPose>, Array<LabelData, eastl::allocator> const&,
                             math::Matrix44T<float> const&);
        virtual jag* GetBindInfo() const;
        virtual void Update(unsigned int);
        virtual void Reset(unsigned int);
        TwoNodeBaseBlendTreeNode(TwoNodeBaseBlendTreeNode<unsigned long long>&&);
        TwoNodeBaseBlendTreeNode(float, float, float*, TwoNodeBlendTreeNodeBlendType);
        TwoNodeBaseBlendTreeNode();
    };

    template <typename...> // 1 instantiations, e.g. <float>
    class TwoNodeBlendDescriptor {
    public:
        // virtual methods in vtable order
        virtual ~TwoNodeBlendDescriptor();
        virtual TwoNodeBlendDescriptor<float>* Create(AnimationStateResourceList&, VariableList&);
        virtual TwoNodeBlendDescriptor<float>* ToString(unsigned int) const;
        virtual TwoNodeBlendDescriptor<float>* Clone() const;
        TwoNodeBlendDescriptor<BlendTreeNodeDescriptor, BlendTreeNodeDescriptor, void>(
            std::unique_ptr<BlendTreeNodeDescriptor, std::default_delete<BlendTreeNodeDescriptor>>&&,
            std::unique_ptr<BlendTreeNodeDescriptor, std::default_delete<BlendTreeNodeDescriptor>>&&, float, float,
            eastl::string const&);
        TwoNodeBlendDescriptor(PacketT<Array<unsigned char, eastl::allocator>>&);
    };

    class TwoNodeBlendTreeHelpers {
    public:
        TwoNodeBlendTreeHelpers* ToString(unsigned int, BlendTreeNodeDescriptor const&, BlendTreeNodeDescriptor const&,
                                          eastl::string const&, eastl::string const&);

        // data members, from how the methods use this: 1 bytes
        char _unknown_0[1];
    };

    // 0x100973150, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // TwoNodeBlendDescriptor<float>::TwoNodeBlendDescriptor<BlendTreeNodeDescriptor, BlendTreeNodeDescriptor, void>(std::unique_ptr<BlendTreeNodeDescriptor, std::default_delete<BlendTreeNodeDescriptor> >&&, std::unique_ptr<BlendTreeNodeDescriptor, std::default_delete<BlendTreeNodeDescriptor> >&&, float, float, eastl::string const&): jumps straight to the base-object constructor

    // 0x100973170, 176 bytes, base-object constructor, inline, placed by class name and debug map
    // TwoNodeBlendDescriptor<float>::TwoNodeBlendDescriptor<BlendTreeNodeDescriptor, BlendTreeNodeDescriptor, void>(std::unique_ptr<BlendTreeNodeDescriptor, std::default_delete<BlendTreeNodeDescriptor> >&&, std::unique_ptr<BlendTreeNodeDescriptor, std::default_delete<BlendTreeNodeDescriptor> >&&, float, float, eastl::string const&)
    /* TwoNodeBlendDescriptor<float>::TwoNodeBlendDescriptor<BlendTreeNodeDescriptor,
   BlendTreeNodeDescriptor,
   void>(std::unique_ptr<BlendTreeNodeDescriptor,
   std::default_delete<BlendTreeNodeDescriptor> >&&,
   std::unique_ptr<BlendTreeNodeDescriptor,
   std::default_delete<BlendTreeNodeDescriptor> >&&, float, float,
   eastl::string const&) */

    void TwoNodeBlendDescriptor<float>::TwoNodeBlendDescriptor<BlendTreeNodeDescriptor, BlendTreeNodeDescriptor, void>(
        unique_ptr* param_1, unique_ptr* param_2, float param_3, float param_4, basic_string* param_5) {
        new (this) BlendTreeNodeDescriptor(param_1);
        *(undefined**)this = PTR_vtable_100ee8860 + 16;
        new ((this + 8))
            std::unique_ptr<BlendTreeNodeDescriptor, std::default_delete<BlendTreeNodeDescriptor>>(param_1);
        new ((this + 16))
            std::unique_ptr<BlendTreeNodeDescriptor, std::default_delete<BlendTreeNodeDescriptor>>(param_2);
        *(float*)(this + 24) = param_3;
        *(float*)(this + 28) = param_4;
        new ((this + 32)) eastl::string(param_5);
    }

    // 0x100973220, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // TwoNodeBlendDescriptor<float>::~TwoNodeBlendDescriptor(): jumps straight to the base-object destructor

    // 0x100973230, 32 bytes, deleting destructor, inline, placed by class name and debug map
    // TwoNodeBlendDescriptor<float>::~TwoNodeBlendDescriptor()
    void TwoNodeBlendDescriptor<float>::~TwoNodeBlendDescriptor() {
        ~TwoNodeBlendDescriptor(this);
        operator_delete(this);
    }

    // 0x100973250, 304 bytes, inline, placed by class name and debug map
    // TwoNodeBlendDescriptor<float>::Create(AnimationStateResourceList&, VariableList&)
    TwoNodeBlendDescriptor<float>* TwoNodeBlendDescriptor<float>::Create(AnimationStateResourceList* param_1,
                                                                         VariableList* param_2) {
        char cVar1;
        long* plVar2;
        char* pcVar3;
        VariableList* in_RCX;
        undefined8 local_48;
        unique_ptr local_40[8];
        unique_ptr local_38[8];
        unique_ptr<BlendTreeNode, std::default_delete<BlendTreeNode>> local_30[8];

        plVar2 =
            (long*)std::unique_ptr<BlendTreeNodeDescriptor, std::default_delete<BlendTreeNodeDescriptor>>::operator->(
                (unique_ptr<BlendTreeNodeDescriptor, std::default_delete<BlendTreeNodeDescriptor>>*)&param_1->field_8);
        (**(code**)(*plVar2 + 24))(local_38, plVar2, param_2);
        plVar2 =
            (long*)std::unique_ptr<BlendTreeNodeDescriptor, std::default_delete<BlendTreeNodeDescriptor>>::operator->(
                (unique_ptr<BlendTreeNodeDescriptor, std::default_delete<BlendTreeNodeDescriptor>>*)&param_1->field_16);
        (**(code**)(*plVar2 + 24))(local_30, plVar2, param_2);
        pcVar3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        cVar1 = in_RCX->HasVariable(pcVar3);
        if (cVar1 == '\0') {
            pcVar3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            in_RCX->AddFloatVariable(pcVar3, *(float*)&param_1->field_24, *(float*)&param_1->field_28,
                                     *(float*)&param_1->field_24);
        }
        pcVar3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        local_48 = in_RCX->GetFloatVariable(pcVar3);
        std::make_unique<TwoNodeBlendTreeNode<float>, float&, float&, float*&,
                         std::unique_ptr<BlendTreeNode, std::default_delete<BlendTreeNode>>,
                         std::unique_ptr<BlendTreeNode, std::default_delete<BlendTreeNode>>>(
            (float*)local_40, (float*)&param_1->field_24, (float**)&param_1->field_28, (unique_ptr*)&local_48,
            local_38);
        std::unique_ptr<BlendTreeNode, std::default_delete<BlendTreeNode>>::unique_ptr<
            TwoNodeBlendTreeNode<float>, std::default_delete<TwoNodeBlendTreeNode<float>>, void, void>(
            (unique_ptr<BlendTreeNode, std::default_delete<BlendTreeNode>>*)this, local_40);
        local_40->~unique_ptr();
        std::unique_ptr<BlendTreeNode, std::default_delete<BlendTreeNode>>::~unique_ptr(local_30);
        local_38->~unique_ptr();
        return this;
    }

    // 0x100973380, 176 bytes, inline, placed by class name and debug map
    // TwoNodeBlendDescriptor<float>::ToString(unsigned int) const
    TwoNodeBlendDescriptor<float>* TwoNodeBlendDescriptor<float>::ToString(uint param_1) {
        BlendTreeNodeDescriptor* pBVar1;
        BlendTreeNodeDescriptor* pBVar2;
        uint in_EDX;
        undefined4 in_register_00000034;
        long lVar3;
        eastl local_70[32];
        eastl local_50[32];

        lVar3 = CONCAT44(in_register_00000034, param_1);
        pBVar1 = (BlendTreeNodeDescriptor*)
            std::unique_ptr<BlendTreeNodeDescriptor, std::default_delete<BlendTreeNodeDescriptor>>::operator*(
                (unique_ptr<BlendTreeNodeDescriptor, std::default_delete<BlendTreeNodeDescriptor>>*)(lVar3 + 8));
        pBVar2 = (BlendTreeNodeDescriptor*)
            std::unique_ptr<BlendTreeNodeDescriptor, std::default_delete<BlendTreeNodeDescriptor>>::operator*(
                (unique_ptr<BlendTreeNodeDescriptor, std::default_delete<BlendTreeNodeDescriptor>>*)(lVar3 + 16));
        eastl::to_string(local_70, *(float*)(lVar3 + 24));
        eastl::to_string(local_50, *(float*)(lVar3 + 28));
        ToString(in_EDX, pBVar1, pBVar2, local_70, local_50);
        local_50->~basic_string();
        local_70->~basic_string();
        return this;
    }

    // 0x100973430, 192 bytes, inline, placed by class name and debug map
    // TwoNodeBlendDescriptor<float>::Clone() const
    TwoNodeBlendDescriptor<float>* TwoNodeBlendDescriptor<float>::Clone() {
        long* plVar1;
        long in_RSI;
        unique_ptr local_30[8];
        unique_ptr local_28[8];
        unique_ptr<BlendTreeNodeDescriptor, std::default_delete<BlendTreeNodeDescriptor>> local_20[8];

        plVar1 =
            (long*)std::unique_ptr<BlendTreeNodeDescriptor, std::default_delete<BlendTreeNodeDescriptor>>::operator->(
                (unique_ptr<BlendTreeNodeDescriptor, std::default_delete<BlendTreeNodeDescriptor>>*)(in_RSI + 8));
        (**(code**)(*plVar1 + 40))(local_28, plVar1);
        plVar1 =
            (long*)std::unique_ptr<BlendTreeNodeDescriptor, std::default_delete<BlendTreeNodeDescriptor>>::operator->(
                (unique_ptr<BlendTreeNodeDescriptor, std::default_delete<BlendTreeNodeDescriptor>>*)(in_RSI + 16));
        (**(code**)(*plVar1 + 40))(local_20, plVar1);
        std::make_unique<TwoNodeBlendDescriptor<float>,
                         std::unique_ptr<BlendTreeNodeDescriptor, std::default_delete<BlendTreeNodeDescriptor>>,
                         std::unique_ptr<BlendTreeNodeDescriptor, std::default_delete<BlendTreeNodeDescriptor>>,
                         float const&, float const&, eastl::stringconst&>(
            local_30, local_28, (float*)local_20, (float*)(in_RSI + 24), (basic_string*)(in_RSI + 28));
        std::unique_ptr<BlendTreeNodeDescriptor, std::default_delete<BlendTreeNodeDescriptor>>::unique_ptr<
            TwoNodeBlendDescriptor<float>, std::default_delete<TwoNodeBlendDescriptor<float>>, void, void>(
            (unique_ptr<BlendTreeNodeDescriptor, std::default_delete<BlendTreeNodeDescriptor>>*)this, local_30);
        local_30->~unique_ptr();
        std::unique_ptr<BlendTreeNodeDescriptor, std::default_delete<BlendTreeNodeDescriptor>>::~unique_ptr(local_20);
        local_28->~unique_ptr();
        return this;
    }

    // 0x1009734f0, 80 bytes, base-object destructor, inline, placed by class name and debug map
    // TwoNodeBlendDescriptor<float>::~TwoNodeBlendDescriptor()
    void TwoNodeBlendDescriptor<float>::~TwoNodeBlendDescriptor() {
        *(undefined**)this = PTR_vtable_100ee8860 + 16;
        ((this + 32))->~basic_string();
        ((this + 16))->~unique_ptr();
        ((this + 8))->~unique_ptr();
        ~AutoSingleton();
    }

    // 0x100973660, 96 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // TwoNodeBaseBlendTreeNode<float>::TwoNodeBaseBlendTreeNode(float, float, float*, TwoNodeBlendTreeNodeBlendType)
    void TwoNodeBaseBlendTreeNode<float>::TwoNodeBaseBlendTreeNode(undefined4 param_1, undefined4 param_2,
                                                                   TwoNodeBaseBlendTreeNode<float>* this,
                                                                   undefined8 param_3, undefined4 param_5) {
        new (this) BlendTreeNode();
        *(undefined**)this = PTR_vtable_100ee8878 + 16;
        *(undefined4*)(this + 36) = param_1;
        *(undefined4*)(this + 40) = param_2;
        *(undefined8*)(this + 48) = param_3;
        *(undefined4*)(this + 56) = param_5;
        *(undefined4*)(this + 60) = 1;
    }

    // 0x1009736f0, 400 bytes, inline, placed by debug map only (low confidence)
    // TwoNodeBaseBlendTreeNode<float>::GetPose(WrapArray<JointPose>, Array<LabelData, eastl::allocator> const&, math::Matrix44T<float> const&)
    void TwoNodeBaseBlendTreeNode<float>::GetPose(WrapArray* param_2, undefined8 param_3, Matrix44T* param_4) {
        TwoNodeBaseBlendTreeNode<float> TVar1;
        float* pfVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        BlendTreeNode* pBVar5;
        BlendTreeNode* pBVar6;
        WrapArray<game::Cutscene2DAnimation<float>::Key_const> local_70[16];
        WrapArray<game::Cutscene2DAnimation<float>::Key_const> local_60[16];
        WrapArray<game::Cutscene2DAnimation<float>::Key_const> local_50[16];
        float local_34;

        if (*(long*)(this + 48) == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_pVariable",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "animation/asm/TwoNodeBlendTreeNode.h",
                      107, (char*)0);
        }
        pfVar2 = std::clamp<float>(*(float**)(this + 48), (float*)(this + 36), (float*)(this + 40));
        local_34 = (*pfVar2 - *(float*)(this + 36)) / (*(float*)(this + 40) - *(float*)(this + 36));
        if (*(int*)(this + 56) == 1) {
            WrapArray<game::Cutscene2DAnimation<float>::Key_const>::WrapArray<
                WrapArray<game::Cutscene2DAnimation<float>::Key_const>>(local_60, param_2);
            uVar3 = (**(code**)(*(long*)this + 64))(this);
            uVar4 = (**(code**)(*(long*)this + 72))(this);
            TwoNodeBlendHelpers::GetAdditivePose(local_34, local_60, uVar3, uVar4, *(undefined4*)(this + 60), param_3,
                                                 param_4);
            TVar1 = this[8];
        } else {
            if (*(int*)(this + 56) != 0) {
                /* WARNING: Subroutine does not return */
                LogAssert("m_blendType == TwoNodeBlendTreeNodeBlendType::ADD",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "animation/asm/TwoNodeBlendTreeNode.h",
                          119, (char*)0);
            }
            WrapArray<game::Cutscene2DAnimation<float>::Key_const>::WrapArray<
                WrapArray<game::Cutscene2DAnimation<float>::Key_const>>(local_70, param_2);
            uVar3 = (**(code**)(*(long*)this + 64))(this);
            uVar4 = (**(code**)(*(long*)this + 72))(this);
            TwoNodeBlendHelpers::GetLerpPose(local_34, local_70, uVar3, uVar4, *(undefined4*)(this + 60), param_3,
                                             param_4);
            TVar1 = this[8];
        }
        if (TVar1 != (TwoNodeBaseBlendTreeNode<float>)0) {
            pBVar5 = (BlendTreeNode*)(**(code**)(*(long*)this + 64))(this);
            pBVar6 = (BlendTreeNode*)(**(code**)(*(long*)this + 72))(this);
            WrapArray<game::Cutscene2DAnimation<float>::Key_const>::WrapArray<
                WrapArray<game::Cutscene2DAnimation<float>::Key_const>>(local_50, param_2);
            TwoNodeBlendHelpers::DebugDrawPose(pBVar5, pBVar6, local_50, param_4, (Vector3T*)(this + 12),
                                               (Vector3T*)(this + 24));
        }
    }

    // 0x100973880, 80 bytes, inline, placed by debug map only (low confidence)
    // TwoNodeBaseBlendTreeNode<float>::GetBindInfo() const
    jag* TwoNodeBaseBlendTreeNode<float>::GetBindInfo() {
        long* plVar2;
        jag* this_00;
        undefined1 auVar3[16];

        plVar2 = (long*)(**(code**)(*(long*)this + 64))();
        auVar3 = (**(code**)(*plVar2 + 24))(plVar2);
        this_00 = auVar3._0_8_;
        if (operator==(this_00, (shared_ptr*)&BlendTreeNode::NullAnimBase, auVar3._8_8_)) {
            plVar2 = (long*)(**(code**)(*(long*)this + 72))(this);
            this_00 = (jag*)(**(code**)(*plVar2 + 24))(plVar2);
        }
        return this_00;
    }

    // 0x1009738d0, 176 bytes, inline, placed by debug map only (low confidence)
    // TwoNodeBaseBlendTreeNode<float>::Update(unsigned int)
    void TwoNodeBaseBlendTreeNode<float>::Update(uint param_1) {
        long lVar1;
        long* plVar2;

        if (**(float**)(this + 48) != *(float*)(this + 40)) {
            lVar1 = (**(code**)(*(long*)this + 64))(this);
            if (lVar1 == 0) {
                /* WARNING: Subroutine does not return */
                LogAssert("GetLeftNode()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "animation/asm/TwoNodeBlendTreeNode.h",
                          77, (char*)0);
            }
            plVar2 = (long*)(**(code**)(*(long*)this + 64))(this);
            (**(code**)(*plVar2 + 32))(plVar2, param_1);
        }
        if (**(float**)(this + 48) != *(float*)(this + 36)) {
            lVar1 = (**(code**)(*(long*)this + 72))(this);
            if (lVar1 == 0) {
                /* WARNING: Subroutine does not return */
                LogAssert("GetRightNode()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "animation/asm/TwoNodeBlendTreeNode.h",
                          83, (char*)0);
            }
            plVar2 = (long*)(**(code**)(*(long*)this + 72))(this);
            (**(code**)(*plVar2 + 32))(plVar2, param_1);
        }
    }

    // 0x100973980, 160 bytes, inline, placed by debug map only (low confidence)
    // TwoNodeBaseBlendTreeNode<float>::Reset(unsigned int)
    void TwoNodeBaseBlendTreeNode<float>::Reset(uint param_1) {
        long lVar1;
        long* plVar2;

        lVar1 = (**(code**)(*(long*)this + 64))();
        if (lVar1 == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("GetLeftNode()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "animation/asm/TwoNodeBlendTreeNode.h",
                      94, (char*)0);
        }
        lVar1 = (**(code**)(*(long*)this + 72))(this);
        if (lVar1 == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("GetRightNode()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "animation/asm/TwoNodeBlendTreeNode.h",
                      95, (char*)0);
        }
        plVar2 = (long*)(**(code**)(*(long*)this + 64))(this);
        (**(code**)(*plVar2 + 40))(plVar2, param_1);
        plVar2 = (long*)(**(code**)(*(long*)this + 72))(this);
        (**(code**)(*plVar2 + 40))(plVar2, param_1);
    }

    // 0x100974390, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // TwoNodeBlendDescriptor<float>::TwoNodeBlendDescriptor(PacketT<Array<unsigned char, eastl::allocator> >&): jumps straight to the base-object constructor

    // 0x1009743a0, 304 bytes, base-object constructor, inline, placed by class name and debug map
    // TwoNodeBlendDescriptor<float>::TwoNodeBlendDescriptor(PacketT<Array<unsigned char, eastl::allocator> >&)
    void TwoNodeBlendDescriptor<float>::TwoNodeBlendDescriptor(PacketT* param_1) {
        undefined4 uVar1;
        BlendTreeNodeDescriptor local_58[4];
        unique_ptr<BlendTreeNodeDescriptor, std::default_delete<BlendTreeNodeDescriptor>>* local_38;

        new (this) BlendTreeNodeDescriptor(param_1);
        *(undefined**)this = PTR_vtable_100ee8860 + 16;
        local_38 = (unique_ptr<BlendTreeNodeDescriptor, std::default_delete<BlendTreeNodeDescriptor>>*)(this + 8);
        std::unique_ptr<BlendTreeNodeDescriptor, std::default_delete<BlendTreeNodeDescriptor>>::unique_ptr<true, void>(
            local_38);
        std::unique_ptr<BlendTreeNodeDescriptor, std::default_delete<BlendTreeNodeDescriptor>>::unique_ptr<true, void>(
            (unique_ptr<BlendTreeNodeDescriptor, std::default_delete<BlendTreeNodeDescriptor>>*)(this + 16));
        new ((this + 32)) eastl::string();
        uVar1 = param_1->gFloat();
        *(undefined4*)(this + 24) = uVar1;
        uVar1 = param_1->gFloat();
        *(undefined4*)(this + 28) = uVar1;
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gStringCP1252ToUTF8<eastl::string>(
            (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)local_58, SUB81(param_1, 0));
        eastl::string::operator=((eastl::string*)(this + 32), (basic_string*)local_58);
        local_58->~basic_string();
        local_58->FromPacket(param_1);
        std::unique_ptr<BlendTreeNodeDescriptor, std::default_delete<BlendTreeNodeDescriptor>>::operator=(
            local_38, (unique_ptr*)local_58);
        local_58->~unique_ptr();
        local_58->FromPacket(param_1);
        std::unique_ptr<BlendTreeNodeDescriptor, std::default_delete<BlendTreeNodeDescriptor>>::operator=(
            (unique_ptr<BlendTreeNodeDescriptor, std::default_delete<BlendTreeNodeDescriptor>>*)(this + 16),
            (unique_ptr*)local_58);
        local_58->~unique_ptr();
    }

    // 0x100974970, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // LayeredAnimationStateMachineLayerDescriptor::LayeredAnimationStateMachineLayerDescriptor(LayeredAnimationStateMachineLayerDescriptor&&): jumps straight to the base-object constructor

    // 0x100974990, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // LayeredAnimationStateMachineLayerDescriptor::LayeredAnimationStateMachineLayerDescriptor(LayeredAnimationStateMachineLayerDescriptor&&)
    void LayeredAnimationStateMachineLayerDescriptor::LayeredAnimationStateMachineLayerDescriptor(
        LayeredAnimationStateMachineLayerDescriptor* param_1) {
        undefined8 uVar1;

        new (this) AnimationStateMachineDescriptor(param_1);
        field_104 = param_1->field_104;
        new (&field_112, (basic_string*)&param_1->field_112) eastl::string();
        uVar1 = param_1->m_transitionOutTime;
        field_144 = param_1->field_144;
        m_transitionOutTime = uVar1;
    }

    // 0x1009759c0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // SimpleTwoNodeBlendTreeNode<float>::SimpleTwoNodeBlendTreeNode(float, float, float*, TwoNodeBlendTreeNodeBlendType): jumps straight to the base-object constructor

    // 0x1009759e0, 48 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // SimpleTwoNodeBlendTreeNode<float>::SimpleTwoNodeBlendTreeNode(float, float, float*, TwoNodeBlendTreeNodeBlendType)
    void SimpleTwoNodeBlendTreeNode<float>::SimpleTwoNodeBlendTreeNode() {
        TwoNodeBaseBlendTreeNode<float>::TwoNodeBaseBlendTreeNode();
        *(undefined**)this = PTR_vtable_100ee8898 + 16;
    }

    // 0x100975a10, 16 bytes, inline, placed by debug map only (low confidence)
    // SimpleTwoNodeBlendTreeNode<float>::GetTypeString() const
    char* SimpleTwoNodeBlendTreeNode<float>::GetTypeString() {
        return "SimpleTwoNode";
    }

    // 0x100975a20, 464 bytes, inline, placed by debug map only (low confidence)
    // SimpleTwoNodeBlendTreeNode<float>::GetTreeAsString() const
    SimpleTwoNodeBlendTreeNode<float>* SimpleTwoNodeBlendTreeNode<float>::GetTreeAsString() {
        char* pcVar1;
        long* plVar2;
        EnumType* in_RSI;
        eastl::string local_118[32];
        eastl local_f8[32];
        eastl local_d8[32];
        eastl local_b8[32];
        eastl local_98[32];
        allocator local_78[8];
        basic_string local_70[32];
        basic_string local_50[32];

        pcVar1 = (char*)(*(code*)in_RSI->field_0[6])();
        eastl::allocator::allocator(local_78, "EASTL basic_string");
        eastl::string::basic_string(local_118, pcVar1, local_78);
        eastl::operator+(local_98, (basic_string*)local_118, (value_type*)"(");
        plVar2 = (long*)in_RSI->GetOutputType();
        (**(code**)(*plVar2 + 56))(local_70, plVar2);
        eastl::operator+(local_b8, (basic_string*)local_98, local_70);
        eastl::operator+(local_d8, (basic_string*)local_b8, (value_type*)&DAT_100e3583a);
        plVar2 = (long*)in_RSI->size();
        (**(code**)(*plVar2 + 56))(local_50, plVar2);
        eastl::operator+(local_f8, (basic_string*)local_d8, local_50);
        eastl::operator+((eastl*)this, (basic_string*)local_f8, (value_type*)&DAT_100e38de0);
        local_f8->~basic_string();
        local_50->~basic_string();
        local_d8->~basic_string();
        local_b8->~basic_string();
        local_70->~basic_string();
        local_98->~basic_string();
        eastl::string::~basic_string(local_118);
        return this;
    }

    // 0x10098afb0, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // SimpleTwoNodeBlendTreeNode<unsigned long long>::SimpleTwoNodeBlendTreeNode(): jumps straight to the base-object constructor

    // 0x10098bcf0, 32 bytes, inline, placed by class header (inline)
    // SimpleTwoNodeBlendTreeNode<unsigned long long>::SetBlendInfo(unsigned long long, unsigned long long, unsigned long long*)
    void SimpleTwoNodeBlendTreeNode<unsigned long long>::SetBlendInfo(ulonglong param_1, ulonglong param_2,
                                                                      ulonglong* param_3) {
        *(ulonglong*)(this + 40) = param_1;
        *(ulonglong*)(this + 48) = param_2;
        *(ulonglong**)(this + 56) = param_3;
    }

} // namespace jag::graphics

namespace jag {
    // 0x100975610, 32 bytes, inline, placed by debug map only (low confidence)
    // graphics::LayeredAnimationStateMachine* placement_new<graphics::LayeredAnimationStateMachine, eastl::vector<graphics::AnimationStateMachine, eastl::allocator>, eastl::vector<graphics::LayeredAnimationStateMachine::LayerBlendInfo, eastl::allocator>, shared_ptr<graphics::AnimationResourceManager> const&>(void*, eastl::vector<graphics::AnimationStateMachine, eastl::allocator>&&, eastl::vector<graphics::LayeredAnimationStateMachine::LayerBlendInfo, eastl::allocator>&&, shared_ptr<graphics::AnimationResourceManager> const&)
    LayeredAnimationStateMachine*
    jag::placement_new<graphics::LayeredAnimationStateMachine,
                       eastl::vector<graphics::AnimationStateMachine, eastl::allocator>,
                       eastl::vector<graphics::LayeredAnimationStateMachine::LayerBlendInfo, eastl::allocator>,
                       shared_ptr<graphics::AnimationResourceManager> const&>(void* param_1, vector* param_2,
                                                                              vector* param_3, shared_ptr* param_4) {
        graphics::LayeredAnimationStateMachine::LayeredAnimationStateMachine(param_1, param_2, param_3, param_4);
        return param_1;
    }

    // 0x100975630, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<graphics::LayeredAnimationStateMachine>* placement_new<ref_counter_shared<graphics::LayeredAnimationStateMachine>, int, graphics::LayeredAnimationStateMachine*&>(void*, int&&, graphics::LayeredAnimationStateMachine*&)
    ref_counter_shared*
    jag::placement_new<ref_counter_shared<graphics::LayeredAnimationStateMachine>, int,
                       graphics::LayeredAnimationStateMachine*&>(void* param_1, int* param_2,
                                                                 LayeredAnimationStateMachine** param_3) {
        ref_counter_shared<graphics::LayeredAnimationStateMachine>::ref_counter_shared(param_1, (long)*param_2,
                                                                                       *param_3);
        return param_1;
    }

    // 0x100975c40, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<graphics::LayeredAnimationStateMachine>::ref_counter_shared(unsigned long, graphics::LayeredAnimationStateMachine*): jumps straight to the base-object constructor

    // 0x100975c50, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<graphics::LayeredAnimationStateMachine>::ref_counter_shared(unsigned long, graphics::LayeredAnimationStateMachine*)
    void ref_counter_shared<graphics::LayeredAnimationStateMachine>::ref_counter_shared(
        ulong param_1, LayeredAnimationStateMachine* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7558 + 16;
        *(ulong*)(this + 16) = param_1;
        *(LayeredAnimationStateMachine**)(this + 24) = param_2;
    }

    // 0x100975c90, 96 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<graphics::LayeredAnimationStateMachine>::DeleteData()
    void ref_counter_shared<graphics::LayeredAnimationStateMachine>::DeleteData() {
        long lVar1;
        ulong uVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar1 = 0;
                uVar2 = 0;
                do {
                    (*(code*)**(undefined8**)(*(long*)(this + 24) + lVar1))(*(long*)(this + 24) + lVar1);
                    uVar2 = uVar2 + 1;
                    lVar1 = lVar1 + 1280;
                } while (uVar2 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

} // namespace jag
