/*******************************************************************************
 * Copyright   Actility, SA. All Rights Reserved.
 * DO NOT ALTER OR REMOVE COPYRIGHT NOTICES OR THIS FILE HEADER
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License version
 * 2 only, as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * General Public License version 2 for more details (a copy is
 * included at /legal/license.txt).
 *
 * You should have received a copy of the GNU General Public License
 * version 2 along with this work; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA
 * 02110-1301 USA
 *
 * Please contact Actility, SA.,  4, rue Ampere 22300 LANNION FRANCE
 * or visit www.actility.com if you need additional
 * information or have any questions.
 *******************************************************************************/
package com.actility.m2m.storage;

import java.util.Date;
import java.util.Iterator;
import java.util.List;

/**
 * Represents a Document into the storage.
 * <p>
 * A document is composed of a content (which is a byte array) together with a list of attributes that are used for fast access.
 *
 */
public interface Document {
    /**
     * Attribute creation time. Every document must have this attribute
     */
    String ATTR_CREATION_TIME = "ct";

    /**
     * Attribute last modified time. Every document must have this attribute
     */
    String ATTR_LAST_MODIFIED_TIME = "lmt";

    /**
     * Attribute to tell whether the document will notify the application when it is deleted
     */
    String ATTR_NOTIFY_WHEN_DELETED = "nwd";

    /**
     * An internal ID used by the underlying storage for fast access to the document.
     *
     * @return The internal ID
     */
    String getId();

    /**
     * Gets the path associated with the document.
     *
     * @return The document path
     */
    String getPath();

    /**
     * Gets the document content
     *
     * @return The document content
     */
    byte[] getContent();

    /**
     * Sets the document content
     *
     * @param content The document content to set
     */
    void setContent(byte[] content);

    /**
     * Gets an attribute associated with the document
     *
     * @param name The attribute name
     * @return The value of the attribute or <code>null</code> if it does not exist
     */
    Object getAttribute(String name);

    /**
     * Gets an integer attribute associated with the document
     *
     * @param name The attribute name
     * @return The value of the attribute or <code>null</code> if it does not exist
     */
    Integer getIntegerAttribute(String name);

    /**
     * Gets a date attribute associated with the document
     *
     * @param name The attribute name
     * @return The value of the attribute or <code>null</code> if it does not exist
     */
    Date getDateAttribute(String name);

    /**
     * Gets a string attribute associated with the document
     *
     * @param name The attribute name
     * @return The value of the attribute or <code>null</code> if it does not exist
     */
    String getStringAttribute(String name);

    /**
     * Gets a list attribute associated with the document
     *
     * @param name The attribute name
     * @return The value of the attribute or <code>null</code> if it does not exist
     */
    List getListAttribute(String name);

    /**
     * Sets a document attribute given its name
     *
     * @param name The attribute name
     * @param value The attribute value to set
     */
    void setAttribute(String name, Object value);

    /**
     * Removes an attribute given its name
     *
     * @param name The attribute name to remove
     * @return The value of the attribute that has been removed or <code>null</code> if it does not exist
     */
    Object removeAttribute(String name);

    /**
     * Gets the attributes entry list iterator
     *
     * @return The attributes entry list iterator
     */
    Iterator/*<Entry<String, Object>>*/ getAttributes();
}