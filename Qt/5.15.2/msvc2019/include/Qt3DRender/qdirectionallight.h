/****************************************************************************
**
** Copyright (C) 2014 Klaralvdalens Datakonsult AB (KDAB).
** Contact: https://www.qt.io/licensing/
**
** This file is part of the Qt3D module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and The Qt Company. For licensing terms
** and conditions see https://www.qt.io/terms-conditions. For further
** information use the contact form at https://www.qt.io/contact-us.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 3 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPL3 included in the
** packaging of this file. Please review the following information to
** ensure the GNU Lesser General Public License version 3 requirements
** will be met: https://www.gnu.org/licenses/lgpl-3.0.html.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 2.0 or (at your option) the GNU General
** Public license version 3 or any later version approved by the KDE Free
** Qt Foundation. The licenses are as published by the Free Software
** Foundation and appearing in the file LICENSE.GPL2 and LICENSE.GPL3
** included in the packaging of this file. Please review the following
** information to ensure the GNU General Public License requirements will
** be met: https://www.gnu.org/licenses/gpl-2.0.html and
** https://www.gnu.org/licenses/gpl-3.0.html.
**
** $QT_END_LICENSE$
**
****************************************************************************/

#ifndef QT3DRENDER_QDIRECTIONALLIGHT_H
#define QT3DRENDER_QDIRECTIONALLIGHT_H

#include <Qt3DRender/qabstractlight.h>

QT_BEGIN_NAMESPACE

namespace Qt3DRender {

class QDirectionalLightPrivate;

class Q_3DRENDERSHARED_EXPORT QDirectionalLight : public QAbstractLight
{
    Q_OBJECT
    Q_PROPERTY(QVector3D worldDirection READ worldDirection WRITE setWorldDirection NOTIFY worldDirectionChanged)

public:
    explicit QDirectionalLight(Qt3DCore::QNode *parent = nullptr);
    ~QDirectionalLight();

    QVector3D worldDirection() const;

public Q_SLOTS:
    void setWorldDirection(const QVector3D &worldDirection);

Q_SIGNALS:
    void worldDirectionChanged(const QVector3D &worldDirection);

protected:
    explicit QDirectionalLight(QDirectionalLightPrivate &dd, Qt3DCore::QNode *parent = nullptr);

private:
    Q_DECLARE_PRIVATE(QDirectionalLight)
};

} // namespace Qt3DRender

QT_END_NAMESPACE

#endif // QT3DRENDER_QDIRECTIONALLIGHT_H
