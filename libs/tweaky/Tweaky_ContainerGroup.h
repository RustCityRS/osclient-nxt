// libs/tweaky/Tweaky_ContainerGroup.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.tweaky

namespace jag {
    // 0x100a536e0, 128 bytes, inline, placed by debug map only (low confidence)
    // tweak::Container* placement_new<tweak::Container, int, int, char const (&) [1]>(void*, int&&, int&&, char const (&) [1])
    Container* placement_new<tweak::Container, int, int, char const (&)[1]>(void* param_1, int* param_2, int* param_3,
                                                                            char* param_4) {
        int iVar1;
        int iVar2;
        eastl::string local_58[32];
        allocator local_38[8];

        iVar1 = *param_2;
        iVar2 = *param_3;
        eastl::allocator::allocator(local_38, "EASTL basic_string");
        eastl::string::basic_string(local_58, param_4, local_38);
        tweak::Container::Container(param_1, iVar1, iVar2, (basic_string*)local_58);
        eastl::string::~basic_string(local_58);
        return param_1;
    }

    // 0x100a53760, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<tweak::Container>* placement_new<ref_counter_shared<tweak::Container>, int, tweak::Container*&>(void*, int&&, tweak::Container*&)
    ref_counter_shared*
    placement_new<ref_counter_shared<tweak::Container>, int, tweak::Container*&>(void* param_1, int* param_2,
                                                                                 Container** param_3) {
        ref_counter_shared<tweak::Container>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x100a53780, 144 bytes, inline, placed by debug map only (low confidence)
    // void shared_ptr_do_enable_shared_from_this<tweak::Container>(ref_counter_base*, tweak::Container*, tweak::Container::enable_shared_type*)
    void shared_ptr_do_enable_shared_from_this<tweak::Container>(ref_counter_base* param_1, Container* param_2,
                                                                 enable_shared_type* param_3) {
        hashtable_iterator<eastl::pair<int const, unsigned int>, false, false> local_48[16];
        weak_ptr<oldscape::dash3d::Decor> local_38[24];

        if (param_1 != (ref_counter_base*)0) {
            param_1->IncRef();
            eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>::hashtable_iterator(
                local_48, (hash_node*)param_1, (hash_node**)param_2);
            weak_ptr<oldscape::dash3d::Decor>::weak_ptr(local_38, (weak_ptr*)local_48);
            (&param_2->field_8, (weak_ptr*)local_38)->__internal_set_weak_ptr();
            local_38->~weak_ptr();
            local_48->~shared_ptr();
        }
    }

    // 0x100a538d0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<tweak::Container>::ref_counter_shared(unsigned long, tweak::Container*): jumps straight to the base-object constructor

    // 0x100a538e0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<tweak::Container>::ref_counter_shared(unsigned long, tweak::Container*)
    void ref_counter_shared<tweak::Container>::ref_counter_shared(ulong param_1, Container* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7490 + 16;
        *(ulong*)(this + 16) = param_1;
        *(Container**)(this + 24) = param_2;
    }

    // 0x100a53920, 96 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<tweak::Container>::DeleteData()
    /* ref_counter_shared<tweak::SizeControl>::DeleteData() */

    void ref_counter_shared<tweak::SizeControl>::DeleteData() {
        long lVar1;
        ulong uVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar1 = 0;
                uVar2 = 0;
                do {
                    (*(code*)**(undefined8**)(*(long*)(this + 24) + lVar1))(*(long*)(this + 24) + lVar1);
                    uVar2 = uVar2 + 1;
                    lVar1 = lVar1 + 304;
                } while (uVar2 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x100a54ca0, 32 bytes, inline, placed by debug map only (low confidence)
    // tweak::SizeControl* placement_new<tweak::SizeControl>(void*)
    SizeControl* placement_new<tweak::SizeControl>(void* param_1) {
        tweak::SizeControl::SizeControl(param_1);
        return param_1;
    }

    // 0x100a54cc0, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<tweak::SizeControl>* placement_new<ref_counter_shared<tweak::SizeControl>, int, tweak::SizeControl*&>(void*, int&&, tweak::SizeControl*&)
    ref_counter_shared*
    placement_new<ref_counter_shared<tweak::SizeControl>, int, tweak::SizeControl*&>(void* param_1, int* param_2,
                                                                                     SizeControl** param_3) {
        ref_counter_shared<tweak::SizeControl>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x100a54ce0, 144 bytes, inline, placed by debug map only (low confidence)
    // void shared_ptr_do_enable_shared_from_this<tweak::SizeControl>(ref_counter_base*, tweak::SizeControl*, tweak::SizeControl::enable_shared_type*)
    void shared_ptr_do_enable_shared_from_this<tweak::SizeControl>(ref_counter_base* param_1, SizeControl* param_2,
                                                                   enable_shared_type* param_3) {
        hashtable_iterator<eastl::pair<int const, unsigned int>, false, false> local_48[16];
        weak_ptr<oldscape::dash3d::Decor> local_38[24];

        if (param_1 != (ref_counter_base*)0) {
            param_1->IncRef();
            eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>::hashtable_iterator(
                local_48, (hash_node*)param_1, (hash_node**)param_2);
            weak_ptr<oldscape::dash3d::Decor>::weak_ptr(local_38, (weak_ptr*)local_48);
            (&param_2->field_8, (weak_ptr*)local_38)->__internal_set_weak_ptr();
            local_38->~weak_ptr();
            local_48->~shared_ptr();
        }
    }

    // 0x100a54db0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<tweak::SizeControl>::ref_counter_shared(unsigned long, tweak::SizeControl*): jumps straight to the base-object constructor

    // 0x100a54dc0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<tweak::SizeControl>::ref_counter_shared(unsigned long, tweak::SizeControl*)
    void ref_counter_shared<tweak::SizeControl>::ref_counter_shared(ulong param_1, SizeControl* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7430 + 16;
        *(ulong*)(this + 16) = param_1;
        *(SizeControl**)(this + 24) = param_2;
    }

    // 0x100a54e00, 32 bytes, inline, placed by debug map only (low confidence)
    // tweak::Button* placement_new<tweak::Button, char const*&>(void*, char const*&)
    Button* placement_new<tweak::Button, char const*&>(void* param_1, char** param_2) {
        tweak::Button::Button(param_1, *param_2);
        return param_1;
    }

    // 0x100a54e20, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<tweak::Button>* placement_new<ref_counter_shared<tweak::Button>, int, tweak::Button*&>(void*, int&&, tweak::Button*&)
    ref_counter_shared* placement_new<ref_counter_shared<tweak::Button>, int, tweak::Button*&>(void* param_1,
                                                                                               int* param_2,
                                                                                               Button** param_3) {
        ref_counter_shared<tweak::Button>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x100a54e40, 144 bytes, inline, placed by debug map only (low confidence)
    // void shared_ptr_do_enable_shared_from_this<tweak::Button>(ref_counter_base*, tweak::Button*, tweak::Button::enable_shared_type*)
    void shared_ptr_do_enable_shared_from_this<tweak::Button>(ref_counter_base* param_1, Button* param_2,
                                                              enable_shared_type* param_3) {
        hashtable_iterator<eastl::pair<int const, unsigned int>, false, false> local_48[16];
        weak_ptr<oldscape::dash3d::Decor> local_38[24];

        if (param_1 != (ref_counter_base*)0) {
            param_1->IncRef();
            eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>::hashtable_iterator(
                local_48, (hash_node*)param_1, (hash_node**)param_2);
            weak_ptr<oldscape::dash3d::Decor>::weak_ptr(local_38, (weak_ptr*)local_48);
            (&param_2->field_8, (weak_ptr*)local_38)->__internal_set_weak_ptr();
            local_38->~weak_ptr();
            local_48->~shared_ptr();
        }
    }

    // 0x100a54f20, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<tweak::Button>::ref_counter_shared(unsigned long, tweak::Button*): jumps straight to the base-object constructor

    // 0x100a54f30, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<tweak::Button>::ref_counter_shared(unsigned long, tweak::Button*)
    void ref_counter_shared<tweak::Button>::ref_counter_shared(ulong param_1, Button* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7460 + 16;
        *(ulong*)(this + 16) = param_1;
        *(Button**)(this + 24) = param_2;
    }

    // 0x100a54f70, 96 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<tweak::Button>::DeleteData()
    /* ref_counter_shared<tweak::CheckBox>::DeleteData() */

    void ref_counter_shared<tweak::CheckBox>::DeleteData() {
        long lVar1;
        ulong uVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar1 = 0;
                uVar2 = 0;
                do {
                    (*(code*)**(undefined8**)(*(long*)(this + 24) + lVar1))(*(long*)(this + 24) + lVar1);
                    uVar2 = uVar2 + 1;
                    lVar1 = lVar1 + 224;
                } while (uVar2 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x100a54fd0, 32 bytes, inline, placed by debug map only (low confidence)
    // tweak::CheckBox* placement_new<tweak::CheckBox, char const*&, bool&>(void*, char const*&, bool&)
    CheckBox* placement_new<tweak::CheckBox, char const*&, bool&>(void* param_1, char** param_2, bool* param_3) {
        tweak::CheckBox::CheckBox(param_1, *param_2, *param_3);
        return param_1;
    }

    // 0x100a54ff0, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<tweak::CheckBox>* placement_new<ref_counter_shared<tweak::CheckBox>, int, tweak::CheckBox*&>(void*, int&&, tweak::CheckBox*&)
    ref_counter_shared* placement_new<ref_counter_shared<tweak::CheckBox>, int, tweak::CheckBox*&>(void* param_1,
                                                                                                   int* param_2,
                                                                                                   CheckBox** param_3) {
        ref_counter_shared<tweak::CheckBox>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x100a55010, 144 bytes, inline, placed by debug map only (low confidence)
    // void shared_ptr_do_enable_shared_from_this<tweak::CheckBox>(ref_counter_base*, tweak::CheckBox*, tweak::CheckBox::enable_shared_type*)
    void shared_ptr_do_enable_shared_from_this<tweak::CheckBox>(ref_counter_base* param_1, CheckBox* param_2,
                                                                enable_shared_type* param_3) {
        hashtable_iterator<eastl::pair<int const, unsigned int>, false, false> local_48[16];
        weak_ptr<oldscape::dash3d::Decor> local_38[24];

        if (param_1 != (ref_counter_base*)0) {
            param_1->IncRef();
            eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>::hashtable_iterator(
                local_48, (hash_node*)param_1, (hash_node**)param_2);
            weak_ptr<oldscape::dash3d::Decor>::weak_ptr(local_38, (weak_ptr*)local_48);
            (&param_2->field_8, (weak_ptr*)local_38)->__internal_set_weak_ptr();
            local_38->~weak_ptr();
            local_48->~shared_ptr();
        }
    }

    // 0x100a55170, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<tweak::CheckBox>::ref_counter_shared(unsigned long, tweak::CheckBox*): jumps straight to the base-object constructor

    // 0x100a55180, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<tweak::CheckBox>::ref_counter_shared(unsigned long, tweak::CheckBox*)
    void ref_counter_shared<tweak::CheckBox>::ref_counter_shared(ulong param_1, CheckBox* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7480 + 16;
        *(ulong*)(this + 16) = param_1;
        *(CheckBox**)(this + 24) = param_2;
    }

    // 0x100a55b00, 32 bytes, inline, placed by debug map only (low confidence)
    // tweak::CheckBox* placement_new<tweak::CheckBox, char const*&>(void*, char const*&)
    CheckBox* placement_new<tweak::CheckBox, char const*&>(void* param_1, char** param_2) {
        tweak::CheckBox::CheckBox(param_1, *param_2);
        return param_1;
    }

    // 0x100a55bc0, 32 bytes, inline, placed by debug map only (low confidence)
    // tweak::EditField* placement_new<tweak::EditField, char const*&, int&>(void*, char const*&, int&)
    EditField* placement_new<tweak::EditField, char const*&, int&>(void* param_1, char** param_2, int* param_3) {
        tweak::EditField::EditField(param_1, *param_2, *param_3);
        return param_1;
    }

    // 0x100a55be0, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<tweak::EditField>* placement_new<ref_counter_shared<tweak::EditField>, int, tweak::EditField*&>(void*, int&&, tweak::EditField*&)
    ref_counter_shared*
    placement_new<ref_counter_shared<tweak::EditField>, int, tweak::EditField*&>(void* param_1, int* param_2,
                                                                                 EditField** param_3) {
        ref_counter_shared<tweak::EditField>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x100a55c00, 144 bytes, inline, placed by debug map only (low confidence)
    // void shared_ptr_do_enable_shared_from_this<tweak::EditField>(ref_counter_base*, tweak::EditField*, tweak::EditField::enable_shared_type*)
    void shared_ptr_do_enable_shared_from_this<tweak::EditField>(ref_counter_base* param_1, EditField* param_2,
                                                                 enable_shared_type* param_3) {
        hashtable_iterator<eastl::pair<int const, unsigned int>, false, false> local_48[16];
        weak_ptr<oldscape::dash3d::Decor> local_38[24];

        if (param_1 != (ref_counter_base*)0) {
            param_1->IncRef();
            eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>::hashtable_iterator(
                local_48, (hash_node*)param_1, (hash_node**)param_2);
            weak_ptr<oldscape::dash3d::Decor>::weak_ptr(local_38, (weak_ptr*)local_48);
            (&param_2->field_8, (weak_ptr*)local_38)->__internal_set_weak_ptr();
            local_38->~weak_ptr();
            local_48->~shared_ptr();
        }
    }

    // 0x100a55d40, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<tweak::EditField>::ref_counter_shared(unsigned long, tweak::EditField*): jumps straight to the base-object constructor

    // 0x100a55d50, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<tweak::EditField>::ref_counter_shared(unsigned long, tweak::EditField*)
    void ref_counter_shared<tweak::EditField>::ref_counter_shared(ulong param_1, EditField* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7498 + 16;
        *(ulong*)(this + 16) = param_1;
        *(EditField**)(this + 24) = param_2;
    }

    // 0x100a55d90, 48 bytes, inline, placed by debug map only (low confidence)
    // tweak::Enum* placement_new<tweak::Enum, char const*&, StringEnum const*&, int*&>(void*, char const*&, StringEnum const*&, int*&)
    Enum* placement_new<tweak::Enum, char const*&, StringEnum_const*&, int*&>(void* param_1, char** param_2,
                                                                              StringEnum** param_3, int** param_4) {
        tweak::Enum::Enum(param_1, *param_2, *param_3, *param_4);
        return param_1;
    }

    // 0x100a55dc0, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<tweak::Enum>* placement_new<ref_counter_shared<tweak::Enum>, int, tweak::Enum*&>(void*, int&&, tweak::Enum*&)
    ref_counter_shared* placement_new<ref_counter_shared<tweak::Enum>, int, tweak::Enum*&>(void* param_1, int* param_2,
                                                                                           Enum** param_3) {
        ref_counter_shared<tweak::Enum>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x100a55de0, 144 bytes, inline, placed by debug map only (low confidence)
    // void shared_ptr_do_enable_shared_from_this<tweak::Enum>(ref_counter_base*, tweak::Enum*, tweak::Enum::enable_shared_type*)
    void shared_ptr_do_enable_shared_from_this<tweak::Enum>(ref_counter_base* param_1, Enum* param_2,
                                                            enable_shared_type* param_3) {
        hashtable_iterator<eastl::pair<int const, unsigned int>, false, false> local_48[16];
        weak_ptr<oldscape::dash3d::Decor> local_38[24];

        if (param_1 != (ref_counter_base*)0) {
            param_1->IncRef();
            eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>::hashtable_iterator(
                local_48, (hash_node*)param_1, (hash_node**)param_2);
            weak_ptr<oldscape::dash3d::Decor>::weak_ptr(local_38, (weak_ptr*)local_48);
            (&param_2->field_8, (weak_ptr*)local_38)->__internal_set_weak_ptr();
            local_38->~weak_ptr();
            local_48->~shared_ptr();
        }
    }

    // 0x100a55e70, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<tweak::Enum>::ref_counter_shared(unsigned long, tweak::Enum*): jumps straight to the base-object constructor

    // 0x100a55e80, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<tweak::Enum>::ref_counter_shared(unsigned long, tweak::Enum*)
    void ref_counter_shared<tweak::Enum>::ref_counter_shared(ulong param_1, Enum* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7448 + 16;
        *(ulong*)(this + 16) = param_1;
        *(Enum**)(this + 24) = param_2;
    }

    // 0x100a55ec0, 96 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<tweak::Enum>::DeleteData()
    /* ref_counter_shared<tweak::Swatch>::DeleteData() */

    void ref_counter_shared<tweak::Swatch>::DeleteData() {
        long lVar1;
        ulong uVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar1 = 0;
                uVar2 = 0;
                do {
                    (*(code*)**(undefined8**)(*(long*)(this + 24) + lVar1))(*(long*)(this + 24) + lVar1);
                    uVar2 = uVar2 + 1;
                    lVar1 = lVar1 + 336;
                } while (uVar2 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x100a57ae0, 48 bytes, inline, placed by debug map only (low confidence)
    // tweak::Swatch* placement_new<tweak::Swatch, float*&, float*&, float*&, decltype(nullptr)>(void*, float*&, float*&, float*&, decltype(nullptr)&&)
    Swatch* placement_new<tweak::Swatch, float*&, float*&, float*&, decltype(nullptr)>(
        void* param_1, float** param_2, float** param_3, float** param_4, _func_decltype_nullptr** param_5) {
        tweak::Swatch::Swatch(param_1, *param_2, *param_3, *param_4, (float*)0);
        return param_1;
    }

    // 0x100a57b10, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<tweak::Swatch>* placement_new<ref_counter_shared<tweak::Swatch>, int, tweak::Swatch*&>(void*, int&&, tweak::Swatch*&)
    ref_counter_shared* placement_new<ref_counter_shared<tweak::Swatch>, int, tweak::Swatch*&>(void* param_1,
                                                                                               int* param_2,
                                                                                               Swatch** param_3) {
        ref_counter_shared<tweak::Swatch>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x100a57b30, 144 bytes, inline, placed by debug map only (low confidence)
    // void shared_ptr_do_enable_shared_from_this<tweak::Swatch>(ref_counter_base*, tweak::Swatch*, tweak::Swatch::enable_shared_type*)
    void shared_ptr_do_enable_shared_from_this<tweak::Swatch>(ref_counter_base* param_1, Swatch* param_2,
                                                              enable_shared_type* param_3) {
        hashtable_iterator<eastl::pair<int const, unsigned int>, false, false> local_48[16];
        weak_ptr<oldscape::dash3d::Decor> local_38[24];

        if (param_1 != (ref_counter_base*)0) {
            param_1->IncRef();
            eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>::hashtable_iterator(
                local_48, (hash_node*)param_1, (hash_node**)param_2);
            weak_ptr<oldscape::dash3d::Decor>::weak_ptr(local_38, (weak_ptr*)local_48);
            (&param_2->field_8, (weak_ptr*)local_38)->__internal_set_weak_ptr();
            local_38->~weak_ptr();
            local_48->~shared_ptr();
        }
    }

    // 0x100a57bc0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<tweak::Swatch>::ref_counter_shared(unsigned long, tweak::Swatch*): jumps straight to the base-object constructor

    // 0x100a57bd0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<tweak::Swatch>::ref_counter_shared(unsigned long, tweak::Swatch*)
    void ref_counter_shared<tweak::Swatch>::ref_counter_shared(ulong param_1, Swatch* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7470 + 16;
        *(ulong*)(this + 16) = param_1;
        *(Swatch**)(this + 24) = param_2;
    }

    // 0x100a57c10, 48 bytes, inline, placed by debug map only (low confidence)
    // tweak::Swatch* placement_new<tweak::Swatch, float*&, float*&, float*&, float*&>(void*, float*&, float*&, float*&, float*&)
    /* tweak::Swatch* placement_new<tweak::Swatch, float*, float*, float*, float*>(void*,
   float*&&, float*&&, float*&&, float*&&) */

    Swatch* placement_new<tweak::Swatch, float*, float*, float*, float*>(void* param_1, float** param_2,
                                                                         float** param_3, float** param_4,
                                                                         float** param_5) {
        tweak::Swatch::Swatch(param_1, *param_2, *param_3, *param_4, *param_5);
        return param_1;
    }

    // 0x100a57c40, 32 bytes, inline, placed by debug map only (low confidence)
    // tweak::Container* placement_new<tweak::Container, char const*&>(void*, char const*&)
    Container* placement_new<tweak::Container, char const*&>(void* param_1, char** param_2) {
        tweak::Container::Container(param_1, *param_2);
        return param_1;
    }

    // 0x100a58cb0, 48 bytes, inline, placed by debug map only (low confidence)
    // tweak::GradientSlider* placement_new<tweak::GradientSlider, char const*&, float, float, float>(void*, char const*&, float&&, float&&, float&&)
    /* tweak::GradientSlider* placement_new<tweak::GradientSlider, char const*&, float&,
   float&, float&>(void*, char const*&, float&, float&, float&) */

    GradientSlider* placement_new<tweak::GradientSlider, char const*&, float&, float&, float&>(
        void* param_1, char** param_2, float* param_3, float* param_4, float* param_5) {
        tweak::GradientSlider::GradientSlider(param_1, *param_2, *param_3, *param_4, *param_5);
        return param_1;
    }

    // 0x100a58ce0, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<tweak::GradientSlider>* placement_new<ref_counter_shared<tweak::GradientSlider>, int, tweak::GradientSlider*&>(void*, int&&, tweak::GradientSlider*&)
    ref_counter_shared* jag::placement_new<ref_counter_shared<tweak::GradientSlider>, int, tweak::GradientSlider*&>(
        void* param_1, int* param_2, GradientSlider** param_3) {
        ref_counter_shared<tweak::GradientSlider>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x100a58d00, 144 bytes, inline, placed by debug map only (low confidence)
    // void shared_ptr_do_enable_shared_from_this<tweak::GradientSlider>(ref_counter_base*, tweak::GradientSlider*, tweak::GradientSlider::enable_shared_type*)
    void shared_ptr_do_enable_shared_from_this<tweak::GradientSlider>(ref_counter_base* param_1,
                                                                      GradientSlider* param_2,
                                                                      enable_shared_type* param_3) {
        hashtable_iterator<eastl::pair<int const, unsigned int>, false, false> local_48[16];
        weak_ptr<oldscape::dash3d::Decor> local_38[24];

        if (param_1 != (ref_counter_base*)0) {
            param_1->IncRef();
            eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>::hashtable_iterator(
                local_48, (hash_node*)param_1, (hash_node**)param_2);
            weak_ptr<oldscape::dash3d::Decor>::weak_ptr(local_38, (weak_ptr*)local_48);
            (&param_2->field_8, (weak_ptr*)local_38)->__internal_set_weak_ptr();
            local_38->~weak_ptr();
            local_48->~shared_ptr();
        }
    }

    // 0x100a58d90, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<tweak::GradientSlider>::ref_counter_shared(unsigned long, tweak::GradientSlider*): jumps straight to the base-object constructor

    // 0x100a58da0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<tweak::GradientSlider>::ref_counter_shared(unsigned long, tweak::GradientSlider*)
    void ref_counter_shared<tweak::GradientSlider>::ref_counter_shared(ulong param_1, GradientSlider* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7440 + 16;
        *(ulong*)(this + 16) = param_1;
        *(GradientSlider**)(this + 24) = param_2;
    }

    // 0x100a597c0, 48 bytes, inline, placed by debug map only (low confidence)
    // tweak::GradientSlider* placement_new<tweak::GradientSlider, char const (&) [10], float, float, float&>(void*, char const (&) [10], float&&, float&&, float&)
    /* tweak::GradientSlider* placement_new<tweak::GradientSlider, char const (&) [11],
   float, float, float>(void*, char const (&) [11], float&&, float&&, float&&) */

    GradientSlider* placement_new<tweak::GradientSlider, char const (&)[11], float, float, float>(
        void* param_1, char* param_2, float* param_3, float* param_4, float* param_5) {
        tweak::GradientSlider::GradientSlider(param_1, param_2, *param_3, *param_4, *param_5);
        return param_1;
    }

    // 0x100a5a1a0, 32 bytes, inline, placed by debug map only (low confidence)
    // tweak::Button* placement_new<tweak::Button, char const (&) [2]>(void*, char const (&) [2])
    Button* placement_new<tweak::Button, char const (&)[2]>(void* param_1, char* param_2) {
        tweak::Button::Button(param_1, param_2);
        return param_1;
    }

    // 0x100a5acb0, 32 bytes, inline, placed by debug map only (low confidence)
    // tweak::Button* placement_new<tweak::Button, char const*&, int&>(void*, char const*&, int&)
    Button* placement_new<tweak::Button, char const*&, int&>(void* param_1, char** param_2, int* param_3) {
        tweak::Button::Button(param_1, *param_2, *param_3);
        return param_1;
    }

    // 0x100a5b670, 32 bytes, inline, placed by debug map only (low confidence)
    // tweak::ColourPicker* placement_new<tweak::ColourPicker, char const*&, bool, math::Range<float>&>(void*, char const*&, bool&&, math::Range<float>&)
    /* tweak::ColourPicker* placement_new<tweak::ColourPicker, char const*&, bool&,
   math::Range<float>&>(void*, char const*&, bool&, math::Range<float>&) */

    ColourPicker* placement_new<tweak::ColourPicker, char const*&, bool&, math::Range<float>&>(void* param_1,
                                                                                               char** param_2,
                                                                                               bool* param_3,
                                                                                               Range* param_4) {
        tweak::ColourPicker::ColourPicker(param_1, *param_2, *param_3, param_4);
        return param_1;
    }

    // 0x100a5b690, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<tweak::ColourPicker>* placement_new<ref_counter_shared<tweak::ColourPicker>, int, tweak::ColourPicker*&>(void*, int&&, tweak::ColourPicker*&)
    ref_counter_shared*
    placement_new<ref_counter_shared<tweak::ColourPicker>, int, tweak::ColourPicker*&>(void* param_1, int* param_2,
                                                                                       ColourPicker** param_3) {
        ref_counter_shared<tweak::ColourPicker>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x100a5b6b0, 144 bytes, inline, placed by debug map only (low confidence)
    // void shared_ptr_do_enable_shared_from_this<tweak::ColourPicker>(ref_counter_base*, tweak::ColourPicker*, tweak::ColourPicker::enable_shared_type*)
    void shared_ptr_do_enable_shared_from_this<tweak::ColourPicker>(ref_counter_base* param_1, ColourPicker* param_2,
                                                                    enable_shared_type* param_3) {
        hashtable_iterator<eastl::pair<int const, unsigned int>, false, false> local_48[16];
        weak_ptr<oldscape::dash3d::Decor> local_38[24];

        if (param_1 != (ref_counter_base*)0) {
            param_1->IncRef();
            eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>::hashtable_iterator(
                local_48, (hash_node*)param_1, (hash_node**)param_2);
            weak_ptr<oldscape::dash3d::Decor>::weak_ptr(local_38, (weak_ptr*)local_48);
            (&param_2->field_8, (weak_ptr*)local_38)->__internal_set_weak_ptr();
            local_38->~weak_ptr();
            local_48->~shared_ptr();
        }
    }

    // 0x100a5b740, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<tweak::ColourPicker>::ref_counter_shared(unsigned long, tweak::ColourPicker*): jumps straight to the base-object constructor

    // 0x100a5b750, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<tweak::ColourPicker>::ref_counter_shared(unsigned long, tweak::ColourPicker*)
    void ref_counter_shared<tweak::ColourPicker>::ref_counter_shared(ulong param_1, ColourPicker* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7438 + 16;
        *(ulong*)(this + 16) = param_1;
        *(ColourPicker**)(this + 24) = param_2;
    }

    // 0x100a5ca30, 32 bytes, inline, placed by debug map only (low confidence)
    // tweak::ColourPicker* placement_new<tweak::ColourPicker, char const*&, bool, math::Range<float>&, math::Range<float>&>(void*, char const*&, bool&&, math::Range<float>&, math::Range<float>&)
    /* tweak::ColourPicker* placement_new<tweak::ColourPicker, char const*&, bool&,
   math::Range<float>&, math::Range<float>&>(void*, char const*&, bool&,
   math::Range<float>&, math::Range<float>&) */

    ColourPicker*
    jag::placement_new<tweak::ColourPicker, char const*&, bool&, math::Range<float>&, math::Range<float>&>(
        void* param_1, char** param_2, bool* param_3, Range* param_4, Range* param_5) {
        tweak::ColourPicker::ColourPicker(param_1, *param_2, *param_3, param_4, param_5);
        return param_1;
    }

    // 0x100a5dd30, 32 bytes, inline, placed by debug map only (low confidence)
    // tweak::Label* placement_new<tweak::Label, char const*&>(void*, char const*&)
    Label* placement_new<tweak::Label, char const*&>(void* param_1, char** param_2) {
        tweak::Label::Label(param_1, *param_2);
        return param_1;
    }

    // 0x100a5dd50, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<tweak::Label>* placement_new<ref_counter_shared<tweak::Label>, int, tweak::Label*&>(void*, int&&, tweak::Label*&)
    ref_counter_shared*
    placement_new<ref_counter_shared<tweak::Label>, int, tweak::Label*&>(void* param_1, int* param_2, Label** param_3) {
        ref_counter_shared<tweak::Label>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x100a5dd70, 144 bytes, inline, placed by debug map only (low confidence)
    // void shared_ptr_do_enable_shared_from_this<tweak::Label>(ref_counter_base*, tweak::Label*, tweak::Label::enable_shared_type*)
    void shared_ptr_do_enable_shared_from_this<tweak::Label>(ref_counter_base* param_1, Label* param_2,
                                                             enable_shared_type* param_3) {
        hashtable_iterator<eastl::pair<int const, unsigned int>, false, false> local_48[16];
        weak_ptr<oldscape::dash3d::Decor> local_38[24];

        if (param_1 != (ref_counter_base*)0) {
            param_1->IncRef();
            eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>::hashtable_iterator(
                local_48, (hash_node*)param_1, (hash_node**)param_2);
            weak_ptr<oldscape::dash3d::Decor>::weak_ptr(local_38, (weak_ptr*)local_48);
            (&param_2->field_8, (weak_ptr*)local_38)->__internal_set_weak_ptr();
            local_38->~weak_ptr();
            local_48->~shared_ptr();
        }
    }

    // 0x100a5de50, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<tweak::Label>::ref_counter_shared(unsigned long, tweak::Label*): jumps straight to the base-object constructor

    // 0x100a5de60, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<tweak::Label>::ref_counter_shared(unsigned long, tweak::Label*)
    void ref_counter_shared<tweak::Label>::ref_counter_shared(ulong param_1, Label* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7458 + 16;
        *(ulong*)(this + 16) = param_1;
        *(Label**)(this + 24) = param_2;
    }

    // 0x100a5dea0, 32 bytes, inline, placed by debug map only (low confidence)
    // tweak::Container* placement_new<tweak::Container, char const*&, bool&>(void*, char const*&, bool&)
    Container* placement_new<tweak::Container, char const*&, bool&>(void* param_1, char** param_2, bool* param_3) {
        tweak::Container::Container(param_1, *param_2, *param_3);
        return param_1;
    }

    // 0x100a5e580, 32 bytes, inline, placed by debug map only (low confidence)
    // tweak::Settings* placement_new<tweak::Settings, eastl::string const&, tweak::ContainerGroup&>(void*, eastl::string const&, tweak::ContainerGroup&)
    Settings* jag::placement_new<tweak::Settings, eastl::stringconst&, tweak::ContainerGroup&>(
        void* param_1, basic_string* param_2, ContainerGroup* param_3) {
        tweak::Settings::Settings(param_1, param_2, param_3);
        return param_1;
    }

    // 0x100a5e5a0, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<tweak::Settings>* placement_new<ref_counter_shared<tweak::Settings>, int, tweak::Settings*&>(void*, int&&, tweak::Settings*&)
    ref_counter_shared* placement_new<ref_counter_shared<tweak::Settings>, int, tweak::Settings*&>(void* param_1,
                                                                                                   int* param_2,
                                                                                                   Settings** param_3) {
        ref_counter_shared<tweak::Settings>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x100a5e5c0, 144 bytes, inline, placed by debug map only (low confidence)
    // void shared_ptr_do_enable_shared_from_this<tweak::Settings>(ref_counter_base*, tweak::Settings*, tweak::Settings::enable_shared_type*)
    void shared_ptr_do_enable_shared_from_this<tweak::Settings>(ref_counter_base* param_1, Settings* param_2,
                                                                enable_shared_type* param_3) {
        hashtable_iterator<eastl::pair<int const, unsigned int>, false, false> local_48[16];
        weak_ptr<oldscape::dash3d::Decor> local_38[24];

        if (param_1 != (ref_counter_base*)0) {
            param_1->IncRef();
            eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>::hashtable_iterator(
                local_48, (hash_node*)param_1, (hash_node**)param_2);
            weak_ptr<oldscape::dash3d::Decor>::weak_ptr(local_38, (weak_ptr*)local_48);
            (&param_2->field_8, (weak_ptr*)local_38)->__internal_set_weak_ptr();
            local_38->~weak_ptr();
            local_48->~shared_ptr();
        }
    }

    // 0x100a5e650, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<tweak::Settings>::ref_counter_shared(unsigned long, tweak::Settings*): jumps straight to the base-object constructor

    // 0x100a5e660, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<tweak::Settings>::ref_counter_shared(unsigned long, tweak::Settings*)
    void ref_counter_shared<tweak::Settings>::ref_counter_shared(ulong param_1, Settings* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7488 + 16;
        *(ulong*)(this + 16) = param_1;
        *(Settings**)(this + 24) = param_2;
    }

    // 0x100a5e6a0, 96 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<tweak::Settings>::DeleteData()
    void ref_counter_shared<tweak::Settings>::DeleteData() {
        long lVar1;
        ulong uVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar1 = 0;
                uVar2 = 0;
                do {
                    (*(code*)**(undefined8**)(*(long*)(this + 24) + lVar1))(*(long*)(this + 24) + lVar1);
                    uVar2 = uVar2 + 1;
                    lVar1 = lVar1 + 448;
                } while (uVar2 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x100a5e780, 32 bytes, inline, placed by debug map only (low confidence)
    // tweak::Container* placement_new<tweak::Container, eastl::string const&>(void*, eastl::string const&)
    Container* placement_new<tweak::Container, eastl::stringconst&>(void* param_1, basic_string* param_2) {
        tweak::Container::Container(param_1, param_2);
        return param_1;
    }

    // 0x100a61dd0, 32 bytes, inline, placed by debug map only (low confidence)
    // tweak::CheckBox* placement_new<tweak::CheckBox, char const (&) [15]>(void*, char const (&) [15])
    CheckBox* placement_new<tweak::CheckBox, char const (&)[15]>(void* param_1, char* param_2) {
        tweak::CheckBox::CheckBox(param_1, param_2);
        return param_1;
    }

} // namespace jag

namespace jag::tweak {
    class ContainerGroup : public Control // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~ContainerGroup();
        OnMouseOver(float, float);
        void SetMouseOver(bool);
        void SetTweaky(weak_ptr<Tweaky>);
        AddPage(eastl::string const&);
        PageInfo* GetPage(eastl::string const&);
        void SetSelectedPage(int);
        void Sort();
        void GetCurrentPage();

        // data members, from how the methods use this: 296 bytes, the first 216 are Control
        char _unknown_216[64];
        int field_280; // offset 280
        char _unknown_284[12];
    };

    class PageInfo {
    public:
        ~PageInfo();
        PageInfo(PageInfo&&);
        PageInfo(PageInfo const&);
        PageInfo* operator=(PageInfo&&);

        // data members, from how the methods use this: 74 bytes
        char _unknown_0[48];
        undefined8 field_48; // offset 48
        char _unknown_56[2];
        undefined8 field_58; // offset 58
        undefined8 field_66; // offset 66
    };

    // 0x100a44de0, 16 bytes, complete-object destructor, inline, placed by class name
    // ContainerGroup::GetPage(eastl::string const&)::$_15::~$_15(): jumps straight to the base-object destructor

    // 0x100a51d70, 16 bytes, base-object destructor, inline, placed by class name
    // ContainerGroup::GetPage(eastl::string const&)::$_15::~$_15()
    /* ~$_15() */

    void ContainerGroup::GetPage(eastl::stringconst&)::$_15::~__15() {
        ~basic_string();
    }

    // 0x100a52b10, 80 bytes, base-object destructor, inline, placed by class name and debug map
    // ContainerGroup::~ContainerGroup()
    void ContainerGroup::~ContainerGroup() {
        field_0 = &PTR__OptionStore_100f1e020;
        (&field_288)->~shared_ptr();
        (&field_248)->~vector();
        (&field_216)->~basic_string();
        ~Control();
    }

    // 0x100a54d70, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // SizeControl::SizeControl(): jumps straight to the base-object constructor

    // 0x100a54d80, 48 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // SizeControl::SizeControl()
    void SizeControl::SizeControl() {
        new (this) Container();
        field_0 = &PTR__RadioGroup_100f1de18;
        SetDirection(1);
    }

    // 0x100a5e860, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // PageInfo::PageInfo(PageInfo&&): jumps straight to the base-object constructor

    // 0x100a5e950, 80 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // PageInfo::PageInfo(PageInfo&&)
    void PageInfo::PageInfo(PageInfo* param_1) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;

        new (this) eastl::string(param_1);
        shared_ptr<oldscape::RSevenDebugPresetProvider>::shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(
            (shared_ptr<oldscape::RSevenDebugPresetProvider>*)&field_32, (shared_ptr*)&param_1->field_32);
        uVar1 = param_1->field_48;
        uVar2 = *(undefined8*)&param_1->field_56;
        uVar3 = param_1->field_66;
        field_58 = param_1->field_58;
        field_66 = uVar3;
        field_48 = uVar1;
        *(undefined8*)&field_56 = uVar2;
    }

    // 0x100a5eb30, 32 bytes, inline, placed by class name and debug map
    // ContainerGroup::GetPage(eastl::string const&)::$_15::operator()(PageInfo const&) const
    /* ContainerGroup::GetPage(eastl::string
   const&)::$_15::TEMPNAMEPLACEHOLDERVALUE(PageInfo const&) const */

    void ContainerGroup::GetPage(eastl::stringconst&)::$_15::operator()(PageInfo* param_1) {
        eastl::operator==((basic_string*)param_1, (basic_string*)this);
    }

    // 0x100a5f0f0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // PageInfo::PageInfo(PageInfo const&): jumps straight to the base-object constructor

    // 0x100a5f1c0, 80 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // PageInfo::PageInfo(PageInfo const&)
    void PageInfo::PageInfo(PageInfo* param_1) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;

        new (this) eastl::string(param_1);
        new (&field_32, (shared_ptr*)&param_1->field_32) shared_ptr<oldscape::dash3d::Decor>();
        uVar1 = param_1->field_48;
        uVar2 = *(undefined8*)&param_1->field_56;
        uVar3 = param_1->field_66;
        field_58 = param_1->field_58;
        field_66 = uVar3;
        field_48 = uVar1;
        *(undefined8*)&field_56 = uVar2;
    }

    // 0x100a5f2b0, 64 bytes, inline, placed by debug map only (low confidence)
    // PageInfo::operator=(PageInfo&&)
    /* PageInfo::TEMPNAMEPLACEHOLDERVALUE(PageInfo&&) */

    PageInfo* PageInfo::operator=(PageInfo* param_1) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;

        eastl::string::operator=((eastl::string*)this, (basic_string*)param_1);
        shared_ptr<Container>::operator=((shared_ptr<Container>*)&field_32, (shared_ptr*)&param_1->field_32);
        uVar1 = *(undefined8*)&param_1->field_56;
        uVar2 = param_1->field_58;
        uVar3 = param_1->field_66;
        field_48 = param_1->field_48;
        *(undefined8*)&field_56 = uVar1;
        field_58 = uVar2;
        field_66 = uVar3;
        return this;
    }

    // 0x100a5f8c0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // Event::Event(Event const&): jumps straight to the base-object constructor

    // 0x100a5f8d0, 32 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // Event::Event(Event const&)
    /* render::KeepAliveSharedPtrAndOwner::KeepAliveSharedPtrAndOwner(render::KeepAliveSharedPtrAndOwner
   const&) */

    void render::KeepAliveSharedPtrAndOwner::KeepAliveSharedPtrAndOwner(KeepAliveSharedPtrAndOwner* param_1) {
        new (this) shared_ptr<oldscape::dash3d::Decor>(param_1);
        field_16 = param_1->field_16;
    }

    // 0x100a61480, 32 bytes, inline, placed by class name and debug map
    // ContainerGroup::GetCurrentPage()
    void ContainerGroup::GetCurrentPage() {
        eastl::vector<PageInfo, eastl::allocator>::operator[]((vector<PageInfo, eastl::allocator>*)&field_248,
                                                              (long)field_280);
    }

    // 0x100a635c0, 336 bytes, placed by debug map only (low confidence)
    // SizeControl::Initialise()::$_20::operator()(Event const&) const
    /* SizeControl::Initialise()::$_20::TEMPNAMEPLACEHOLDERVALUE(Event const&)
   const */

    void SizeControl::Initialise()::$_20::operator()(Event* param_1) {
        bool bVar1;
        char cVar2;
        SystemSettings* pSVar3;
        Control* pCVar4;
        Tweaky* pTVar5;
        shared_ptr local_28;

        if (param_1->field_16 == 2) {
            weak_ptr<oldscape::rs2lib::IfType>::lock();
            bVar1 = shared_ptr::operator_cast_to_bool(&local_28);
            if (bVar1) {
                pSVar3 = (SystemSettings*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_28);
                cVar2 = pSVar3->GetSoftwareNameAsSettingPath();
                if (cVar2 != '\0') {
                    pTVar5 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_28);
                    pTVar5->SetMinimised(false);
                    pCVar4 = (Control*)shared_ptr<Control>::operator->((shared_ptr<Control>*)param_1);
                    pCVar4->SetText("Shrink");
                    goto LAB_100a636e4;
                }
            }
            bVar1 = shared_ptr::operator_cast_to_bool(&local_28);
            if (bVar1) {
                pTVar5 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_28);
                pTVar5->SetMinimised(true);
                pCVar4 = (Control*)shared_ptr<Control>::operator->((shared_ptr<Control>*)param_1);
                pCVar4->SetText("Expand");
            }
        } else {
            if (param_1->field_16 != 1) {
                return;
            }
            weak_ptr<oldscape::rs2lib::IfType>::lock();
            bVar1 = shared_ptr::operator_cast_to_bool(&local_28);
            if (bVar1) {
                pSVar3 = (SystemSettings*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_28);
                cVar2 = pSVar3->GetSoftwareNameAsSettingPath();
                if (cVar2 != '\0') {
                    pCVar4 = (Control*)shared_ptr<Control>::operator->((shared_ptr<Control>*)param_1);
                    pCVar4->SetText("Expand");
                    goto LAB_100a636e4;
                }
            }
            pCVar4 = (Control*)shared_ptr<Control>::operator->((shared_ptr<Control>*)param_1);
            pCVar4->SetText("Shrink");
        }
    LAB_100a636e4:
        local_28.~shared_ptr();
    }

    // 0x100a63710, 16 bytes, inline, placed by class name and debug map
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // Tweaky::IsMinimised()
    /* SystemSettings::GetSoftwareNameAsSettingPath() const */

    undefined1 SystemSettings::GetSoftwareNameAsSettingPath() {
        return m_softwareNameAsSettingPath;
    }

    // 0x100a63720, 16 bytes, inline, placed by class name and debug map
    // Tweaky::SetMinimised(bool)
    void Tweaky::SetMinimised(bool param_1) {
        m_minimised = param_1;
    }

    // 0x100a64020, 336 bytes, placed by debug map only (low confidence)
    // SizeControl::Initialise()::$_21::operator()(Event const&) const
    /* SizeControl::Initialise()::$_21::TEMPNAMEPLACEHOLDERVALUE(Event const&)
   const */

    void SizeControl::Initialise()::$_21::operator()(Event* param_1) {
        bool bVar1;
        char cVar2;
        Tweaky* pTVar3;
        Control* pCVar4;
        shared_ptr local_28;

        if (param_1->field_16 == 2) {
            weak_ptr<oldscape::rs2lib::IfType>::lock();
            bVar1 = shared_ptr::operator_cast_to_bool(&local_28);
            if (bVar1) {
                pTVar3 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_28);
                cVar2 = pTVar3->IsAttached();
                if (cVar2 != '\0') {
                    pTVar3 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_28);
                    pTVar3->SetAttached(false);
                    pCVar4 = (Control*)shared_ptr<Control>::operator->((shared_ptr<Control>*)param_1);
                    pCVar4->SetText("Attach");
                    goto LAB_100a64144;
                }
            }
            bVar1 = shared_ptr::operator_cast_to_bool(&local_28);
            if (bVar1) {
                pTVar3 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_28);
                pTVar3->SetAttached(true);
                pCVar4 = (Control*)shared_ptr<Control>::operator->((shared_ptr<Control>*)param_1);
                pCVar4->SetText("Detach");
            }
        } else {
            if (param_1->field_16 != 1) {
                return;
            }
            weak_ptr<oldscape::rs2lib::IfType>::lock();
            bVar1 = shared_ptr::operator_cast_to_bool(&local_28);
            if (bVar1) {
                pTVar3 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_28);
                cVar2 = pTVar3->IsAttached();
                if (cVar2 != '\0') {
                    pCVar4 = (Control*)shared_ptr<Control>::operator->((shared_ptr<Control>*)param_1);
                    pCVar4->SetText("Detach");
                    goto LAB_100a64144;
                }
            }
            pCVar4 = (Control*)shared_ptr<Control>::operator->((shared_ptr<Control>*)param_1);
            pCVar4->SetText("Attach");
        }
    LAB_100a64144:
        local_28.~shared_ptr();
    }

    // 0x100a64170, 64 bytes, inline, placed by class name and debug map
    // Tweaky::SetAttached(bool)
    void Tweaky::SetAttached(bool param_1) {
        undefined1 local_20[16];

        m_attached = param_1;
        field_132 = 0;
        field_136 = 0;
        new (local_20) oldscape::dash3d::GridRect(0, 0, 0, 0);
        m_placement = local_20._0_4_;
        field_108 = local_20._4_4_;
        field_112 = local_20._8_4_;
        field_116 = local_20._12_4_;
    }

    // 0x100a64aa0, 96 bytes, placed by debug map only (low confidence)
    // SizeControl::Initialise()::$_22::operator()(Event const&) const
    /* SizeControl::Initialise()::$_22::TEMPNAMEPLACEHOLDERVALUE(Event const&)
   const */

    void SizeControl::Initialise()::$_22::operator()(Event* param_1) {
        shared_ptr local_20;

        if (param_1->field_16 == 2) {
            weak_ptr<oldscape::rs2lib::IfType>::lock();
            if (shared_ptr::operator_cast_to_bool(&local_20)) {
                shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)(Tweaky*)&local_20);
                local_20.ToggleControlMinHeight();
            }
            local_20.~shared_ptr();
        }
    }

} // namespace jag::tweak

namespace jag::fixedfunction {
    // 0x100a5f8f0, 80 bytes, inline, placed by debug map only (low confidence)
    // function<void (BaseApp*), 128ul, 16ul, (Methods)0>::function<std::__bind<std::function<void (tweak::Event const&)> const&, tweak::Event const&>, void>(std::__bind<std::function<void (tweak::Event const&)> const&, tweak::Event const&>&&)
    /* function<void (BaseApp*), 128ul, 16ul,
   (Methods)0>::function<std::__bind<std::function<void (tweak::Event
   const&)> const&, tweak::Event const&>, void>(std::__bind<std::function<void
   (tweak::Event const&)> const&, tweak::Event const&>&&) */

    void function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function<
        std::__bind<std::function<void(tweak::Event_const&)> const&, tweak::Event_const&>, void>(
        function<void(BaseApp*), 128ul, 16ul, (Methods)0>* this, __bind* param_1) {
        _func_void_void_ptr_void_ptr* p_Var1;
        _func_void_void_ptr_BaseApp_ptr* p_Var2;
        _func_void_void_ptr* p_Var3;
        _lambda_void__void___1_ local_28[8];
        _lambda_void__jag__BaseApp___1_ local_20[8];
        _lambda_void___1_ local_18[8];

        *(undefined8*)this = 0;
        std::__bind<std::function<void(tweak::Event_const&)> const&, tweak::Event_const&>::__bind(
            (__bind<std::function<void(tweak::Event_const&)> const&, tweak::Event_const&>*)(this + 16), param_1);
        p_Var1 = fixedfunction::function::function(std::__bind&&)::{
            lambda(void*, void*) #1
        }
        ::operator_cast_to_function_pointer(local_28);
        *(_func_void_void_ptr_void_ptr**)(this + 144) = p_Var1;
        p_Var2 = fixedfunction::function::function(std::__bind&&)::{
            lambda(void*, BaseApp*) #1
        }
        ::operator_cast_to_function_pointer(local_20);
        *(_func_void_void_ptr_BaseApp_ptr**)this = p_Var2;
        p_Var3 = fixedfunction::function::function(std::__bind&&)::{
            lambda(void*) #1
        }
        ::operator_cast_to_function_pointer(local_18);
        *(_func_void_void_ptr**)(this + 152) = p_Var3;
    }

    // 0x100a5f950, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (BaseApp*), 128ul, 16ul, (Methods)0>::function<std::__bind<std::function<void (tweak::Event const&)> const&, tweak::Event const&>, void>(std::__bind<std::function<void (tweak::Event const&)> const&, tweak::Event const&>&&)::{lambda(void*, void*)#1}::operator void (*)(void*, void*)() const
    /* function<void (BaseApp*), 128ul, 16ul,
   (Methods)0>::function<std::__bind<std::function<void (tweak::Event
   const&)> const&, tweak::Event const&>, void>(std::__bind<std::function<void
   (tweak::Event const&)> const&, tweak::Event const&>&&)::{lambda(void*,
   void*)#1}::operator void (*)(void*, void*)() const */

    _func_void_void_ptr_void_ptr* function::function(std::__bind&&)::{
        lambda(void*, void*) #1
    }
    ::operator_cast_to_function_pointer() {
        return (_func_void_void_ptr_void_ptr*)PTR___invoke_100ee95d0;
    }

    // 0x100a5f960, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (BaseApp*), 128ul, 16ul, (Methods)0>::function<std::__bind<std::function<void (tweak::Event const&)> const&, tweak::Event const&>, void>(std::__bind<std::function<void (tweak::Event const&)> const&, tweak::Event const&>&&)::{lambda(void*, BaseApp*)#1}::operator void (*)(void*, BaseApp*)() const
    /* function<void (BaseApp*), 128ul, 16ul,
   (Methods)0>::function<std::__bind<std::function<void (tweak::Event
   const&)> const&, tweak::Event const&>, void>(std::__bind<std::function<void
   (tweak::Event const&)> const&, tweak::Event const&>&&)::{lambda(void*,
   BaseApp*)#1}::operator void (*)(void*, BaseApp*)() const */

    _func_void_void_ptr_BaseApp_ptr* function::function(std::__bind&&)::{
        lambda(void*, BaseApp*) #1
    }
    ::operator_cast_to_function_pointer() {
        return (_func_void_void_ptr_BaseApp_ptr*)PTR_BaseApp___100ee95c8;
    }

    // 0x100a5f970, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (BaseApp*), 128ul, 16ul, (Methods)0>::function<std::__bind<std::function<void (tweak::Event const&)> const&, tweak::Event const&>, void>(std::__bind<std::function<void (tweak::Event const&)> const&, tweak::Event const&>&&)::{lambda(void*)#1}::operator void (*)(void*)() const
    /* function<void (BaseApp*), 128ul, 16ul,
   (Methods)0>::function<std::__bind<std::function<void (tweak::Event
   const&)> const&, tweak::Event const&>, void>(std::__bind<std::function<void
   (tweak::Event const&)> const&, tweak::Event const&>&&)::{lambda(void*)#1}::operator
   void (*)(void*)() const */

    _func_void_void_ptr* function::function(std::__bind&&)::{
        lambda(void*) #1
    }
    ::operator_cast_to_function_pointer() {
        return (_func_void_void_ptr*)PTR___invoke_100ee95c0;
    }

    // 0x100a5fac0, 32 bytes, inline, placed by debug map only (low confidence)
    // function<void (BaseApp*), 128ul, 16ul, (Methods)0>::function<std::__bind<std::function<void (tweak::Event const&)> const&, tweak::Event const&>, void>(std::__bind<std::function<void (tweak::Event const&)> const&, tweak::Event const&>&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function<
        std::__bind<std::function<void(tweak::Event_const&)> const&, tweak::Event_const&>, void>(
        std::__bind<std::function<void(tweak::Event_const&)> const&, tweak::Event_const&>&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_1, param_2);
    }

    // 0x100a5fae0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (BaseApp*), 128ul, 16ul, (Methods)0>::function<std::__bind<std::function<void (tweak::Event const&)> const&, tweak::Event const&>, void>(std::__bind<std::function<void (tweak::Event const&)> const&, tweak::Event const&>&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (BaseApp*), 128ul, 16ul,
   (Methods)0>::function<std::__bind<std::function<void (tweak::Event
   const&)> const&, tweak::Event const&>, void>(std::__bind<std::function<void
   (tweak::Event const&)> const&, tweak::Event const&>&&)::{lambda(void*,
   void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function<
        std::__bind<std::function<void(tweak::Event_const&)> const&, tweak::Event_const&>, void>(
        std::__bind<std::function<void(tweak::Event_const&)> const&, tweak::Event_const&>&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        std::__bind<std::function<void(tweak::Event_const&)> const&, tweak::Event_const&>::__bind(param_2, param_1);
    }

    // 0x100a5fbb0, 32 bytes, inline, placed by debug map only (low confidence)
    // function<void (BaseApp*), 128ul, 16ul, (Methods)0>::function<std::__bind<std::function<void (tweak::Event const&)> const&, tweak::Event const&>, void>(std::__bind<std::function<void (tweak::Event const&)> const&, tweak::Event const&>&&)::{lambda(void*, BaseApp*)#1}::__invoke(void*, BaseApp*)
    /* function<void (BaseApp*), 128ul, 16ul,
   (Methods)0>::function<std::__bind<std::function<void (tweak::Event
   const&)> const&, tweak::Event const&>, void>(std::__bind<std::function<void
   (tweak::Event const&)> const&, tweak::Event const&>&&)::{lambda(void*,
   BaseApp*)#1}::__invoke(void*, BaseApp*) */

    void function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function<
        std::__bind<std::function<void(tweak::Event_const&)> const&, tweak::Event_const&>, void>(
        std::__bind<std::function<void(tweak::Event_const&)> const&, tweak::Event_const&>&&)::{
        lambda(void*, BaseApp*) #1
    }
    ::BaseApp__(_lambda_void__jag__BaseApp___1_* param_1, BaseApp* param_2) {
        operator()(param_1, param_1, param_2);
    }

    // 0x100a5fbd0, 32 bytes, inline, placed by debug map only (low confidence)
    // function<void (BaseApp*), 128ul, 16ul, (Methods)0>::function<std::__bind<std::function<void (tweak::Event const&)> const&, tweak::Event const&>, void>(std::__bind<std::function<void (tweak::Event const&)> const&, tweak::Event const&>&&)::{lambda(void*, BaseApp*)#1}::operator()(void*, BaseApp*) const
    /* function<void (BaseApp*), 128ul, 16ul,
   (Methods)0>::function<std::__bind<std::function<void (tweak::Event
   const&)> const&, tweak::Event const&>, void>(std::__bind<std::function<void
   (tweak::Event const&)> const&, tweak::Event const&>&&)::{lambda(void*,
   BaseApp*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, BaseApp*) const */

    void function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function<
        std::__bind<std::function<void(tweak::Event_const&)> const&, tweak::Event_const&>, void>(
        std::__bind<std::function<void(tweak::Event_const&)> const&, tweak::Event_const&>&&)::{
        lambda(void*, BaseApp*) #1
    }
    ::operator()(void* param_1, BaseApp * param_2) {
        BaseApp* local_10;

        local_10 = param_2;
        std::__bind<std::function<void(tweak::Event_const&)> const&, tweak::Event_const&>::operator()(param_1,
                                                                                                      &local_10);
    }

    // 0x100a5fd00, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (BaseApp*), 128ul, 16ul, (Methods)0>::function<std::__bind<std::function<void (tweak::Event const&)> const&, tweak::Event const&>, void>(std::__bind<std::function<void (tweak::Event const&)> const&, tweak::Event const&>&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function<
        std::__bind<std::function<void(tweak::Event_const&)> const&, tweak::Event_const&>, void>(
        std::__bind<std::function<void(tweak::Event_const&)> const&, tweak::Event_const&>&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {
        operator()(param_1, param_1);
    }

    // 0x100a5fd10, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (BaseApp*), 128ul, 16ul, (Methods)0>::function<std::__bind<std::function<void (tweak::Event const&)> const&, tweak::Event const&>, void>(std::__bind<std::function<void (tweak::Event const&)> const&, tweak::Event const&>&&)::{lambda(void*)#1}::operator()(void*) const
    /* function<void (BaseApp*), 128ul, 16ul,
   (Methods)0>::function<std::__bind<std::function<void (tweak::Event
   const&)> const&, tweak::Event const&>, void>(std::__bind<std::function<void
   (tweak::Event const&)> const&, tweak::Event
   const&>&&)::{lambda(void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*) const */

    void function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function<
        std::__bind<std::function<void(tweak::Event_const&)> const&, tweak::Event_const&>, void>(
        std::__bind<std::function<void(tweak::Event_const&)> const&, tweak::Event_const&>&&)::{
        lambda(void*) #1
    }
    ::operator()(void* param_1) {
        std::__bind<std::function<void(tweak::Event_const&)> const&, tweak::Event_const&>::~__bind(param_1);
    }

} // namespace jag::fixedfunction

namespace jag::math {
    // 0x100a535b0, 16 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ColourStorage8888<RGBA8StorageLayout>::ColourStorage8888(unsigned int)
    void ColourStorage8888<RGBA8StorageLayout>::ColourStorage8888(uint param_1) {
        Set(this, param_1);
    }

    // 0x100a535c0, 112 bytes, inline, placed by debug map only (low confidence)
    // ColourStorage8888<RGBA8StorageLayout>::Set(unsigned int)
    void ColourStorage8888<RGBA8StorageLayout>::Set(uint param_1) {
        ColourStorage8888<RGBA8StorageLayout> CVar1;

        CVar1 = (ColourStorage8888<RGBA8StorageLayout>)extract_bits(param_1, 24, 8);
        this[3] = CVar1;
        CVar1 = (ColourStorage8888<RGBA8StorageLayout>)extract_bits(param_1, 16, 8);
        this[2] = CVar1;
        CVar1 = (ColourStorage8888<RGBA8StorageLayout>)extract_bits(param_1, 8, 8);
        this[1] = CVar1;
        CVar1 = (ColourStorage8888<RGBA8StorageLayout>)extract_bits(param_1, 0, 8);
        *this = CVar1;
    }

    // 0x100a5ff60, 16 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ColourStorage8888<RGBA8StorageLayout>::ColourStorage8888(float, float, float, float)
    void ColourStorage8888<RGBA8StorageLayout>::ColourStorage8888(float param_1, float param_2, float param_3,
                                                                  float param_4) {
        Set(this, param_1, param_2, param_3, param_4);
    }

    // 0x100a5ff70, 96 bytes, inline, placed by debug map only (low confidence)
    // float RoundToDecimalPlaces<float>(float, unsigned int)
    float RoundToDecimalPlaces<float>(float param_1, uint param_2) {
        uint uVar1;
        float fVar3;

        if (param_2 == 0) {
            fVar3 = 1.0;
        } else {
            uVar1 = 1;
            do {
                uVar1 = uVar1 * 10;
                param_1 = param_1 * 10.0;
                param_2 = param_2 - 1;
            } while (param_2 != 0);
            fVar3 = (float)uVar1;
        }
        return (float)floor(param_1) / fVar3;
    }

} // namespace jag::math

// 0x100a597a0, 16 bytes, placed by debug map only (low confidence)
// abs(float)
ulong abs(float param_1) {
    undefined4 in_XMM0_Db;

    return CONCAT44(in_XMM0_Db, param_1) & 9223372034707292159;
}

// 0x100a597b0, 16 bytes, placed by debug map only (low confidence)
// floor(float)
void floor(float param_1) {
    _floorf();
}

namespace jag::render {
    // 0x100a5f8c0: the linker folded this into tweak::Event::Event(tweak::Event const&), which has identical code
    KeepAliveSharedPtrAndOwner::KeepAliveSharedPtrAndOwner(KeepAliveSharedPtrAndOwner const&);

    // 0x100a5f8d0: the linker folded this into tweak::Event::Event(tweak::Event const&), which has identical code
    KeepAliveSharedPtrAndOwner::KeepAliveSharedPtrAndOwner(KeepAliveSharedPtrAndOwner const&);

} // namespace jag::render
