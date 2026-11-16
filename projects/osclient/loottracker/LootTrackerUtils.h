// projects/osclient/loottracker/LootTrackerUtils.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::loottracker {
    class SourceItem {
    public:
        ~SourceItem();
        SourceItem();
        SourceItem(const SourceItem& sourceItem);

    private:
        uint8_t _unknown_0[32];
        uint64_t field_32;
        uint32_t field_40;
        uint8_t _unknown_44[4];
    };

    // 0x10001d930
    char* GetSourceCreateTableStatement() {
        return "CREATE TABLE IF NOT EXISTS source(sourceID INTEGER PRIMARY KEY AUTOINCREMENT, sourceName STRING, "
               "category INTEGER, level INTEGER, modified TIMESTAMP, uniqueIdentifier INTEGER)";
    }

    // 0x10001d940
    char* GetLootCreateTableStatement() {
        return "CREATE TABLE IF NOT EXISTS loot(ID INTEGER PRIMARY KEY AUTOINCREMENT, objectId INTEGER, count INTEGER, "
               "sourceName STRING, sourceID INTEGER, modified TIMESTAMP)";
    }

    // 0x10001d950
    char* GetIgnoreItemCreateTableStatement() {
        return "CREATE TABLE IF NOT EXISTS ignoreLoot(ID INTEGER PRIMARY KEY AUTOINCREMENT, pattern STRING UNIQUE)";
    }

    // 0x10001d960
    char* GetIgnoreSourceCreateTableStatement() {
        return "CREATE TABLE IF NOT EXISTS ignoreSource(ID INTEGER PRIMARY KEY AUTOINCREMENT, pattern STRING UNIQUE)";
    }

    // 0x10001d970
    char* GetLootTempTableStatement() {
        return "CREATE TABLE IF NOT EXISTS lootTemp(ID INTEGER PRIMARY KEY AUTOINCREMENT, objectId INTEGER UNIQUE, "
               "count INTEGER, sourceName STRING, sourceID INTEGER, modified TIMESTAMP)";
    }

    // 0x10001d980
    char* GetSourceTempTableStatement() {
        return "CREATE TABLE IF NOT EXISTS sourceTemp(ID INTEGER PRIMARY KEY AUTOINCREMENT, sourceID INTEGER, "
               "sourceName STRING, category INTEGER, level INTEGER, modified TIMESTAMP)";
    }

} // namespace jag::oldscape::loottracker
