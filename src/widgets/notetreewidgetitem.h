#ifndef NOTETREEWIDGETITEM_H
#define NOTETREEWIDGETITEM_H

#include <QWidget>
#include <entities/note.h>

namespace Ui {
class NoteTreeWidgetItem;
}

class NoteTreeWidgetItem : public QWidget
{
    Q_OBJECT

public:
    explicit NoteTreeWidgetItem(Note note, QWidget *parent = 0);
    void updateUserInterface(Note &note) const;
    ~NoteTreeWidgetItem();

private:
    Ui::NoteTreeWidgetItem *ui;

    QString getNotePreviewText(Note &note) const;
};

#endif // NOTETREEWIDGETITEM_H
