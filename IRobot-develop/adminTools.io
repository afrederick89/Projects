<?xml version="1.0" encoding="UTF-8"?>
<ui version="4.0">
 <class>MainWindow</class>
 <widget class="QMainWindow" name="MainWindow">
  <property name="geometry">
   <rect>
    <x>0</x>
    <y>0</y>
    <width>953</width>
    <height>525</height>
   </rect>
  </property>
  <property name="sizePolicy">
   <sizepolicy hsizetype="Preferred" vsizetype="Preferred">
    <horstretch>0</horstretch>
    <verstretch>0</verstretch>
   </sizepolicy>
  </property>
  <property name="minimumSize">
   <size>
    <width>953</width>
    <height>525</height>
   </size>
  </property>
  <property name="maximumSize">
   <size>
    <width>953</width>
    <height>525</height>
   </size>
  </property>
  <property name="palette">
   <palette>
    <active>
     <colorrole role="Base">
      <brush brushstyle="SolidPattern">
       <color alpha="255">
        <red>255</red>
        <green>255</green>
        <blue>255</blue>
       </color>
      </brush>
     </colorrole>
     <colorrole role="Window">
      <brush brushstyle="SolidPattern">
       <color alpha="255">
        <red>214</red>
        <green>214</green>
        <blue>214</blue>
       </color>
      </brush>
     </colorrole>
    </active>
    <inactive>
     <colorrole role="Base">
      <brush brushstyle="SolidPattern">
       <color alpha="255">
        <red>255</red>
        <green>255</green>
        <blue>255</blue>
       </color>
      </brush>
     </colorrole>
     <colorrole role="Window">
      <brush brushstyle="SolidPattern">
       <color alpha="255">
        <red>214</red>
        <green>214</green>
        <blue>214</blue>
       </color>
      </brush>
     </colorrole>
    </inactive>
    <disabled>
     <colorrole role="Base">
      <brush brushstyle="SolidPattern">
       <color alpha="255">
        <red>214</red>
        <green>214</green>
        <blue>214</blue>
       </color>
      </brush>
     </colorrole>
     <colorrole role="Window">
      <brush brushstyle="SolidPattern">
       <color alpha="255">
        <red>214</red>
        <green>214</green>
        <blue>214</blue>
       </color>
      </brush>
     </colorrole>
    </disabled>
   </palette>
  </property>
  <property name="windowTitle">
   <string>MainWindow</string>
  </property>
  <widget class="QWidget" name="centralWidget">
   <property name="sizePolicy">
    <sizepolicy hsizetype="Expanding" vsizetype="Expanding">
     <horstretch>0</horstretch>
     <verstretch>0</verstretch>
    </sizepolicy>
   </property>
   <property name="minimumSize">
    <size>
     <width>953</width>
     <height>525</height>
    </size>
   </property>
   <property name="maximumSize">
    <size>
     <width>953</width>
     <height>525</height>
    </size>
   </property>
   <layout class="QFormLayout" name="formLayout">
    <property name="sizeConstraint">
     <enum>QLayout::SetFixedSize</enum>
    </property>
    <property name="labelAlignment">
     <set>Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft</set>
    </property>
    <property name="formAlignment">
     <set>Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop</set>
    </property>
    <property name="horizontalSpacing">
     <number>2</number>
    </property>
    <property name="verticalSpacing">
     <number>0</number>
    </property>
    <property name="leftMargin">
     <number>1</number>
    </property>
    <property name="topMargin">
     <number>0</number>
    </property>
    <property name="rightMargin">
     <number>0</number>
    </property>
    <property name="bottomMargin">
     <number>0</number>
    </property>
    <item row="0" column="0">
     <widget class="QWidget" name="SideBar" native="true">
      <property name="enabled">
       <bool>true</bool>
      </property>
      <property name="sizePolicy">
       <sizepolicy hsizetype="Fixed" vsizetype="Fixed">
        <horstretch>0</horstretch>
        <verstretch>0</verstretch>
       </sizepolicy>
      </property>
      <property name="minimumSize">
       <size>
        <width>150</width>
        <height>525</height>
       </size>
      </property>
      <property name="maximumSize">
       <size>
        <width>150</width>
        <height>600</height>
       </size>
      </property>
      <property name="palette">
       <palette>
        <active>
         <colorrole role="Base">
          <brush brushstyle="SolidPattern">
           <color alpha="255">
            <red>255</red>
            <green>255</green>
            <blue>255</blue>
           </color>
          </brush>
         </colorrole>
         <colorrole role="Window">
          <brush brushstyle="SolidPattern">
           <color alpha="255">
            <red>180</red>
            <green>180</green>
            <blue>180</blue>
           </color>
          </brush>
         </colorrole>
        </active>
        <inactive>
         <colorrole role="Base">
          <brush brushstyle="SolidPattern">
           <color alpha="255">
            <red>255</red>
            <green>255</green>
            <blue>255</blue>
           </color>
          </brush>
         </colorrole>
         <colorrole role="Window">
          <brush brushstyle="SolidPattern">
           <color alpha="255">
            <red>180</red>
            <green>180</green>
            <blue>180</blue>
           </color>
          </brush>
         </colorrole>
        </inactive>
        <disabled>
         <colorrole role="Base">
          <brush brushstyle="SolidPattern">
           <color alpha="255">
            <red>180</red>
            <green>180</green>
            <blue>180</blue>
           </color>
          </brush>
         </colorrole>
         <colorrole role="Window">
          <brush brushstyle="SolidPattern">
           <color alpha="255">
            <red>180</red>
            <green>180</green>
            <blue>180</blue>
           </color>
          </brush>
         </colorrole>
        </disabled>
       </palette>
      </property>
      <property name="autoFillBackground">
       <bool>true</bool>
      </property>
      <layout class="QVBoxLayout" name="verticalLayout_5">
       <property name="spacing">
        <number>9</number>
       </property>
       <property name="sizeConstraint">
        <enum>QLayout::SetFixedSize</enum>
       </property>
       <property name="leftMargin">
        <number>0</number>
       </property>
       <property name="topMargin">
        <number>5</number>
       </property>
       <property name="rightMargin">
        <number>0</number>
       </property>
       <property name="bottomMargin">
        <number>3</number>
       </property>
       <item>
        <layout class="QVBoxLayout" name="FeatureButtons">
         <property name="spacing">
          <number>16</number>
         </property>
         <property name="sizeConstraint">
          <enum>QLayout::SetFixedSize</enum>
         </property>
         <item>
          <widget class="QPushButton" name="Feature1">
           <property name="sizePolicy">
            <sizepolicy hsizetype="Minimum" vsizetype="Fixed">
             <horstretch>0</horstretch>
             <verstretch>0</verstretch>
            </sizepolicy>
           </property>
           <property name="minimumSize">
            <size>
             <width>148</width>
             <height>23</height>
            </size>
           </property>
           <property name="maximumSize">
            <size>
             <width>148</width>
             <height>23</height>
            </size>
           </property>
           <property name="text">
            <string>Place Order</string>
           </property>
          </widget>
         </item>
         <item>
          <widget class="QPushButton" name="Feature2">
           <property name="minimumSize">
            <size>
             <width>148</width>
             <height>23</height>
            </size>
           </property>
           <property name="maximumSize">
            <size>
             <width>148</width>
             <height>23</height>
            </size>
           </property>
           <property name="text">
            <string>Feature2</string>
           </property>
          </widget>
         </item>
         <item>
          <widget class="QPushButton" name="Feature3">
           <property name="minimumSize">
            <size>
             <width>148</width>
             <height>23</height>
            </size>
           </property>
           <property name="maximumSize">
            <size>
             <width>148</width>
             <height>23</height>
            </size>
           </property>
           <property name="text">
            <string>Feature3</string>
           </property>
          </widget>
         </item>
         <item>
          <widget class="QPushButton" name="Feature4">
           <property name="minimumSize">
            <size>
             <width>148</width>
             <height>23</height>
            </size>
           </property>
           <property name="maximumSize">
            <size>
             <width>148</width>
             <height>23</height>
            </size>
           </property>
           <property name="text">
            <string>Feature4</string>
           </property>
          </widget>
         </item>
        </layout>
       </item>
       <item>
        <spacer name="verticalSpacer">
         <property name="orientation">
          <enum>Qt::Vertical</enum>
         </property>
         <property name="sizeType">
          <enum>QSizePolicy::Fixed</enum>
         </property>
         <property name="sizeHint" stdset="0">
          <size>
           <width>20</width>
           <height>150</height>
          </size>
         </property>
        </spacer>
       </item>
       <item>
        <widget class="QGroupBox" name="CustLogin">
         <property name="enabled">
          <bool>true</bool>
         </property>
         <property name="sizePolicy">
          <sizepolicy hsizetype="Fixed" vsizetype="Fixed">
           <horstretch>0</horstretch>
           <verstretch>0</verstretch>
          </sizepolicy>
         </property>
         <property name="minimumSize">
          <size>
           <width>150</width>
           <height>100</height>
          </size>
         </property>
         <property name="maximumSize">
          <size>
           <width>150</width>
           <height>100</height>
          </size>
         </property>
         <property name="toolTipDuration">
          <number>0</number>
         </property>
         <property name="autoFillBackground">
          <bool>true</bool>
         </property>
         <property name="title">
          <string>Customer Login</string>
         </property>
         <property name="alignment">
          <set>Qt::AlignCenter</set>
         </property>
         <layout class="QGridLayout" name="CustLayout">
          <property name="sizeConstraint">
           <enum>QLayout::SetFixedSize</enum>
          </property>
          <property name="leftMargin">
           <number>2</number>
          </property>
          <property name="topMargin">
           <number>2</number>
          </property>
          <property name="rightMargin">
           <number>2</number>
          </property>
          <property name="bottomMargin">
           <number>0</number>
          </property>
          <property name="horizontalSpacing">
           <number>0</number>
          </property>
          <property name="verticalSpacing">
           <number>3</number>
          </property>
          <item row="2" column="0">
           <widget class="QPushButton" name="CustomerLogin_Button">
            <property name="minimumSize">
             <size>
              <width>144</width>
              <height>23</height>
             </size>
            </property>
            <property name="maximumSize">
             <size>
              <width>144</width>
              <height>23</height>
             </size>
            </property>
            <property name="text">
             <string>Customer Login</string>
            </property>
           </widget>
          </item>
          <item row="1" column="0">
           <layout class="QVBoxLayout" name="CustomerData">
            <item>
             <layout class="QHBoxLayout" name="CustEntry">
              <item>
               <widget class="QLineEdit" name="CustUN">
                <property name="minimumSize">
                 <size>
                  <width>67</width>
                  <height>20</height>
                 </size>
                </property>
                <property name="maximumSize">
                 <size>
                  <width>67</width>
                  <height>20</height>
                 </size>
                </property>
               </widget>
              </item>
              <item>
               <widget class="QLineEdit" name="CustPW">
                <property name="minimumSize">
                 <size>
                  <width>67</width>
                  <height>20</height>
                 </size>
                </property>
                <property name="maximumSize">
                 <size>
                  <width>67</width>
                  <height>20</height>
                 </size>
                </property>
                <property name="echoMode">
                 <enum>QLineEdit::Password</enum>
                </property>
               </widget>
              </item>
             </layout>
            </item>
            <item>
             <layout class="QHBoxLayout" name="CustLabels">
              <item>
               <widget class="QLabel" name="Label_CUSTUN">
                <property name="minimumSize">
                 <size>
                  <width>67</width>
                  <height>21</height>
                 </size>
                </property>
                <property name="maximumSize">
                 <size>
                  <width>67</width>
                  <height>21</height>
                 </size>
                </property>
                <property name="text">
                 <string>Username</string>
                </property>
                <property name="alignment">
                 <set>Qt::AlignCenter</set>
                </property>
               </widget>
              </item>
              <item>
               <widget class="QLabel" name="Label_CUSTPW">
                <property name="minimumSize">
                 <size>
                  <width>67</width>
                  <height>21</height>
                 </size>
                </property>
                <property name="maximumSize">
                 <size>
                  <width>67</width>
                  <height>21</height>
                 </size>
                </property>
                <property name="text">
                 <string>Password</string>
                </property>
                <property name="alignment">
                 <set>Qt::AlignCenter</set>
                </property>
               </widget>
              </item>
             </layout>
            </item>
           </layout>
          </item>
         </layout>
        </widget>
       </item>
       <item>
        <widget class="QGroupBox" name="AdminLogin">
         <property name="sizePolicy">
          <sizepolicy hsizetype="Fixed" vsizetype="Fixed">
           <horstretch>0</horstretch>
           <verstretch>0</verstretch>
          </sizepolicy>
         </property>
         <property name="minimumSize">
          <size>
           <width>150</width>
           <height>100</height>
          </size>
         </property>
         <property name="maximumSize">
          <size>
           <width>150</width>
           <height>100</height>
          </size>
         </property>
         <property name="palette">
          <palette>
           <active>
            <colorrole role="WindowText">
             <brush brushstyle="SolidPattern">
              <color alpha="255">
               <red>0</red>
               <green>0</green>
               <blue>0</blue>
              </color>
             </brush>
            </colorrole>
            <colorrole role="Button">
             <brush brushstyle="SolidPattern">
              <color alpha="255">
               <red>177</red>
               <green>177</green>
               <blue>177</blue>
              </color>
             </brush>
            </colorrole>
            <colorrole role="Light">
             <brush brushstyle="SolidPattern">
              <color alpha="255">
               <red>255</red>
               <green>255</green>
               <blue>255</blue>
              </color>
             </brush>
            </colorrole>
            <colorrole role="Midlight">
             <brush brushstyle="SolidPattern">
              <color alpha="255">
               <red>216</red>
               <green>216</green>
               <blue>216</blue>
              </color>
             </brush>
            </colorrole>
            <colorrole role="Dark">
             <brush brushstyle="SolidPattern">
              <color alpha="255">
               <red>88</red>
               <green>88</green>
               <blue>88</blue>
              </color>
             </brush>
            </colorrole>
            <colorrole role="Mid">
             <brush brushstyle="SolidPattern">
              <color alpha="255">
               <red>118</red>
               <green>118</green>
               <blue>118</blue>
              </color>
             </brush>
            </colorrole>
            <colorrole role="Text">
             <brush brushstyle="SolidPattern">
              <color alpha="255">
               <red>0</red>
               <green>0</green>
               <blue>0</blue>
              </color>
             </brush>
            </colorrole>
            <colorrole role="BrightText">
             <brush brushstyle="SolidPattern">
              <color alpha="255">
               <red>255</red>
               <green>255</green>
               <blue>255</blue>
              </color>
             </brush>
            </colorrole>
            <colorrole role="ButtonText">
             <brush brushstyle="SolidPattern">
              <color alpha="255">
               <red>0</red>
               <green>0</green>
               <blue>0</blue>
              </color>
             </brush>
            </colorrole>
            <colorrole role="Base">
             <brush brushstyle="SolidPattern">
              <color alpha="255">
               <red>255</red>
               <green>255</green>
               <blue>255</blue>
              </color>
             </brush>
            </colorrole>
            <colorrole role="Window">
             <brush brushstyle="SolidPattern">
              <color alpha="255">
               <red>177</red>
               <green>177</green>
               <blue>177</blue>
              </color>
             </brush>
            </colorrole>
            <colorrole role="Shadow">
             <brush brushstyle="SolidPattern">
              <color alpha="255">
               <red>0</red>
               <green>0</green>
               <blue>0</blue>
              </color>
             </brush>
            </colorrole>
            <colorrole role="AlternateBase">
             <brush brushstyle="SolidPattern">
              <color alpha="255">
               <red>216</red>
               <green>216</green>
               <blue>216</blue>
              </color>
             </brush>
            </colorrole>
            <colorrole role="ToolTipBase">
             <brush brushstyle="SolidPattern">
              <color alpha="255">
               <red>255</red>
               <green>255</green>
               <blue>220</blue>
              </color>
             </brush>
            </colorrole>
            <colorrole role="ToolTipText">
             <brush brushstyle="SolidPattern">
              <color alpha="255">
               <red>0</red>
               <green>0</green>
               <blue>0</blue>
              </color>
             </brush>
            </colorrole>
           </active>
           <inactive>
            <colorrole role="WindowText">
             <brush brushstyle="SolidPattern">
              <color alpha="255">
               <red>0</red>
               <green>0</green>
               <blue>0</blue>
              </color>
             </brush>
            </colorrole>
            <colorrole role="Button">
             <brush brushstyle="SolidPattern">
              <color alpha="255">
               <red>177</red>
               <green>177</green>
               <blue>177</blue>
              </color>
             </brush>
            </colorrole>
            <colorrole role="Light">
             <brush brushstyle="SolidPattern">
              <color alpha="255">
               <red>255</red>
               <green>255</green>
               <blue>255</blue>
              </color>
             </brush>
            </colorrole>
            <colorrole role="Midlight">
             <brush brushstyle="SolidPattern">
              <color alpha="255">
               <red>216</red>
               <green>216</green>
               <blue>216</blue>
              </color>
             </brush>
            </colorrole>
            <colorrole role="Dark">
             <brush brushstyle="SolidPattern">
              <color alpha="255">
               <red>88</red>
               <green>88</green>
               <blue>88</blue>
              </color>
             </brush>
            </colorrole>
            <colorrole role="Mid">
             <brush brushstyle="SolidPattern">
              <color alpha="255">
               <red>118</red>
               <green>118</green>
               <blue>118</blue>
              </color>
             </brush>
            </colorrole>
            <colorrole role="Text">
             <brush brushstyle="SolidPattern">
              <color alpha="255">
               <red>0</red>
               <green>0</green>
               <blue>0</blue>
              </color>
             </brush>
            </colorrole>
            <colorrole role="BrightText">
             <brush brushstyle="SolidPattern">
              <color alpha="255">
               <red>255</red>
               <green>255</green>
               <blue>255</blue>
              </color>
             </brush>
            </colorrole>
            <colorrole role="ButtonText">
             <brush brushstyle="SolidPattern">
              <color alpha="255">
               <red>0</red>
               <green>0</green>
               <blue>0</blue>
              </color>
             </brush>
            </colorrole>
            <colorrole role="Base">
             <brush brushstyle="SolidPattern">
              <color alpha="255">
               <red>255</red>
               <green>255</green>
               <blue>255</blue>
              </color>
             </brush>
            </colorrole>
            <colorrole role="Window">
             <brush brushstyle="SolidPattern">
              <color alpha="255">
               <red>177</red>
               <green>177</green>
               <blue>177</blue>
              </color>
             </brush>
            </colorrole>
            <colorrole role="Shadow">
             <brush brushstyle="SolidPattern">
              <color alpha="255">
               <red>0</red>
               <green>0</green>
               <blue>0</blue>
              </color>
             </brush>
            </colorrole>
            <colorrole role="AlternateBase">
             <brush brushstyle="SolidPattern">
              <color alpha="255">
               <red>216</red>
               <green>216</green>
               <blue>216</blue>
              </color>
             </brush>
            </colorrole>
            <colorrole role="ToolTipBase">
             <brush brushstyle="SolidPattern">
              <color alpha="255">
               <red>255</red>
               <green>255</green>
               <blue>220</blue>
              </color>
             </brush>
            </colorrole>
            <colorrole role="ToolTipText">
             <brush brushstyle="SolidPattern">
              <color alpha="255">
               <red>0</red>
               <green>0</green>
               <blue>0</blue>
              </color>
             </brush>
            </colorrole>
           </inactive>
           <disabled>
            <colorrole role="WindowText">
             <brush brushstyle="SolidPattern">
              <color alpha="255">
               <red>88</red>
               <green>88</green>
               <blue>88</blue>
              </color>
             </brush>
            </colorrole>
            <colorrole role="Button">
             <brush brushstyle="SolidPattern">
              <color alpha="255">
               <red>177</red>
               <green>177</green>
               <blue>177</blue>
              </color>
             </brush>
            </colorrole>
            <colorrole role="Light">
             <brush brushstyle="SolidPattern">
              <color alpha="255">
               <red>255</red>
               <green>255</green>
               <blue>255</blue>
              </color>
             </brush>
            </colorrole>
            <colorrole role="Midlight">
             <brush brushstyle="SolidPattern">
              <color alpha="255">
               <red>216</red>
               <green>216</green>
               <blue>216</blue>
              </color>
             </brush>
            </colorrole>
            <colorrole role="Dark">
             <brush brushstyle="SolidPattern">
              <color alpha="255">
               <red>88</red>
               <green>88</green>
               <blue>88</blue>
              </color>
             </brush>
            </colorrole>
            <colorrole role="Mid">
             <brush brushstyle="SolidPattern">
              <color alpha="255">
               <red>118</red>
               <green>118</green>
               <blue>118</blue>
              </color>
             </brush>
            </colorrole>
            <colorrole role="Text">
             <brush brushstyle="SolidPattern">
              <color alpha="255">
               <red>88</red>
               <green>88</green>
               <blue>88</blue>
              </color>
             </brush>
            </colorrole>
            <colorrole role="BrightText">
             <brush brushstyle="SolidPattern">
              <color alpha="255">
               <red>255</red>
               <green>255</green>
               <blue>255</blue>
              </color>
             </brush>
            </colorrole>
            <colorrole role="ButtonText">
             <brush brushstyle="SolidPattern">
              <color alpha="255">
               <red>88</red>
               <green>88</green>
               <blue>88</blue>
              </color>
             </brush>
            </colorrole>
            <colorrole role="Base">
             <brush brushstyle="SolidPattern">
              <color alpha="255">
               <red>177</red>
               <green>177</green>
               <blue>177</blue>
              </color>
             </brush>
            </colorrole>
            <colorrole role="Window">
             <brush brushstyle="SolidPattern">
              <color alpha="255">
               <red>177</red>
               <green>177</green>
               <blue>177</blue>
              </color>
             </brush>
            </colorrole>
            <colorrole role="Shadow">
             <brush brushstyle="SolidPattern">
              <color alpha="255">
               <red>0</red>
               <green>0</green>
               <blue>0</blue>
              </color>
             </brush>
            </colorrole>
            <colorrole role="AlternateBase">
             <brush brushstyle="SolidPattern">
              <color alpha="255">
               <red>177</red>
               <green>177</green>
               <blue>177</blue>
              </color>
             </brush>
            </colorrole>
            <colorrole role="ToolTipBase">
             <brush brushstyle="SolidPattern">
              <color alpha="255">
               <red>255</red>
               <green>255</green>
               <blue>220</blue>
              </color>
             </brush>
            </colorrole>
            <colorrole role="ToolTipText">
             <brush brushstyle="SolidPattern">
              <color alpha="255">
               <red>0</red>
               <green>0</green>
               <blue>0</blue>
              </color>
             </brush>
            </colorrole>
           </disabled>
          </palette>
         </property>
         <property name="contextMenuPolicy">
          <enum>Qt::DefaultContextMenu</enum>
         </property>
         <property name="toolTipDuration">
          <number>0</number>
         </property>
         <property name="layoutDirection">
          <enum>Qt::LeftToRight</enum>
         </property>
         <property name="autoFillBackground">
          <bool>true</bool>
         </property>
         <property name="title">
          <string>Administrator</string>
         </property>
         <property name="alignment">
          <set>Qt::AlignCenter</set>
         </property>
         <property name="flat">
          <bool>false</bool>
         </property>
         <property name="checkable">
          <bool>false</bool>
         </property>
         <layout class="QGridLayout" name="AdminLayout">
          <property name="sizeConstraint">
           <enum>QLayout::SetFixedSize</enum>
          </property>
          <property name="leftMargin">
           <number>2</number>
          </property>
          <property name="topMargin">
           <number>2</number>
          </property>
          <property name="rightMargin">
           <number>2</number>
          </property>
          <property name="bottomMargin">
           <number>0</number>
          </property>
          <property name="horizontalSpacing">
           <number>0</number>
          </property>
          <property name="verticalSpacing">
           <number>3</number>
          </property>
          <item row="0" column="0">
           <layout class="QVBoxLayout" name="UNPW">
            <item>
             <layout class="QHBoxLayout" name="LineEdits">
              <property name="spacing">
               <number>4</number>
              </property>
              <item>
               <widget class="QLineEdit" name="AdminUN">
                <property name="sizePolicy">
                 <sizepolicy hsizetype="Fixed" vsizetype="Fixed">
                  <horstretch>0</horstretch>
                  <verstretch>0</verstretch>
                 </sizepolicy>
                </property>
                <property name="minimumSize">
                 <size>
                  <width>68</width>
                  <height>20</height>
                 </size>
                </property>
                <property name="maximumSize">
                 <size>
                  <width>68</width>
                  <height>20</height>
                 </size>
                </property>
               </widget>
              </item>
              <item>
               <widget class="QLineEdit" name="AdminPW">
                <property name="sizePolicy">
                 <sizepolicy hsizetype="Fixed" vsizetype="Fixed">
                  <horstretch>0</horstretch>
                  <verstretch>0</verstretch>
                 </sizepolicy>
                </property>
                <property name="minimumSize">
                 <size>
                  <width>68</width>
                  <height>20</height>
                 </size>
                </property>
                <property name="maximumSize">
                 <size>
                  <width>68</width>
                  <height>20</height>
                 </size>
                </property>
               </widget>
              </item>
             </layout>
            </item>
            <item>
             <layout class="QHBoxLayout" name="AdminLabels">
              <property name="spacing">
               <number>4</number>
              </property>
              <item>
               <widget class="QLabel" name="Uname">
                <property name="minimumSize">
                 <size>
                  <width>68</width>
                  <height>21</height>
                 </size>
                </property>
                <property name="maximumSize">
                 <size>
                  <width>68</width>
                  <height>21</height>
                 </size>
                </property>
                <property name="text">
                 <string>Username</string>
                </property>
                <property name="alignment">
                 <set>Qt::AlignCenter</set>
                </property>
               </widget>
              </item>
              <item>
               <widget class="QLabel" name="Pword">
                <property name="minimumSize">
                 <size>
                  <width>68</width>
                  <height>21</height>
                 </size>
                </property>
                <property name="maximumSize">
                 <size>
                  <width>68</width>
                  <height>21</height>
                 </size>
                </property>
                <property name="text">
                 <string>Password</string>
                </property>
                <property name="alignment">
                 <set>Qt::AlignCenter</set>
                </property>
               </widget>
              </item>
             </layout>
            </item>
           </layout>
          </item>
          <item row="1" column="0">
           <widget class="QPushButton" name="AdminLogin_Button">
            <property name="minimumSize">
             <size>
              <width>144</width>
              <height>23</height>
             </size>
            </property>
            <property name="maximumSize">
             <size>
              <width>144</width>
              <height>23</height>
             </size>
            </property>
            <property name="text">
             <string>Admin Login</string>
            </property>
           </widget>
          </item>
         </layout>
        </widget>
       </item>
      </layout>
     </widget>
    </item>
    <item row="0" column="1">
     <widget class="QTabWidget" name="tabWidget">
      <property name="enabled">
       <bool>true</bool>
      </property>
      <property name="sizePolicy">
       <sizepolicy hsizetype="Fixed" vsizetype="Fixed">
        <horstretch>0</horstretch>
        <verstretch>0</verstretch>
       </sizepolicy>
      </property>
      <property name="minimumSize">
       <size>
        <width>800</width>
        <height>525</height>
       </size>
      </property>
      <property name="maximumSize">
       <size>
        <width>800</width>
        <height>526</height>
       </size>
      </property>
      <property name="tabPosition">
       <enum>QTabWidget::North</enum>
      </property>
      <property name="currentIndex">
       <number>3</number>
      </property>
      <property name="elideMode">
       <enum>Qt::ElideNone</enum>
      </property>
      <widget class="QWidget" name="About_Tab">
       <attribute name="title">
        <string>About</string>
       </attribute>
       <layout class="QVBoxLayout" name="verticalLayout_2">
        <item>
         <widget class="QTextEdit" name="AboutText">
          <property name="minimumSize">
           <size>
            <width>776</width>
            <height>481</height>
           </size>
          </property>
          <property name="readOnly">
           <bool>true</bool>
          </property>
          <property name="html">
           <string>&lt;!DOCTYPE HTML PUBLIC &quot;-//W3C//DTD HTML 4.0//EN&quot; &quot;http://www.w3.org/TR/REC-html40/strict.dtd&quot;&gt;
&lt;html&gt;&lt;head&gt;&lt;meta name=&quot;qrichtext&quot; content=&quot;1&quot; /&gt;&lt;style type=&quot;text/css&quot;&gt;
p, li { white-space: pre-wrap; }
&lt;/style&gt;&lt;/head&gt;&lt;body style=&quot; font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;&quot;&gt;
&lt;p style=&quot; margin-top:0px; margin-bottom:25px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#ffffff;&quot;&gt;&lt;span style=&quot; font-size:12pt; font-weight:600; color:#313131; background-color:#ffffff;&quot;&gt;About us&lt;/span&gt;&lt;/p&gt;
&lt;p style=&quot; margin-top:0px; margin-bottom:25px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#ffffff;&quot;&gt;&lt;span style=&quot; font-family:'open-sans,sans-serif'; font-size:12pt; font-weight:696; color:#313131; background-color:#ffffff;&quot;&gt;What we provide&lt;/span&gt;&lt;/p&gt;
&lt;p style=&quot; margin-top:0px; margin-bottom:15px; margin-left:0px; margin-right:36px; -qt-block-indent:0; text-indent:0px;&quot;&gt;&lt;span style=&quot; font-family:'Rubik,sans-serif'; font-size:12pt; font-weight:296; color:#313131; background-color:#ffffff;&quot;&gt;iRobot Co. manufactures high-quality, innovative, and cost-effective bomb disposal robots&lt;/span&gt;&lt;/p&gt;
&lt;p style=&quot; margin-top:0px; margin-bottom:15px; margin-left:0px; margin-right:36px; -qt-block-indent:0; text-indent:0px;&quot;&gt;&lt;span style=&quot; font-family:'open-sans,sans-serif'; font-size:12pt; font-weight:696; color:#313131; background-color:#ffffff;&quot;&gt;Why you should buy our products&lt;/span&gt;&lt;/p&gt;
&lt;p style=&quot; margin-top:0px; margin-bottom:15px; margin-left:0px; margin-right:36px; -qt-block-indent:0; text-indent:0px;&quot;&gt;&lt;span style=&quot; font-family:'Rubik,sans-serif'; font-size:12pt; font-weight:296; color:#232323; background-color:#ffffff;&quot;&gt;All iRobot Co. robots are made on-site within its 50,000 square-foot manufacturing facility from our design and prototyping to machine shop, assembly and quality assurance.&lt;/span&gt;&lt;/p&gt;
&lt;p style=&quot; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#ffffff;&quot;&gt;&lt;span style=&quot; font-family:'Rubik,sans-serif'; font-size:12pt; font-weight:296; color:#232323; background-color:#ffffff;&quot;&gt;Many products are created based on customer feedback, enabling the company to constantly work on developing new and custom solutions.&lt;/span&gt;&lt;/p&gt;
&lt;p style=&quot;-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Rubik,sans-serif'; font-size:12pt; font-weight:296; color:#232323; background-color:#ffffff;&quot;&gt;&lt;br /&gt;&lt;/p&gt;
&lt;p style=&quot; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#ffffff;&quot;&gt;&lt;span style=&quot; font-family:'Rubik,sans-serif'; font-size:12pt; font-weight:296; color:#232323; background-color:#ffffff;&quot;&gt;Strongly&lt;/span&gt;&lt;span style=&quot; font-family:'Rubik,sans-serif'; font-size:12pt; font-weight:296; color:#232323;&quot;&gt; customer focused and solutions-oriented, iRobot Co. has earned the confidence of civilian law enforcement agencies worldwide. iRobot Co.&lt;/span&gt;&lt;span style=&quot; font-family:'Rubik,sans-serif'; font-size:12pt; font-weight:296; color:#232323; background-color:#ffffff;&quot;&gt; robots are used worldwide in more than 40 countries &lt;/span&gt;&lt;/p&gt;&lt;/body&gt;&lt;/html&gt;</string>
          </property>
         </widget>
        </item>
       </layout>
      </widget>
      <widget class="QWidget" name="Products_Tab">
       <attribute name="title">
        <string>Products</string>
       </attribute>
       <layout class="QVBoxLayout" name="verticalLayout">
        <item>
         <widget class="QTextEdit" name="Products_Text">
          <property name="readOnly">
           <bool>true</bool>
          </property>
          <property name="html">
           <string>&lt;!DOCTYPE HTML PUBLIC &quot;-//W3C//DTD HTML 4.0//EN&quot; &quot;http://www.w3.org/TR/REC-html40/strict.dtd&quot;&gt;
&lt;html&gt;&lt;head&gt;&lt;meta name=&quot;qrichtext&quot; content=&quot;1&quot; /&gt;&lt;style type=&quot;text/css&quot;&gt;
p, li { white-space: pre-wrap; }
&lt;/style&gt;&lt;/head&gt;&lt;body style=&quot; font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;&quot;&gt;
&lt;p style=&quot; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;&quot;&gt;&lt;span style=&quot; font-size:12pt; font-weight:600; text-decoration: underline;&quot;&gt;Our Products&lt;/span&gt;&lt;/p&gt;
&lt;p style=&quot;-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt; font-weight:600; text-decoration: underline;&quot;&gt;&lt;br /&gt;&lt;/p&gt;
&lt;p style=&quot; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;&quot;&gt;&lt;span style=&quot; font-size:12pt; font-weight:600;&quot;&gt;Mini Robot- $5,000.00&lt;/span&gt;&lt;/p&gt;
&lt;p style=&quot; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;&quot;&gt;&lt;span style=&quot; font-family:'Rubik,sans-serif'; font-size:10pt; font-weight:296; color:#232323; background-color:#ffffff;&quot;&gt;- Designed for rapid tactical missions.&lt;/span&gt;&lt;/p&gt;
&lt;p style=&quot; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;&quot;&gt;&lt;span style=&quot; font-family:'Rubik,sans-serif'; font-size:10pt; font-weight:296; color:#232323; background-color:#ffffff;&quot;&gt;- Quick to deploy for searching rooms, hallways, stairwells and confined spaces. &lt;/span&gt;&lt;/p&gt;
&lt;p style=&quot; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;&quot;&gt;&lt;span style=&quot; font-family:'Rubik,sans-serif'; font-size:10pt; font-weight:296; color:#232323; background-color:#ffffff;&quot;&gt;- Includes an extendible rotating claw arm that simplifies opening door handles.&lt;/span&gt;&lt;/p&gt;
&lt;p style=&quot; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;&quot;&gt;&lt;span style=&quot; font-family:'Rubik,sans-serif'; font-size:10pt; font-weight:296; color:#232323; background-color:#ffffff;&quot;&gt;- With rubber tracks and articulating front and rear flippers, the iMini effortlessly climbs stairs. &lt;/span&gt;&lt;/p&gt;
&lt;p style=&quot;-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Rubik,sans-serif'; font-size:10pt; font-weight:296; color:#232323;&quot;&gt;&lt;br /&gt;&lt;/p&gt;
&lt;p style=&quot; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;&quot;&gt;&lt;span style=&quot; font-size:12pt; font-weight:600; color:#363636;&quot;&gt;Medium Robot - $6,000.00&lt;/span&gt;&lt;/p&gt;
&lt;p style=&quot; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;&quot;&gt;&lt;span style=&quot; font-family:'Rubik,sans-serif'; font-size:10pt; font-weight:296; color:#232323; background-color:#ffffff;&quot;&gt;- The Medium Robot&lt;/span&gt;&lt;span style=&quot; font-family:'Rubik,sans-serif'; font-size:10pt; font-weight:296; color:#232323;&quot;&gt; is a medium-sized robot designed for remote handling.&lt;/span&gt;&lt;/p&gt;
&lt;p style=&quot; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#ffffff;&quot;&gt;&lt;span style=&quot; font-family:'Rubik,sans-serif'; font-size:10pt; font-weight:296; color:#232323; background-color:#ffffff;&quot;&gt;- Uniquely equipped with two robotic arms (a heavy-duty robotic claw and twin-disruptor turret).&lt;/span&gt;&lt;/p&gt;
&lt;p style=&quot; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#ffffff;&quot;&gt;&lt;span style=&quot; font-family:'Rubik,sans-serif'; font-size:10pt; font-weight:296; color:#232323; background-color:#ffffff;&quot;&gt;- Six color cameras help facilitate all kinds of surveillance missions.&lt;/span&gt;&lt;/p&gt;
&lt;p style=&quot;-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Rubik,sans-serif'; font-size:8pt; font-weight:296; color:#363636;&quot;&gt;&lt;br /&gt;&lt;/p&gt;
&lt;p style=&quot; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;&quot;&gt;&lt;span style=&quot; font-size:12pt; font-weight:600; color:#363636;&quot;&gt;Large Robot - $8,000.00&lt;/span&gt;&lt;/p&gt;
&lt;p style=&quot; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;&quot;&gt;&lt;span style=&quot; font-family:'Rubik,sans-serif'; font-size:10pt; font-weight:296; color:#232323; background-color:#ffffff;&quot;&gt;- The Large Robot is the most powerful of all iRobots with a lift  capacity of 200 lbs.&lt;/span&gt;&lt;/p&gt;
&lt;p style=&quot; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;&quot;&gt;&lt;span style=&quot; font-family:'Rubik,sans-serif'; font-size:10pt; font-weight:296; color:#232323; background-color:#ffffff;&quot;&gt;- Provides automatic pre-set positioning to facilitate rapid deployment. &lt;/span&gt;&lt;/p&gt;
&lt;p style=&quot; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;&quot;&gt;&lt;span style=&quot; font-family:'Rubik,sans-serif'; font-size:10pt; font-weight:296; color:#232323; background-color:#ffffff;&quot;&gt;- 3D avatar that offers real-time positional feedback on the actual position of the robot.&lt;/span&gt;&lt;/p&gt;
&lt;p style=&quot; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#ffffff;&quot;&gt;&lt;span style=&quot; font-family:'Rubik,sans-serif'; font-size:10pt; font-weight:296; color:#232323; background-color:#ffffff;&quot;&gt;- The design allows for reduced maintenance costs through easy platform upgrades, field repair, and parts replacement.&lt;/span&gt;&lt;/p&gt;
&lt;p style=&quot;-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt; font-weight:600;&quot;&gt;&lt;br /&gt;&lt;/p&gt;
&lt;p style=&quot; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;&quot;&gt;&lt;span style=&quot; font-size:12pt; font-weight:600; color:#363636;&quot;&gt;Logistics and Maintenance&lt;/span&gt;&lt;/p&gt;
&lt;p style=&quot; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;&quot;&gt;&lt;span style=&quot; font-size:10pt;&quot;&gt;- 1 year:  $2,000.00&lt;/span&gt;&lt;/p&gt;
&lt;p style=&quot; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;&quot;&gt;&lt;span style=&quot; font-size:10pt;&quot;&gt;- 2 year:  $3,500.00&lt;/span&gt;&lt;/p&gt;
&lt;p style=&quot; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;&quot;&gt;&lt;span style=&quot; font-size:10pt;&quot;&gt;- 5 year:  $4,200.00&lt;/span&gt;&lt;/p&gt;
&lt;p style=&quot;-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt;&quot;&gt;&lt;br /&gt;&lt;/p&gt;
&lt;p style=&quot; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;&quot;&gt;&lt;span style=&quot; font-size:12pt; font-weight:600; color:#363636;&quot;&gt;Guaruntee Policy&lt;/span&gt;&lt;/p&gt;
&lt;p style=&quot; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;&quot;&gt;&lt;span style=&quot; font-size:12pt; font-weight:600; color:#363636;&quot;&gt;-&lt;/span&gt;&lt;span style=&quot; font-size:10pt; color:#363636;&quot;&gt; All iRobot Co. robots gauruntees your money back if you are unsatisfied with our product.&lt;/span&gt;&lt;/p&gt;
&lt;p style=&quot;-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt; color:#363636;&quot;&gt;&lt;br /&gt;&lt;/p&gt;&lt;/body&gt;&lt;/html&gt;</string>
          </property>
         </widget>
        </item>
       </layout>
      </widget>
      <widget class="QWidget" name="Contact_Tab">
       <attribute name="title">
        <string>Contact</string>
       </attribute>
       <layout class="QVBoxLayout" name="verticalLayout_3">
        <item>
         <widget class="QTextEdit" name="Contact_Text">
          <property name="minimumSize">
           <size>
            <width>776</width>
            <height>481</height>
           </size>
          </property>
          <property name="maximumSize">
           <size>
            <width>776</width>
            <height>482</height>
           </size>
          </property>
          <property name="readOnly">
           <bool>true</bool>
          </property>
          <property name="html">
           <string>&lt;!DOCTYPE HTML PUBLIC &quot;-//W3C//DTD HTML 4.0//EN&quot; &quot;http://www.w3.org/TR/REC-html40/strict.dtd&quot;&gt;
&lt;html&gt;&lt;head&gt;&lt;meta name=&quot;qrichtext&quot; content=&quot;1&quot; /&gt;&lt;style type=&quot;text/css&quot;&gt;
p, li { white-space: pre-wrap; }
&lt;/style&gt;&lt;/head&gt;&lt;body style=&quot; font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;&quot;&gt;
&lt;p align=&quot;center&quot; style=&quot;-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;&quot;&gt;&lt;br /&gt;&lt;/p&gt;
&lt;p align=&quot;center&quot; style=&quot;-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:11pt;&quot;&gt;&lt;br /&gt;&lt;/p&gt;
&lt;p align=&quot;center&quot; style=&quot; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;&quot;&gt;&lt;span style=&quot; font-size:11pt;&quot;&gt;iRobot Co.&lt;/span&gt;&lt;/p&gt;
&lt;p align=&quot;center&quot; style=&quot;-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:11pt;&quot;&gt;&lt;br /&gt;&lt;/p&gt;
&lt;p align=&quot;center&quot; style=&quot; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;&quot;&gt;&lt;span style=&quot; font-family:'Roboto,arial,sans-serif'; font-size:11pt; color:#232323; background-color:#ffffff; vertical-align:top;&quot;&gt;3474 Empresa Dr Suite 150, &lt;/span&gt;&lt;/p&gt;
&lt;p align=&quot;center&quot; style=&quot; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;&quot;&gt;&lt;span style=&quot; font-family:'Roboto,arial,sans-serif'; font-size:11pt; color:#232323; background-color:#ffffff; vertical-align:top;&quot;&gt;San Luis Obispo, CA 93401&lt;/span&gt;&lt;/p&gt;
&lt;p align=&quot;center&quot; style=&quot;-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Roboto,arial,sans-serif'; font-size:11pt; color:#232323; vertical-align:top;&quot;&gt;&lt;br /&gt;&lt;/p&gt;
&lt;p align=&quot;center&quot; style=&quot; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;&quot;&gt;&lt;a name=&quot;L33&quot;&gt;&lt;/a&gt;&lt;span style=&quot; font-family:'Consolas,Liberation Mono,Menlo,Courier,monospace'; font-size:11pt; color:#232323; vertical-align:top;&quot;&gt;(&lt;/span&gt;&lt;span style=&quot; font-family:'Consolas,Liberation Mono,Menlo,Courier,monospace'; font-size:11pt; color:#232323; vertical-align:top;&quot;&gt;805)-123-4567&lt;/span&gt;&lt;/p&gt;
&lt;p align=&quot;center&quot; style=&quot;-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Consolas,Liberation Mono,Menlo,Courier,monospace'; font-size:11pt; color:#232323; vertical-align:top;&quot;&gt;&lt;br /&gt;&lt;/p&gt;
&lt;p align=&quot;center&quot; style=&quot; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;&quot;&gt;&lt;span style=&quot; font-size:11pt; color:#232323; vertical-align:top;&quot;&gt;www.iRobot.com&lt;/span&gt;&lt;/p&gt;&lt;/body&gt;&lt;/html&gt;</string>
          </property>
         </widget>
        </item>
       </layout>
      </widget>
      <widget class="QWidget" name="Help_Tab">
       <property name="toolTipDuration">
        <number>0</number>
       </property>
       <attribute name="title">
        <string>Help</string>
       </attribute>
       <layout class="QVBoxLayout" name="verticalLayout_4">
        <item>
         <widget class="QTextEdit" name="Testimonial_Text">
          <property name="minimumSize">
           <size>
            <width>776</width>
            <height>481</height>
           </size>
          </property>
          <property name="readOnly">
           <bool>true</bool>
          </property>
          <property name="html">
           <string>&lt;!DOCTYPE HTML PUBLIC &quot;-//W3C//DTD HTML 4.0//EN&quot; &quot;http://www.w3.org/TR/REC-html40/strict.dtd&quot;&gt;
&lt;html&gt;&lt;head&gt;&lt;meta name=&quot;qrichtext&quot; content=&quot;1&quot; /&gt;&lt;style type=&quot;text/css&quot;&gt;
p, li { white-space: pre-wrap; }
&lt;/style&gt;&lt;/head&gt;&lt;body style=&quot; font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;&quot;&gt;
&lt;p style=&quot; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;&quot;&gt;&lt;span style=&quot; font-size:12pt; font-weight:600; text-decoration: underline;&quot;&gt;Program Help&lt;/span&gt;&lt;/p&gt;
&lt;p style=&quot;-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt; font-weight:600; text-decoration: underline;&quot;&gt;&lt;br /&gt;&lt;/p&gt;
&lt;p style=&quot; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;&quot;&gt;&lt;span style=&quot; font-size:12pt; font-weight:600;&quot;&gt;Requesting a Pamphlet&lt;/span&gt;&lt;/p&gt;
&lt;p style=&quot; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;&quot;&gt;&lt;span style=&quot; font-size:10pt; font-weight:600;&quot;&gt;- &lt;/span&gt;&lt;span style=&quot; font-size:10pt;&quot;&gt;Click on the button on the left that says &amp;quot;Request Pamphlet&amp;quot;&lt;/span&gt;&lt;/p&gt;
&lt;p style=&quot; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;&quot;&gt;&lt;span style=&quot; font-size:10pt;&quot;&gt;- Enter The information that the software asks you for&lt;/span&gt;&lt;/p&gt;
&lt;p style=&quot; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;&quot;&gt;&lt;span style=&quot; font-size:10pt;&quot;&gt;- Click &amp;quot;Receve Pamphlet&amp;quot; and it will be sent to your address ASAP&lt;/span&gt;&lt;/p&gt;
&lt;p style=&quot;-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt; font-weight:600;&quot;&gt;&lt;br /&gt;&lt;/p&gt;
&lt;p style=&quot; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;&quot;&gt;&lt;span style=&quot; font-size:12pt; font-weight:600;&quot;&gt;Purchase a Robot&lt;/span&gt;&lt;/p&gt;
&lt;p style=&quot; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;&quot;&gt;&lt;span style=&quot; font-size:10pt;&quot;&gt;- To purchase one of our robots, first click on the &amp;quot;Purchase&amp;quot; Button to the left of the screen&lt;/span&gt;&lt;/p&gt;
&lt;p style=&quot; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;&quot;&gt;&lt;span style=&quot; font-size:10pt;&quot;&gt;- Enter your company name and your Id in the spaces provided&lt;/span&gt;&lt;/p&gt;
&lt;p style=&quot; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;&quot;&gt;&lt;span style=&quot; font-size:10pt;&quot;&gt;- Select what robot, how many, and what kind of maintenance plan you would like to purchase&lt;/span&gt;&lt;/p&gt;
&lt;p style=&quot; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;&quot;&gt;&lt;span style=&quot; font-size:10pt;&quot;&gt;- Click the purchase button on the bottom of the screen, and your robot(s) will be sent to you ASAP&lt;/span&gt;&lt;/p&gt;
&lt;p style=&quot;-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt; font-weight:600;&quot;&gt;&lt;br /&gt;&lt;/p&gt;
&lt;p style=&quot;-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;&quot;&gt;&lt;br /&gt;&lt;/p&gt;
&lt;p style=&quot;-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;&quot;&gt;&lt;br /&gt;&lt;/p&gt;
&lt;p style=&quot;-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;&quot;&gt;&lt;br /&gt;&lt;/p&gt;
&lt;p style=&quot;-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;&quot;&gt;&lt;br /&gt;&lt;/p&gt;
&lt;p style=&quot;-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt; font-weight:600;&quot;&gt;&lt;br /&gt;&lt;/p&gt;
&lt;p style=&quot;-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt; font-weight:600;&quot;&gt;&lt;br /&gt;&lt;/p&gt;
&lt;p style=&quot;-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt; font-weight:600;&quot;&gt;&lt;br /&gt;&lt;/p&gt;
&lt;p style=&quot;-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt; font-weight:600;&quot;&gt;&lt;br /&gt;&lt;/p&gt;
&lt;p style=&quot;-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt; font-weight:600;&quot;&gt;&lt;br /&gt;&lt;/p&gt;
&lt;p style=&quot;-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt; font-weight:600;&quot;&gt;&lt;br /&gt;&lt;/p&gt;
&lt;p style=&quot; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;&quot;&gt;&lt;span style=&quot; font-size:10pt;&quot;&gt;If you have any further questions, contact us at www.irobot.com&lt;/span&gt;&lt;/p&gt;&lt;/body&gt;&lt;/html&gt;</string>
          </property>
         </widget>
        </item>
       </layout>
      </widget>
     </widget>
    </item>
   </layout>
  </widget>
 </widget>
 <layoutdefault spacing="6" margin="11"/>
 <tabstops>
  <tabstop>AboutText</tabstop>
  <tabstop>Feature1</tabstop>
  <tabstop>Feature2</tabstop>
  <tabstop>Feature3</tabstop>
  <tabstop>Feature4</tabstop>
  <tabstop>CustUN</tabstop>
  <tabstop>CustPW</tabstop>
  <tabstop>CustomerLogin_Button</tabstop>
  <tabstop>AdminUN</tabstop>
  <tabstop>AdminPW</tabstop>
  <tabstop>AdminLogin_Button</tabstop>
  <tabstop>Products_Text</tabstop>
  <tabstop>Contact_Text</tabstop>
  <tabstop>Testimonial_Text</tabstop>
 </tabstops>
 <resources/>
 <connections/>
</ui>
