#include "pch.h"
#include "MainWindow.xaml.h"
#if __has_include("MainWindow.g.cpp")
#include "MainWindow.g.cpp"
#endif

using namespace winrt;
using namespace Microsoft::UI::Xaml;

// To learn more about WinUI, the WinUI project structure,
// and more about our project templates, see: http://aka.ms/winui-project-info.

namespace winrt::star123::implementation
{
    MainWindow::MainWindow()
    {
        InitializeComponent();
    }

    int32_t MainWindow::MyProperty()
    {
        throw hresult_not_implemented();
    }

    void MainWindow::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }


}

void winrt::star123::implementation::MainWindow::MyRating_ValueChanged_1(winrt::Microsoft::UI::Xaml::Controls::RatingControl const& sender, winrt::Windows::Foundation::IInspectable const& args)
{
    RatingControl1().Caption(L"Your rating");
}


void winrt::star123::implementation::MainWindow::clearEnabledCheck_Checked(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
{
    RatingControl1().IsClearEnabled("True");
}


void winrt::star123::implementation::MainWindow::readOnlyCheck_Checked(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
{
    RatingControl1().IsReadOnly("True");
}


