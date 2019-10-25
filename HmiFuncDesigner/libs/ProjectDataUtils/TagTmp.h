#ifndef TAGTMP_H
#define TAGTMP_H

#include <QString>
#include <QStringList>
#include <QList>
#include "Tag.h"

class ProjectDataSQLiteDatabase;

class TagTmp
{
public:
    explicit TagTmp();
    ~TagTmp();

    bool load(ProjectDataSQLiteDatabase *pDB);
    bool save(ProjectDataSQLiteDatabase *pDB);

    bool insert(ProjectDataSQLiteDatabase *pDB, TagTmpDBItem *pObj);
    bool insert(ProjectDataSQLiteDatabase *pDB, QList<TagTmpDBItem *> &pObjs);
    bool del(ProjectDataSQLiteDatabase *pDB, TagTmpDBItem *pObj);
    bool delAll(ProjectDataSQLiteDatabase *pDB);
    bool update(ProjectDataSQLiteDatabase *pDB, TagTmpDBItem *pObj);

    TagTmpDBItem *getTagTmpDBItemByID(const QString &id);
    TagTmpDBItem *getTagTmpDBItemByName(const QString &name);
    int getLastInsertId(ProjectDataSQLiteDatabase *pDB);

    bool saveTagTmpDBItem(ProjectDataSQLiteDatabase *pDB, TagTmpDBItem *pObj);

public:
    QList<TagTmpDBItem *> listTagTmpDBItem_;
};

#endif // TAGTMP_H
