#include "diacriticsview.h"
#include "ui_diacriticsview.h"

DiacriticsView::DiacriticsView(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DiacriticsView)
{
    ui->setupUi(this);
    QString diString("A\n Ạ ạ Ȧ ȧ Ä ä  Ȁ ȁ Ā ā  Â â  Ǎ ǎ  Ã ã  Ḁ ḁ  Å å  Ăă Ȃ ȃ À à  A̲ a̲ Ặ ặ  Ắ ắ Ǻ ǻ  Ằ ằ  Ẵ ẵ  Ậ ậ Ấ ấ  Ầ ầ  Ẫ ẫ  Ẩ ẩ  Ả ả  Ǎ ǎ  Ǡ ǡ  Ǟ ǟ  Ā̀ ā̀  Ą ą  Ą́ ą́  Ą̃ ą̃  Ẳ ẳ  ᶏ ẚ  Æ\nB\nβC\nĊ ċ  C̈ c̈  Ć ć  Ĉ ĉ  Č č  Ḉ ḉ  Ƈ ƈ  Ȼ ȼ  Ç çD\nḊ ḋ  Ḍ ḍ  Ḏ ḏ  Ď ď  Ḑ ḑ   Ḓ ḓ  Ɗ ɗ Ð đ  ð  ᵭ  ᶁ  ᶑ  ȡ  ɖ\nE\nĖ ė  Ë ë  É é  È è  Ê ê  Ě ě  Ẽ ẽ  Ĕ ĕ  Ẹ ẹ  Ệ ệ  Ḙ ḙ  Ḛ ḛ  Ế ế  Ềề  Ễ ễ  Ể ể  Ê̄ ê̄  Ê̌ ê̌  Ė́ ė́  Ė̃ ė̃  Ȩ ȩ  Ḝ ḝ  Ę ę  Ę́ ę́  Ę̃ ę̃  Ē ē  Ḗ ḗ  Ḕ ḕ  Ẻ ẻ  Ȅ ȅ  E̋ e̋  Ȇ ȇ  Ɇ ɇ  E̩ e̩  È̩ è̩  É̩ é̩\nF\nḞ ḟ  Ƒ ƒ  ᵮ  ᶂ\nG\nĠ ġ  Ḡ ḡ  Ǵ ǵ  Ĝ ĝ  Ǧ ǧ  Ğ ğ  Ǥ ǥ  Ģ ģ  Ɠ ɠ\nH\nḢ ḣ  Ḧ ḧ  Ĥ ĥ  Ȟ ȟ  Ħ ħ  Ḩ ḩ   Ⱨ ⱨ  ẖ ẖ  Ḥ ḥ  Ḫ ḫ\nI\nÍ í  Ì ì   i̇́    i̇̀    i̇̃    Ï ï  Î î  Ĩ ĩ  Ĭ ĭ  Ǐ ǐ  Į į  Į́ į̇́  Į̃ į̇̃  Ī ī  Ī̀ ī̀  Ỉ ỉ  Ȉ ȉ  I̋ i̋  Ȋ ȋ  Ị ị  Ḭ ḭ  ᶖ  İ i  I ı  Ḯḯ\nJ\nĴ ĵ   ǰ   Ɉ ɉ   J̃ j̇̃\nKḰ ḱ  Ǩ ǩ  Ḳ ḳ  Ƙ ƙ  Ḵ ḵ  Ķ ķ  ᶄ Ⱪ ⱪ\nL\nĹ ĺ  Ľ ľ  Ļ ļ  Ḷ ḷ  Ḹ ḹ  L̃ l̃  Ḽ ḽ  Ḻ ḻ    Ł ł  Ŀ ŀ  Ƚ ƚ  Ⱡ ⱡ  Ɫɫ  ɬ  ᶅ  ɭ\nM\nṀ ṁ  Ṃ ṃ  Ḿ ḿ  M̋ m̋  M̃ m̃   ᵯ  ᶆ\nN\nṄṅ  Ṇṇ Ńń  Ǹǹ  Ňň  Ññ  Ņņ   Ṋṋ  Ṉṉ  N̈n̈  Ɲɲ  Ŋŋ  Ƞƞ  ᵰ  ᶇ  ɳ  ȵ\nO\nÓ ó  Ò ò  Ȯ ȯ  Ö ö  O͘ o͘  Ô ô  Ǒ ǒ  Ŏ ŏ  Ō ō  Ố ố  Ồ ồ  Ỗ ỗ  Ổ ổ  Ȫ ȫ  Ő ő  Õ õ  Ṍ ṍ  Ṏ ṏ  Ȭ ȭ  Ȱ ȱ  Ø ø  Ǿ ǿ  Ǫ ǫ  Ǭ ǭ  Ṓ ṓ  Ṑ ṑ  Ỏ ỏ  Ȍ ȍ  Ȏ ȏ  Ơ ơ  Ớ ớ  Ờ ờ  Ỡ ỡ  Ở ở  Ợ ợ Ọ ọ  Ộ ộ  O̩ o̩  Ò̩ ò̩  Ó̩ ó̩  Ɵ ɵ\nP\nṔ ṕ  Ṗ ṗ  Ᵽ ᵽ  Ƥ ƥ  P̃ p̃  ᵱ  ᶈ\nQ\nʠ  Ɋ  ɋ  q̃\nR\nŔ ŕ  Ɍ ɍ  Ř ř  Ŗ ŗ  Ṙ ṙ  Ȑ ȑ  Ȓ ȓ Ṛ ṛ  Ṝ ṝ  Ṟ ṟ  Ɽ ɽ  R̃ r̃  ᵲ  ᵳ  ᶉ\nS\nŚ ś  Ṡ ṡ  Ṣ ṣ  Ṩ ṩ  Ṥ ṥ  S̩ s̩  Ŝ ŝ Ṧ ṧ  Š š  Ş ş  Ș ș  S̈ s̈  ᶊ  ȿ  ᵴ  ᶳ ẛ\nT\nŤ ť  Ṫ ṫ  Ţ ţ  Ṭ ṭ  Ț ț  Ṱ ṱ  Ṯ ṯ  Ŧ ŧ  Ⱦ ⱦ  Ƭ ƭ  Ʈ ʈ  T̈ ẗ  ᵵ  ƫ  ȶ\nU\nÚ ú  Ù ù  Ũ ũ  Ụ ụ  Ü ü  Ṳ ṳ  Ū ū  Û û  Ṷ ṷ  Ǔ ǔ  Ű ű  Ŭ ŭ  Ȗ ȗ  Ů ů  Ǜ ǜ  Ǘ ǘ  Ǚ ǚ  Ǖ ǖ Ư ư  Ứ ứ  Ừ ừ  Ử ử  Ự ự Ủ ủ Ū̀ ū̀  Ū́ ū́  Ṻ ṻ  Ū̃ ū̃  Ṹ ṹ  Ṵ ṵ  ᶙ  Ų ų  Ų́ ų́  Ų̃ ų̃  Ȕ ȕ\nV\nṼ ṽ  Ṿ ṿ  Ʋ ʋ  ᶌ\nW\nẂ ẃ  Ẁ ẁ  Ŵ ŵ  Ẅ ẅ  Ẇ ẇ  Ẉ ẉ  ẘ\nX\nẌ ẍ  Ẋ ẋ  ᶍ\nY\nÝ ý  Ỳ ỳ  Ŷ ŷ  Ÿ ÿ  Ỹ ỹ  Ẏ ẏ  Ỵ ỵ ẙ  Ỷ ỷ  Ȳ ȳ  Ɏ ɏ  Ƴ ƴ\nZ\nŹ ź  Ẑ ẑ  Ž ž  Ż ż  Ẓ ẓ  Ẕ ẕ  Ƶ ƶ  ᵶ   ᶎ  Ⱬ ⱬ");
    ui->textEdit->setText(diString);
    ui->textEdit->setReadOnly(true);
}

DiacriticsView::~DiacriticsView()
{
    delete ui;
}

void DiacriticsView::on_pushButton_clicked()
{
    ui->textEdit->copy();
}
