// libs/hal/http/CRMData.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.http

#include "CRMData.h"

namespace jag::http {
    // 0x100f460d0, 16 bytes, __data
    CRMData::m_debugSpamEndpointRequests = {0, 0, 0, 0};

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    CRMData::ClientDataProvider::~ClientDataProvider();

    // 0x10002a770: the linker folded this into void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*), which has identical code
    CRMData::ClientDataProvider::~ClientDataProvider();

    // 0x10004af40: the linker folded this into std::__function::__func<std::__bind<void (oldscape::Client::*)(), oldscape::Client*&>, std::allocator<std::__bind<void (oldscape::Client::*)(), oldscape::Client*&> >, void (oldscape::ClientWindowMode)>::~__func(), which has identical code
    CRMData::ClientDataProvider::~ClientDataProvider();

    // 0x1000b9960: the linker folded this into oldscape::ScriptVarType::GetID() const, which has identical code
    CRMData::GetCRMRequestState() const;

    // 0x100131800: the linker folded this into oldscape::input::InputForm::SetText(eastl::string const&, int)::{lambda(BaseApp*)#1}::~BaseApp(), which has identical code
    CRMData::LabelElement::~LabelElement();

    // 0x1001319d0: the linker folded this into oldscape::input::InputForm::SetText(eastl::string const&, int)::{lambda(BaseApp*)#1}::~BaseApp(), which has identical code
    CRMData::LabelElement::~LabelElement();

    // 0x100ad73a0, 432 bytes, placed by class name and debug map
    // CRMData::Request(std::basic_string_view<char, std::char_traits<char> >, CRMData::ClientDataProvider*)
    /* CRMData::Request(std::basic_string_view<char, std::char_traits<char> >,
   CRMData::ClientDataProvider*) */

    undefined4 CRMData::Request(CRMData* param_1, undefined8 param_2, undefined8 param_3, long* param_4) {
        char cVar1;
        undefined8 uVar4;
        EditLine* this;
        undefined8 uVar5;
        undefined8 uVar6;
        char* pcVar7;
        undefined8 local_40;
        undefined8 local_38;

        local_40 = param_2;
        local_38 = param_3;
        cVar1 = local_40.empty();
        if (cVar1 == '\0') {
            if (param_4 == (long*)0) {
                uVar4 = logger::default_logger();
                pcVar7 = "Cannot request CRM data - no client data provider specified";
                uVar6 = 17;
            } else {
                cVar1 = (**(code**)(*param_4 + 16))(param_4, &param_1->field_8, param_2, param_3);
                if ((cVar1 != '\0') &&
                    (cVar1 = eastl::basic_string<
                         char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty(),
                     cVar1 == '\0')) {
                    param_1->field_40 = param_4;
                    if ((&param_1->field_48)->operator_cast_to_bool()) {
                        uVar4 = logger::default_logger();
                        uVar6 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        this = (EditLine*)std::unique_ptr<HTTPRequest, std::default_delete<HTTPRequest>>::operator->(
                            (unique_ptr<HTTPRequest, std::default_delete<HTTPRequest>>*)&param_1->field_48);
                        uVar5 = GetText();
                        logger::Logger::Log(uVar4, 0, 3,
                                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                            "http/CRMData.cpp",
                                            31,
                                            "Making a CRM data request to endpoint \'%s\' however there\'s already a "
                                            "pending request to \'%s\'",
                                            uVar6, uVar5);
                    }
                    if (param_1->field_0 == 1) {
                        uVar4 = logger::default_logger();
                        uVar6 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        logger::Logger::Log(
                            uVar4, 0, 3,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/http/"
                            "CRMData.cpp",
                            32, "Making a CRM data request to endpoint \'%s\' but there are pending image requests",
                            uVar6);
                    }
                    return RefreshRequest(param_1);
                }
                uVar4 = logger::default_logger();
                pcVar7 = "Cannot request CRM data - could not get the endpoint URL";
                uVar6 = 23;
            }
        } else {
            uVar4 = logger::default_logger();
            pcVar7 = "Cannot request CRM data - no base endpoint URL specified";
            uVar6 = 11;
        }
        logger::Logger::Log(
            uVar4, 0, 2, "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/http/CRMData.cpp",
            uVar6, pcVar7);
        return 0;
    }

    // 0x100ad7590, 256 bytes, placed by class name and debug map
    // CRMData::RefreshRequest()
    undefined8 CRMData::RefreshRequest() {
        undefined1* this_00;
        basic_string* pbVar2;
        unique_ptr<HTTPRequest, std::default_delete<HTTPRequest>>* this_01;
        undefined8 uVar3;
        long lVar4;
        unique_ptr local_38[8];

        if ((eastl::basic_string<
                 char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty() == '\0') &&
            (field_40 != 0)) {
            std::make_unique<HTTPRequest>();
            std::unique_ptr<HTTPRequest, std::default_delete<HTTPRequest>>::operator=(
                (unique_ptr<HTTPRequest, std::default_delete<HTTPRequest>>*)&field_48, local_38);
            local_38->~unique_ptr();
            pbVar2 = (basic_string*)std::unique_ptr<HTTPRequest, std::default_delete<HTTPRequest>>::operator->(
                (unique_ptr<HTTPRequest, std::default_delete<HTTPRequest>>*)&field_48);
            pbVar2->Get();
            if (*PTR_m_debugSpamEndpointRequests_100ee6668 != '\0') {
                this_00 = &field_304;
                lVar4 = 100;
                this_00->reserve(100);
                do {
                    std::make_unique<HTTPRequest>();
                    std::vector<std::unique_ptr<HTTPRequest, std::default_delete<HTTPRequest>>,
                                std::allocator<std::unique_ptr<HTTPRequest, std::default_delete<HTTPRequest>>>>::
                        emplace_back<std::unique_ptr<HTTPRequest, std::default_delete<HTTPRequest>>>(
                            (vector<std::unique_ptr<HTTPRequest, std::default_delete<HTTPRequest>>,
                                    std::allocator<std::unique_ptr<HTTPRequest, std::default_delete<HTTPRequest>>>>*)
                                this_00,
                            local_38);
                    local_38->~unique_ptr();
                    this_01 = (unique_ptr<HTTPRequest, std::default_delete<HTTPRequest>>*)this_00->back();
                    pbVar2 = (basic_string*)std::unique_ptr<HTTPRequest, std::default_delete<HTTPRequest>>::operator->(
                        this_01);
                    pbVar2->Get();
                    lVar4 = lVar4 + -1;
                } while (lVar4 != 0);
            }
            ResetData(this);
            uVar3 = 1;
        } else {
            uVar3 = 0;
        }
        return uVar3;
    }

    // 0x100ad7830, 96 bytes, placed by class name and debug map
    // CRMData::ResetData()
    void CRMData::ResetData() {
        field_0 = 0;
        eastl::string::clear();
        (&field_136)->clear();
        field_168 = 0;
        field_176 = 4575657222473777152;
        (&field_184)->clear();
        (&field_216)->clear();
        (&field_248)->clear();
    }

    // 0x100ad7950, 128 bytes, placed by class name and debug map
    // CRMData::GetMetadataValue(eastl::basic_string<char, BucketAllocatorEASTL> const&) const
    unkbyte9 CRMData::GetMetadataValue(basic_string* param_1) {
        bool bVar1;
        undefined1 extraout_DL;
        undefined1 extraout_DL_00;
        undefined7 extraout_var;
        undefined7 extraout_var_00;
        undefined8 local_40;
        undefined8 local_38;
        unkbyte9 local_30;
        undefined8 local_20;
        undefined8 local_18;

        local_20 = (&field_248, param_1)->find();
        local_18 = CONCAT71(extraout_var, extraout_DL);
        local_40 = (&field_248)->end();
        local_38 = CONCAT71(extraout_var_00, extraout_DL_00);
        bVar1 = eastl::operator!=((eastl*)&local_20, (hashtable_iterator_base*)&local_40,
                                  (hashtable_iterator_base*)CONCAT71(extraout_var_00, extraout_DL_00));
        if (bVar1) {
            local_20.HeapBeginPtr();
            std::optional<
                std::reference_wrapper<std::variant<eastl::basic_string<char, BucketAllocatorEASTL>, int> const>>::
                optional<std::variant<eastl::basic_string<char, BucketAllocatorEASTL>, int> const&, 0>(
                    (variant*)&local_30);
        } else {
            new (&local_30) std::optional<
                std::reference_wrapper<std::variant<eastl::basic_string<char, BucketAllocatorEASTL>, int> const>>();
        }
        return local_30;
    }

    // 0x100ad7a80, 848 bytes, placed by class name and debug map
    // CRMData::ServiceRequests()
    void CRMData::ServiceRequests() {
        undefined1* puVar1;
        bool bVar2;
        char cVar3;
        int iVar4;
        HTTPRequest* pHVar5;
        RT7Core* pRVar6;
        Array* pAVar7;
        unique_ptr<HTTPRequest, std::default_delete<HTTPRequest>>* puVar8;
        unique_ptr<HTTPRequest, std::default_delete<HTTPRequest>>* puVar9;
        EditLine* this_00;
        CharReader* pCVar10;
        long* plVar11;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
              eastl::allocator>* this_01;
        undefined8 uVar12;
        Array<unsigned char, eastl::allocator>* this_02;
        long lVar13;
        undefined8 uVar14;
        _func_decltype_nullptr* in_RSI;
        bool bVar15;
        WrapArray<unsigned char const> local_98[16];
        CharReaderBuilder local_88[48];
        string local_58[24];
        CRMData* local_40;
        unique_ptr<Json::CharReader, std::default_delete<Json::CharReader>> local_38[8];

        if (field_0 == 1) {
            bVar2 = std::operator==((unique_ptr*)&field_48, in_RSI);
            if (!bVar2) {
                /* WARNING: Subroutine does not return */
                LogAssert("m_activeEndpointRequest == nullptr",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/http/CRMData.cpp",
                          136, (char*)0);
            }
            puVar1 = &field_184;
            puVar8 = (unique_ptr<HTTPRequest, std::default_delete<HTTPRequest>>*)puVar1->HeapBeginPtr();
            puVar9 = (unique_ptr<HTTPRequest, std::default_delete<HTTPRequest>>*)puVar1->end();
            local_40 = this;
            if (puVar8 != puVar9) {
                bVar2 = true;
                do {
                    pHVar5 = (HTTPRequest*)std::unique_ptr<HTTPRequest, std::default_delete<HTTPRequest>>::operator->(
                        puVar8);
                    cVar3 = pHVar5->IsRequestComplete();
                    if (cVar3 == '\0') {
                        bVar2 = false;
                    }
                    puVar8 = puVar8 + 24;
                } while (puVar8 != puVar9);
                if (!bVar2) {
                    return;
                }
            }
            puVar8 = (unique_ptr<HTTPRequest, std::default_delete<HTTPRequest>>*)puVar1->HeapBeginPtr();
            puVar9 = (unique_ptr<HTTPRequest, std::default_delete<HTTPRequest>>*)puVar1->end();
            if (puVar8 == puVar9) {
                bVar2 = false;
            } else {
                bVar15 = false;
                do {
                    pHVar5 = (HTTPRequest*)std::unique_ptr<HTTPRequest, std::default_delete<HTTPRequest>>::operator->(
                        puVar8);
                    iVar4 = pHVar5->GetState();
                    bVar2 = true;
                    if (iVar4 != 1) {
                        uVar12 = logger::default_logger();
                        this_00 = (EditLine*)std::unique_ptr<HTTPRequest, std::default_delete<HTTPRequest>>::operator->(
                            puVar8);
                        uVar14 = this_00->GetText();
                        logger::Logger::Log(uVar12, 0, 2,
                                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                            "http/CRMData.cpp",
                                            159, "Could not retrieve image data from \'%s\'", uVar14);
                        bVar2 = bVar15;
                    }
                    puVar8 = puVar8 + 24;
                    bVar15 = bVar2;
                } while (puVar8 != puVar9);
            }
            local_40->field_0 = (uint)!bVar2 * 2 + 2;
            return;
        }
        if (field_0 != 0) {
            return;
        }
        puVar1 = &field_48;
        pHVar5 = (HTTPRequest*)std::unique_ptr<HTTPRequest, std::default_delete<HTTPRequest>>::operator->(
            (unique_ptr<HTTPRequest, std::default_delete<HTTPRequest>>*)puVar1);
        iVar4 = pHVar5->GetState();
        if (iVar4 == 2) {
            field_0 = 3;
        } else {
            if (iVar4 != 1) {
                return;
            }
            bVar2 = (&field_64)->operator_cast_to_bool();
            if (bVar2) {
                pRVar6 = (RT7Core*)std::unique_ptr<HTTPRequest, std::default_delete<HTTPRequest>>::operator->(
                    (unique_ptr<HTTPRequest, std::default_delete<HTTPRequest>>*)puVar1);
                pAVar7 = (Array*)pRVar6->GetMSAASampleCount();
                WrapArray<unsigned char const>::WrapArray<Array<unsigned char, eastl::allocator>>(local_98, pAVar7);
                cVar3 = std::function<bool(WrapArray<unsigned char const>)>::operator()(
                    (function<bool(WrapArray<unsigned char const>)>*)&field_64);
                if (cVar3 != '\0') {
                    field_0 = 2;
                    goto LAB_100ad7d75;
                }
            }
            Json::CharReaderBuilder::CharReaderBuilder(local_88);
            pCVar10 = (CharReader*)Json::CharReaderBuilder::newCharReader(local_88);
            std::unique_ptr<Json::CharReader, std::default_delete<Json::CharReader>>::unique_ptr<true, void>(local_38,
                                                                                                             pCVar10);
            Json::CharReaderBuilder::~CharReaderBuilder(local_88);
            new (local_88) Json::Value(0);
            std::string::string(local_58);
            plVar11 =
                (long*)std::unique_ptr<Json::CharReader, std::default_delete<Json::CharReader>>::operator->(local_38);
            pRVar6 = (RT7Core*)std::unique_ptr<HTTPRequest, std::default_delete<HTTPRequest>>::operator->(
                (unique_ptr<HTTPRequest, std::default_delete<HTTPRequest>>*)puVar1);
            this_01 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                             std::default_delete<LoadingScreenScript::AnimLayer>>,
                             eastl::allocator>*)pRVar6->GetMSAASampleCount();
            uVar12 = this_01->data();
            pRVar6 = (RT7Core*)std::unique_ptr<HTTPRequest, std::default_delete<HTTPRequest>>::operator->(
                (unique_ptr<HTTPRequest, std::default_delete<HTTPRequest>>*)puVar1);
            this_02 = (Array<unsigned char, eastl::allocator>*)pRVar6->GetMSAASampleCount();
            lVar13 = this_02->back();
            cVar3 = (**(code**)(*plVar11 + 16))(plVar11, uVar12, lVar13 + 1, local_88, local_58);
            if (cVar3 == '\0') {
                field_0 = 5;
                uVar12 = logger::default_logger();
                uVar14 = std::string::c_str(local_58);
                logger::Logger::Log(
                    uVar12, 0, 2,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/http/CRMData.cpp", 119,
                    "An error occurred while parsing the CRM endpoint reply - \'%s\'", uVar14);
            } else {
                field_0 = 2;
            }
            ExtractDataFromJSON(this, (Value*)local_88);
            std::string::~string(local_58);
            local_88->~Value();
            std::unique_ptr<Json::CharReader, std::default_delete<Json::CharReader>>::~unique_ptr(local_38);
        }
    LAB_100ad7d75:
        puVar1->reset(0);
    }

    // 0x100ad7e50, 272 bytes, placed by class name and debug map
    // CRMData::ExtractDataFromJSON(Json::Value const&)
    void CRMData::ExtractDataFromJSON(Value* param_1) {
        char cVar1;
        Value* pVVar2;
        Value* pVVar3;
        undefined8 uVar4;
        undefined8 uVar5;
        char* pcVar6;

        pVVar2 = (Value*)Json::Value::operator[](param_1, "message");
        cVar1 = Json::Value::isObject(pVVar2);
        if (cVar1 == '\0') {
            field_0 = 5;
            uVar4 = logger::default_logger();
            pcVar6 = "Invalid \'message\' element received in CRM endpoint reply";
            uVar5 = 197;
        } else {
            field_0 = 2;
            pVVar3 = (Value*)Json::Value::operator[](pVVar2, "images");
            ExtractImageInfo(this, pVVar3);
            pVVar3 = (Value*)Json::Value::operator[](pVVar2, "labels");
            ExtractTextInfo(this, pVVar3);
            pVVar3 = (Value*)Json::Value::operator[](pVVar2, "behaviour");
            ExtractBehaviour(this, pVVar3);
            pVVar2 = (Value*)Json::Value::operator[](pVVar2, "meta");
            ExtractMetadata(this, pVVar2);
            cVar1 = eastl::basic_string<
                char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
            if (cVar1 == '\0') {
                return;
            }
            field_0 = 5;
            uVar4 = logger::default_logger();
            pcVar6 = "No endpoint URL received as part of the CRM behaviour";
            uVar5 = 191;
        }
        logger::Logger::Log(
            uVar4, 0, 2, "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/http/CRMData.cpp",
            uVar5, pcVar6);
    }

    // 0x100ad7fd0, 416 bytes, placed by class name and debug map
    // CRMData::ExtractImageInfo(Json::Value const&)
    void CRMData::ExtractImageInfo(Value* param_1) {
        char cVar1;
        Value* this_00;
        Value* this_01;
        char* pcVar2;
        ImageElement* pIVar3;
        undefined1 extraout_DL;
        undefined1 extraout_DL_00;
        eastl::string local_a0[32];
        string local_80[24];
        allocator local_68[8];
        undefined8 local_60;
        undefined1 local_58;
        undefined8 local_48;
        undefined1 local_40;
        vector<CRMData::ImageElement, eastl::allocator>* local_38;

        cVar1 = Json::Value::isNull(param_1);
        if (cVar1 == '\0') {
            local_48 = Json::Value::begin(param_1);
            local_40 = extraout_DL;
            local_60 = Json::Value::end(param_1);
            local_38 = (vector<CRMData::ImageElement, eastl::allocator>*)&field_184;
            local_58 = extraout_DL_00;
            cVar1 = Json::ValueIteratorBase::operator!=((ValueIteratorBase*)&local_48, (ValueIteratorBase*)&local_60);
            if (cVar1 != '\0') {
                do {
                    this_00 = (Value*)Json::ValueConstIterator::operator*((ValueConstIterator*)&local_48);
                    this_01 = (Value*)Json::Value::operator[](this_00, "src");
                    cVar1 = Json::Value::isString(this_01);
                    if (cVar1 != '\0') {
                        Json::Value::asString();
                        pcVar2 = (char*)std::string::c_str(local_80);
                        eastl::allocator::allocator(local_68, "EASTL basic_string");
                        eastl::string::basic_string(local_a0, pcVar2, local_68);
                        pIVar3 = eastl::vector<CRMData::ImageElement, eastl::allocator>::emplace_back<eastl::string>(
                            local_38, (basic_string*)local_a0);
                        eastl::string::~basic_string(local_a0);
                        std::string::~string(local_80);
                        ExtractBounds(this_00, (array*)&pIVar3->field_8, "placement");
                    }
                    Json::ValueConstIterator::operator++((ValueConstIterator*)&local_48);
                    cVar1 = Json::ValueIteratorBase::operator!=((ValueIteratorBase*)&local_48,
                                                                (ValueIteratorBase*)&local_60);
                } while (cVar1 != '\0');
            }
            cVar1 = local_38->empty();
            if (cVar1 == '\0') {
                ((CRMData*)this)->field_0 = 1;
            }
        }
    }

    // 0x100ad8170, 560 bytes, placed by class name and debug map
    // CRMData::ExtractTextInfo(Json::Value const&)
    void CRMData::ExtractTextInfo(Value* param_1) {
        char cVar1;
        undefined4 uVar3;
        undefined8 uVar4;
        undefined8 uVar5;
        Value* this_00;
        Value* this_01;
        LabelElement* pLVar6;
        undefined1 extraout_DL;
        undefined1 extraout_DL_00;
        undefined1 auVar7[16];
        basic_string local_98[24];
        string local_80[24];
        undefined1* local_68;
        vector<CRMData::LabelElement, eastl::allocator>* local_60;
        undefined8 local_58;
        undefined1 local_50;
        undefined8 local_48;
        undefined1 local_40;
        eastl local_38[8];

        cVar1 = Json::Value::isNull(param_1);
        if (cVar1 == '\0') {
            local_58 = Json::Value::begin(param_1);
            local_50 = extraout_DL;
            local_48 = Json::Value::end(param_1);
            local_40 = extraout_DL_00;
            cVar1 = Json::ValueIteratorBase::operator!=((ValueIteratorBase*)&local_58, (ValueIteratorBase*)&local_48);
            if (cVar1 != '\0') {
                local_68 = &field_8;
                local_60 = (vector<CRMData::LabelElement, eastl::allocator>*)&field_216;
                do {
                    this_00 = (Value*)Json::ValueConstIterator::operator*((ValueConstIterator*)&local_58);
                    this_01 = (Value*)Json::Value::operator[](this_00, "text");
                    cVar1 = Json::Value::isString(this_01);
                    if (cVar1 == '\0') {
                        uVar4 = logger::default_logger();
                        uVar5 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        logger::Logger::Log(uVar4, 0, 3,
                                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                            "http/CRMData.cpp",
                                            257, "Endpoint response for \'%s\' includes an invalid label entry", uVar5);
                    } else {
                        Json::Value::asString();
                        auVar7 = std::string::c_str(local_80);
                        eastl::destruct<oldscape::highlight::NpcUID*>(local_38, (NpcUID*)"EASTL basic_string",
                                                                      auVar7._8_8_);
                        eastl::basic_string<char, BucketAllocatorEASTL>::basic_string((char*)local_98, auVar7._0_8_);
                        pLVar6 = eastl::vector<CRMData::LabelElement, eastl::allocator>::emplace_back<
                            eastl::basic_string<char, BucketAllocatorEASTL>>(local_60, local_98);
                        local_98->~basic_string();
                        std::string::~string(local_80);
                        Json::Value::operator[](this_00, "align_x");
                        Json::Value::asString();
                        uVar3 = LabelElement::GetAlign((string*)local_98);
                        *(undefined4*)&pLVar6->field_40 = uVar3;
                        local_98->~string();
                        Json::Value::operator[](this_00, "align_y");
                        Json::Value::asString();
                        uVar3 = LabelElement::GetAlign((string*)local_98);
                        *(undefined4*)((long)&pLVar6->field_40 + 4) = uVar3;
                        local_98->~string();
                        Json::Value::operator[](this_00, "font");
                        pLVar6->field_48 = Json::Value::asInt();
                        ExtractBounds(this_00, (array*)&pLVar6->field_24, "placement");
                    }
                    Json::ValueConstIterator::operator++((ValueConstIterator*)&local_58);
                    cVar1 = Json::ValueIteratorBase::operator!=((ValueIteratorBase*)&local_58,
                                                                (ValueIteratorBase*)&local_48);
                } while (cVar1 != '\0');
            }
        }
    }

    // 0x100ad83a0, 896 bytes, placed by class name and debug map
    // CRMData::ExtractBehaviour(Json::Value const&)
    void CRMData::ExtractBehaviour(Value* param_1) {
        char cVar1;
        bool bVar2;
        int iVar3;
        string* psVar4;
        Value* this_00;
        char* pcVar5;
        undefined8 uVar6;
        undefined8 uVar7;
        undefined1 auVar8[16];
        vector<std::string, std::allocator<std::string>> local_c8[24];
        undefined4 local_b0[6];
        undefined1 local_98[56];
        basic_string<char, BucketAllocatorEASTL>* local_60;
        undefined8 local_58;
        undefined8 local_50;
        undefined8 local_48;
        vector<CRMData::ActionInfo::PayloadEntry, eastl::allocator>* local_40;
        eastl local_38[8];

        cVar1 = Json::Value::isNull(param_1);
        if (cVar1 == '\0') {
            ExtractBounds(param_1, (array*)&field_168, "clickbounds");
            Json::Value::getMemberNames();
            local_58 = std::vector<std::string, std::allocator<std::string>>::begin(local_c8);
            local_50 = std::vector<std::string, std::allocator<std::string>>::end(local_c8);
            bVar2 = std::operator!=((__wrap_iter*)&local_58, (__wrap_iter*)&local_50);
            if (bVar2) {
                local_60 = (basic_string<char, BucketAllocatorEASTL>*)&field_112;
                local_40 = (vector<CRMData::ActionInfo::PayloadEntry, eastl::allocator>*)&field_136;
                do {
                    psVar4 = (string*)std::__wrap_iter<std::string*>::operator*((__wrap_iter<std::string*>*)&local_58);
                    this_00 = (Value*)Json::Value::operator[](param_1, psVar4);
                    iVar3 = std::string::compare((char*)psVar4);
                    if (iVar3 == 0) {
                        cVar1 = Json::Value::isString(this_00);
                        if (cVar1 == '\0') {
                            uVar6 = logger::default_logger();
                            logger::Logger::Log(uVar6, 0, 2,
                                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                                "hal/http/CRMData.cpp",
                                                284, "Received a non-string value for the target endpoint");
                        } else {
                            psVar4 = (string*)local_98;
                            Json::Value::asString();
                            pcVar5 = (char*)std::string::c_str(psVar4);
                            eastl::basic_string<char, BucketAllocatorEASTL>::operator=(local_60, pcVar5);
                        LAB_100ad843e:
                            std::string::~string(psVar4);
                        }
                    } else {
                        iVar3 = std::string::compare((char*)psVar4);
                        if (iVar3 != 0) {
                            cVar1 = Json::Value::isInt(this_00);
                            if (cVar1 == '\0') {
                                cVar1 = Json::Value::isBool(this_00);
                                if (cVar1 == '\0') {
                                    cVar1 = Json::Value::isString(this_00);
                                    if (cVar1 != '\0') {
                                        auVar8 = std::string::c_str(psVar4);
                                        eastl::destruct<oldscape::highlight::NpcUID*>(
                                            local_38, (NpcUID*)"EASTL basic_string", auVar8._8_8_);
                                        eastl::basic_string<char, BucketAllocatorEASTL>::basic_string(local_98,
                                                                                                      auVar8._0_8_);
                                        Json::Value::asString();
                                        local_48 = local_b0->c_str();
                                        std::variant<eastl::basic_string<char, BucketAllocatorEASTL>, int>::variant<
                                            char const*, 0, 0, 0, eastl::basic_string<char, BucketAllocatorEASTL>, 0ul,
                                            0>((char**)(local_98 + 24));
                                        eastl::vector<CRMData::ActionInfo::PayloadEntry, eastl::allocator>::push_back(
                                            local_40, (PayloadEntry*)local_98);
                                        local_98->~pair();
                                        psVar4 = (string*)local_b0;
                                        goto LAB_100ad843e;
                                    }
                                    uVar6 = logger::default_logger();
                                    uVar7 = std::string::c_str(psVar4);
                                    logger::Logger::Log(uVar6, 0, 3,
                                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/"
                                                        "OSRS-OS1669-BOXR/libs/hal/http/CRMData.cpp",
                                                        300, "Invalid metadata type received for key \'%s\' - ignoring",
                                                        uVar7);
                                    goto LAB_100ad8443;
                                }
                            }
                            auVar8 = std::string::c_str(psVar4);
                            eastl::destruct<oldscape::highlight::NpcUID*>((eastl*)&local_48,
                                                                          (NpcUID*)"EASTL basic_string", auVar8._8_8_);
                            eastl::basic_string<char, BucketAllocatorEASTL>::basic_string(local_98, auVar8._0_8_);
                            local_b0[0] = Json::Value::asInt();
                            std::variant<eastl::basic_string<char, BucketAllocatorEASTL>,
                                         int>::variant<int, 0, 0, 0, int, 1ul, 0>((int*)(local_98 + 24));
                            eastl::vector<CRMData::ActionInfo::PayloadEntry, eastl::allocator>::push_back(
                                local_40, (PayloadEntry*)local_98);
                            local_98->~pair();
                        }
                    }
                LAB_100ad8443:
                    std::__wrap_iter<std::string*>::operator++((__wrap_iter<std::string*>*)&local_58);
                    bVar2 = std::operator!=((__wrap_iter*)&local_58, (__wrap_iter*)&local_50);
                } while (bVar2);
            }
            std::vector<std::string, std::allocator<std::string>>::~vector(local_c8);
        }
    }

    // 0x100ad8720, 672 bytes, placed by class name and debug map
    // CRMData::ExtractMetadata(Json::Value const&)
    void CRMData::ExtractMetadata(Value* param_1) {
        char cVar1;
        bool bVar2;
        undefined4 uVar3;
        string* this_00;
        Value* this_01;
        undefined8 uVar4;
        undefined8 uVar5;
        pair<eastl::basic_string<char, BucketAllocatorEASTL> const,
             std::variant<eastl::basic_string<char, BucketAllocatorEASTL>, int>>
            local_f8[56];
        vector<std::string, std::allocator<std::string>> local_c0[24];
        char* local_a8[3];
        string local_90[24];
        variant<eastl::basic_string<char, BucketAllocatorEASTL>, int> local_78[32];
        undefined8 local_58;
        undefined8 local_50;
        undefined8 local_48;
        char* local_40;
        CRMData* local_38;

        local_38 = this;
        cVar1 = Json::Value::isNull(param_1);
        if (cVar1 == '\0') {
            Json::Value::getMemberNames();
            local_50 = std::vector<std::string, std::allocator<std::string>>::begin(local_c0);
            local_48 = std::vector<std::string, std::allocator<std::string>>::end(local_c0);
            bVar2 = std::operator!=((__wrap_iter*)&local_50, (__wrap_iter*)&local_48);
            if (bVar2) {
                local_38 = (CRMData*)&local_38->field_248;
                do {
                    this_00 = (string*)std::__wrap_iter<std::string*>::operator*((__wrap_iter<std::string*>*)&local_50);
                    this_01 = (Value*)Json::Value::operator[](param_1, this_00);
                    cVar1 = Json::Value::isInt(this_01);
                    if (cVar1 == '\0') {
                        cVar1 = Json::Value::isBool(this_01);
                        if (cVar1 != '\0')
                            goto LAB_100ad8813;
                        cVar1 = Json::Value::isString(this_01);
                        if (cVar1 == '\0') {
                            uVar4 = logger::default_logger();
                            uVar5 = std::string::c_str(this_00);
                            logger::Logger::Log(uVar4, 0, 3,
                                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                                "hal/http/CRMData.cpp",
                                                327, "Invalid metadata type received for key \'%s\' - ignoring", uVar5);
                        } else {
                            local_40 = (char*)std::string::c_str(this_00);
                            Json::Value::asString();
                            local_58 = std::string::c_str(local_90);
                            std::variant<eastl::basic_string<char, BucketAllocatorEASTL>, int>::variant<
                                char const*, 0, 0, 0, eastl::basic_string<char, BucketAllocatorEASTL>, 0ul, 0>(
                                (char**)local_78);
                            eastl::pair<eastl::basic_string<char, BucketAllocatorEASTL> const,
                                        std::variant<eastl::basic_string<char, BucketAllocatorEASTL>, int>>::
                                pair<char const*, std::variant<eastl::basic_string<char, BucketAllocatorEASTL>, int>,
                                     void>(local_f8, &local_40, (variant*)local_78);
                            eastl::hashtable<
                                eastl::basic_string<char, BucketAllocatorEASTL>,
                                eastl::pair<eastl::basic_string<char, BucketAllocatorEASTL> const,
                                            std::variant<eastl::basic_string<char, BucketAllocatorEASTL>, int>>,
                                eastl::allocator,
                                eastl::use_first<
                                    eastl::pair<eastl::basic_string<char, BucketAllocatorEASTL> const,
                                                std::variant<eastl::basic_string<char, BucketAllocatorEASTL>, int>>>,
                                eastl::equal_to<eastl::basic_string<char, BucketAllocatorEASTL>>,
                                eastl::hash<eastl::basic_string<char, BucketAllocatorEASTL>>, eastl::mod_range_hashing,
                                eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                true>::insert((pair*)local_a8);
                            eastl::pair<
                                eastl::basic_string<char, BucketAllocatorEASTL> const,
                                std::variant<eastl::basic_string<char, BucketAllocatorEASTL>, int>>::~pair(local_f8);
                            std::variant<eastl::basic_string<char, BucketAllocatorEASTL>, int>::~variant(local_78);
                            std::string::~string(local_90);
                        }
                    } else {
                    LAB_100ad8813:
                        local_a8[0] = (char*)std::string::c_str(this_00);
                        uVar3 = Json::Value::asInt();
                        local_40 = (char*)CONCAT44(local_40._4_4_, uVar3);
                        std::variant<eastl::basic_string<char, BucketAllocatorEASTL>,
                                     int>::variant<int, 0, 0, 0, int, 1ul, 0>((int*)local_78);
                        eastl::pair<eastl::basic_string<char, BucketAllocatorEASTL> const,
                                    std::variant<eastl::basic_string<char, BucketAllocatorEASTL>, int>>::
                            pair<char const*, std::variant<eastl::basic_string<char, BucketAllocatorEASTL>, int>, void>(
                                local_f8, local_a8, (variant*)local_78);
                        eastl::hashtable<
                            eastl::basic_string<char, BucketAllocatorEASTL>,
                            eastl::pair<eastl::basic_string<char, BucketAllocatorEASTL> const,
                                        std::variant<eastl::basic_string<char, BucketAllocatorEASTL>, int>>,
                            eastl::allocator,
                            eastl::use_first<
                                eastl::pair<eastl::basic_string<char, BucketAllocatorEASTL> const,
                                            std::variant<eastl::basic_string<char, BucketAllocatorEASTL>, int>>>,
                            eastl::equal_to<eastl::basic_string<char, BucketAllocatorEASTL>>,
                            eastl::hash<eastl::basic_string<char, BucketAllocatorEASTL>>, eastl::mod_range_hashing,
                            eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                            true>::insert((pair*)local_90);
                        eastl::pair<
                            eastl::basic_string<char, BucketAllocatorEASTL> const,
                            std::variant<eastl::basic_string<char, BucketAllocatorEASTL>, int>>::~pair(local_f8);
                        std::variant<eastl::basic_string<char, BucketAllocatorEASTL>, int>::~variant(local_78);
                    }
                    std::__wrap_iter<std::string*>::operator++((__wrap_iter<std::string*>*)&local_50);
                    bVar2 = std::operator!=((__wrap_iter*)&local_50, (__wrap_iter*)&local_48);
                } while (bVar2);
            }
            std::vector<std::string, std::allocator<std::string>>::~vector(local_c0);
        }
    }

    // 0x100ad89c0, 112 bytes, placed by class name and debug map
    // CRMData::ClearImageDataRequests()
    void CRMData::ClearImageDataRequests() {
        unique_ptr<HTTPRequest, std::default_delete<HTTPRequest>>* this_00;
        unique_ptr<HTTPRequest, std::default_delete<HTTPRequest>>* puVar1;

        if (field_0 < 2) {
            /* WARNING: Subroutine does not return */
            LogAssert("(int)m_state >= (int)CRMRequestState::ENDPOINT_REPLY_RECEIVED",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/http/CRMData.cpp", 203,
                      (char*)0);
        }
        this_00 = (unique_ptr<HTTPRequest, std::default_delete<HTTPRequest>>*)(&field_184)->HeapBeginPtr();
        puVar1 = (unique_ptr<HTTPRequest, std::default_delete<HTTPRequest>>*)(&field_184)->end();
        for (; this_00 != puVar1; this_00 = this_00 + 24) {
            std::unique_ptr<HTTPRequest, std::default_delete<HTTPRequest>>::reset(this_00, (HTTPRequest*)0);
        }
    }

    // 0x100ad8ac0, 256 bytes, placed by class name
    // CRMData::ExtractBounds(Json::Value const&, std::array<float, 4ul>&, char const*)
    /* CRMData::ExtractBounds(Json::Value const&, std::array<float, 4ul>&, char const*) */

    void CRMData::ExtractBounds(Value* param_1, array* param_2, char* param_3) {
        Value* this;
        Value* this_00;
        Value* this_01;
        char cVar1;
        Value* pVVar2;
        undefined4 uVar3;
        undefined4 uVar4;
        undefined4 uVar5;
        undefined4 uVar6;

        pVVar2 = (Value*)Json::Value::operator[](param_1, param_3);
        cVar1 = Json::Value::isArray(pVVar2);
        if (cVar1 != '\0') {
            this = (Value*)Json::Value::operator[](pVVar2, 0);
            this_00 = (Value*)Json::Value::operator[](pVVar2, 1);
            this_01 = (Value*)Json::Value::operator[](pVVar2, 2);
            pVVar2 = (Value*)Json::Value::operator[](pVVar2, 3);
            cVar1 = Json::Value::isDouble(this);
            if (cVar1 != '\0') {
                cVar1 = Json::Value::isDouble(this_00);
                if (cVar1 != '\0') {
                    cVar1 = Json::Value::isDouble(this_01);
                    if (cVar1 != '\0') {
                        cVar1 = Json::Value::isDouble(pVVar2);
                        if (cVar1 != '\0') {
                            uVar3 = Json::Value::asFloat(this);
                            uVar4 = Json::Value::asFloat(this_00);
                            uVar5 = Json::Value::asFloat(this_01);
                            uVar6 = Json::Value::asFloat(pVVar2);
                            *(undefined4*)param_2 = uVar3;
                            *(undefined4*)(param_2 + 4) = uVar4;
                            *(undefined4*)(param_2 + 8) = uVar5;
                            *(undefined4*)(param_2 + 12) = uVar6;
                        }
                    }
                }
            }
        }
    }

    // 0x100ad8c50, 96 bytes, placed by class name
    // CRMData::LabelElement::GetAlign(std::string const&)
    /* CRMData::LabelElement::GetAlign(std::string const&) */

    char CRMData::LabelElement::GetAlign(string* param_1) {
        char cVar1;
        int iVar2;

        iVar2 = std::string::compare((char*)param_1);
        if (iVar2 == 0) {
            cVar1 = '\x01';
        } else {
            iVar2 = std::string::compare((char*)param_1);
            if (iVar2 == 0) {
                cVar1 = '\x02';
            } else {
                iVar2 = std::string::compare((char*)param_1);
                cVar1 = (iVar2 == 0) * '\x02';
            }
        }
        return cVar1;
    }

    // 0x100ad8df0, 320 bytes, placed by class name
    // CRMData::SetFromJSON(eastl::string const&)
    ulong CRMData::SetFromJSON(basic_string* param_1) {
        int iVar1;
        CharReader* pCVar3;
        long* plVar4;
        undefined8 uVar5;
        long lVar6;
        long lVar7;
        CharReaderBuilder local_80[48];
        string local_50[24];
        unique_ptr<Json::CharReader, std::default_delete<Json::CharReader>> local_38[8];

        ResetData((CRMData*)param_1);
        ((param_1 + 48))->reset(0);
        Json::CharReaderBuilder::CharReaderBuilder(local_80);
        pCVar3 = (CharReader*)Json::CharReaderBuilder::newCharReader(local_80);
        std::unique_ptr<Json::CharReader, std::default_delete<Json::CharReader>>::unique_ptr<true, void>(local_38,
                                                                                                         pCVar3);
        Json::CharReaderBuilder::~CharReaderBuilder(local_80);
        new (local_80) Json::Value(0);
        std::string::string(local_50);
        plVar4 = (long*)std::unique_ptr<Json::CharReader, std::default_delete<Json::CharReader>>::operator->(local_38);
        uVar5 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        lVar6 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        lVar7 = eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
        if ((**(code**)(*plVar4 + 16))(plVar4, uVar5, lVar6 + lVar7, local_80, local_50) == '\0') {
            *(undefined4*)param_1 = 5;
        } else {
            ExtractDataFromJSON((CRMData*)param_1, (Value*)local_80);
        }
        iVar1 = *(int*)param_1;
        std::string::~string(local_50);
        local_80->~Value();
        std::unique_ptr<Json::CharReader, std::default_delete<Json::CharReader>>::~unique_ptr(local_38);
        return CONCAT71((int7)((ulong)plVar4 >> 8), iVar1 != 5) & 4294967295;
    }

} // namespace jag::http
