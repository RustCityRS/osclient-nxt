// libs/game/runetek5/memory/MemoryManagement.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

namespace jag {
    // 0x1004b1fd0
    eastl::fixed_vector<eastl::vector<eastl::vector<int>>, 4ul>*
    placement_new<eastl::fixed_vector<eastl::vector<eastl::vector<int>>, 4ul>>(void* arg1) {
        new (arg1) eastl::fixed_vector<eastl::vector<eastl::vector<int>>, 4ul>();
        return arg1;
    }

    // 0x1004b1ff0
    ref_counter_shared<eastl::fixed_vector<eastl::vector<eastl::vector<int>>, 4ul>>*
    placement_new<ref_counter_shared<eastl::fixed_vector<eastl::vector<eastl::vector<int>>, 4ul>>, int,
                  eastl::fixed_vector<eastl::vector<eastl::vector<int>>, 4ul>*&>(
        void* arg1, int&& arg2, eastl::fixed_vector<eastl::vector<eastl::vector<int>>, 4ul>*& arg3) {
        new (arg1) ref_counter_shared<eastl::fixed_vector<eastl::vector<eastl::vector<int>>, 4ul>>((long)*arg2, arg3);
        return arg1;
    }

} // namespace jag

namespace jag::game {
    // 0x1004b00f0
    void CreateMemoryBuckets() {
        if (this_thread::IsMainThread() == '\0') {
            LogAssert("this_thread::IsMainThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/memory/"
                      "MemoryManagement.cpp",
                      11, nullptr);
        }
        BucketManager::Init(512, 1024);
        BucketManager::CreateBucket(4, 2048, 4);
        BucketManager::CreateBucket(8, 2048, 8);
        BucketManager::CreateBucket(16, 20480, 16);
        BucketManager::CreateBucket(32, 10240, 32);
        BucketManager::CreateBucket(48, 8192, 16);
        BucketManager::CreateBucket(64, 20480, 64);
        BucketManager::CreateBucket(96, 16348, 32);
        BucketManager::CreateBucket(128, 8192, 64);
        BucketManager::CreateBucket(192, 4096, 64);
        BucketManager::CreateBucket(512, 2048, 64);
        BucketManager::CreateBucket(768, 4096, 64);
        BucketManager::CreateBucket(1024, 128, 64);
        BucketManager::CreateBucket(2048, 8192, 64);
        BucketManager::CreateBucket(4096, 32, 64);
        BucketManager::CreateBucket(8192, 128, 64);
        BucketManager::CreateBucket(16384, 64, 64);
        BucketManager::CreateBucket(32768, 6, 64);
        BucketManager::CreateBucket(65536, 4, 64);
        BucketManager::CreateSafeBucket(8, 256, 8);
        BucketManager::CreateSafeBucket(32, 4096, 32);
        BucketManager::CreateSafeBucket(48, 1024, 16);
        BucketManager::CreateSafeBucket(96, 2048, 32);
        BucketManager::CreateSafeBucket(512, 64, 64);
        BucketManager::CreateSafeBucket(1024, 160, 64);
        BucketManager::CreateSafeBucket(2048, 32, 64);
        BucketManager::CreateSafeBucket(4096, 16, 64);
        BucketManager::CreateSafeBucket(8192, 8, 64);
        BucketManager::CreateSafeBucket(16384, 4, 64);
    }

} // namespace jag::game
